using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Entities))]
[RequireComponent(typeof(AttackController))]
public class ShootAttackBehaviour : MonoBehaviour
{
    private AttackController attackController;


    [SerializeField] private Projectile projectilePrefab;
    [SerializeField] private int countShoot;
    [SerializeField] private float overrideTimer = 0;
    [SerializeField] private float intervalShoot;

    [SerializeField] private int circleRayCount;
    [SerializeField] private float endAngle, startAngle;
    [SerializeField] [Range(0, 360)] private float viewAngle;

    private void Awake()
    {
        attackController = GetComponent<AttackController>();
    }

    private void Start()
    {
        StartCoroutine(TriggerCircleShoot_Type1());
    }


    private Vector2 DirFromAngle(float eulerY, float angleInDegree)
    {
        angleInDegree += eulerY;

        return new Vector2(Mathf.Sin(angleInDegree * Mathf.Deg2Rad), Mathf.Cos(angleInDegree * Mathf.Deg2Rad));

    }

    IEnumerator TriggerAimShoot()
    {
        float triggerTime = Time.time;
        float timer = 0;


        do
        {
            Vector2 bulletDir;
            GameObject newBul;

            if (overrideTimer > 0)
            {
                ////Shoot
                yield return new WaitForSeconds(intervalShoot);

                bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

                newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
                newBul.transform.position = transform.position;

                Debug.Log(timer);

                timer = Time.time - triggerTime;
            }
            else
            {

                for (int i = 0; i < countShoot; i++)
                {
                    yield return new WaitForSeconds(intervalShoot);

                    bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

                    newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                    newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
                    newBul.transform.position = transform.position;
                }
                break;
            }
        } while (timer < overrideTimer);



    }


    //IEnumerator TriggerCircleShoot()
    //{
    //    float triggerTime = Time.time;
    //    float timer = 0;

    //    do
    //    {
    //        if (overrideTimer > 0)
    //        {
    //            timer = Time.time - triggerTime;
    //        }
    //        else
    //        {
    //            yield return new WaitForSeconds(intervalShoot);

    //            // Calculate startAngle and endAngle based on character's rotation
    //            Vector3 startAngle = DirFromAngle(-attackController.GetAttackHolder.eulerAngles.z + 90, -viewAngle / 2);
    //            Vector3 endAngle = DirFromAngle(-attackController.GetAttackHolder.eulerAngles.z + 90, viewAngle / 2);

    //            // Calculate angleStep based on the difference between startAngle and endAngle
    //            float angleStep = (startAngle - endAngle) / circleRayCount;
    //            float angle = -viewAngle;

    //            for (int i = 0; i < countShoot; i++)
    //            {
    //                yield return new WaitForSeconds(intervalShoot);

    //                for (int j = 0; j < circleRayCount; j++)
    //                {
    //                    float dirX = transform.position.x + Mathf.Cos((angle * Mathf.Deg2Rad));
    //                    float dirY = transform.position.y + Mathf.Sin((angle * Mathf.Deg2Rad));

    //                    Vector2 bulletVector = new Vector2(dirX, dirY);
    //                    Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //                    GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //                    newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
    //                    newBul.transform.position = transform.position;

    //                    angle += angleStep;
    //                }
    //            }

    //            break;
    //        }

    //        Debug.Log(timer);
    //    } while (timer < overrideTimer);
    //}







    IEnumerator TriggerCircleShoot_Type2()
    {
        float angleStep = viewAngle / circleRayCount;
        float angle = 0; //Start angle

        for (int i = 0; i < countShoot; i++)
        {
            yield return new WaitForSeconds(intervalShoot);

            for (int j = 0; j < circleRayCount; j++)
            {
                float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
                float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

                Vector2 bulletVector = new Vector2(dirX, dirY);
                Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

                GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
                newBul.transform.position = transform.position;

                angle += angleStep;
            }
        }

    }

    IEnumerator TriggerCircleShoot_Type1()
    {
        //float angleStep = (endAngle - startAngle) / circleRayCount;
        float angleStep = viewAngle / circleRayCount;
        float angle = 0; //Start angle

        for (int i = 0; i < countShoot; i++)
        {
            yield return new WaitForSeconds(intervalShoot);

            for (int j = 0; j < circleRayCount; j++)
            {
                float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
                float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

                Vector2 bulletVector = new Vector2(dirX, dirY);
                Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

                GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
                newBul.transform.position = transform.position;

                angle += angleStep;
            }
            angle = 0;
        }


        //float angleStep = viewAngle / circleRayCount;
        //float angle = 0; //Start angle

        //for (int i = 0; i < countShoot; i++)
        //{
        //    yield return new WaitForSeconds(intervalShoot);

        //    for (int j = 0; j < circleRayCount; j++)
        //    {
        //        float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
        //        float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

        //        Vector2 bulletVector = new Vector2(dirX, dirY);
        //        Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

        //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
        //        newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
        //        newBul.transform.position = transform.position;

        //        angle += angleStep;
        //    }
        //}



        //for (int i = 0; i < countShoot; i++)
        //{
        //    yield return new WaitForSeconds(intervalShoot);

        //    for (int j = 0; j < countShoot; j++)
        //    {
        //        float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
        //        float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

        //        Vector2 bulletVector = new Vector2(dirX, dirY);
        //        Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

        //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
        //        newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
        //        newBul.transform.position = transform.position;

        //        angle += angleStep;
        //    }
        //}

    }











    //IEnumerator TriggerCircleShoot()
    //{
    //    float triggerTime = Time.time;
    //    float timer = 0;


    //    do
    //    {
    //        Vector2 bulletDir;
    //        GameObject newBul;

    //        if (overrideTimer > 0)
    //        {
    //            timer = Time.time - triggerTime;
    //        }
    //        else
    //        {
    //            //Logic here
    //            yield return new WaitForSeconds(intervalShoot);

    //            Vector3 startAngle = DirFromAngle(-attackController.GetAttackHolder.eulerAngles.z + 90, -viewAngle / 2);
    //            Vector3 endAngle = DirFromAngle(-attackController.GetAttackHolder.eulerAngles.z + 90, viewAngle / 2);

    //            float angleStep = (startAngle - endAngle) / circleRayCount;
    //            float angle = startAngle;

    //            for (int i = 0; i < countShoot; i++)
    //            {
    //                yield return new WaitForSeconds(intervalShoot);

    //                for (int j = 0; j < circleRayCount; j++)
    //                {
    //                    float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //                    float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //                    Vector2 bulletVector = new Vector2(dirX, dirY);
    //                    bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //                    newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //                    newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
    //                    newBul.transform.position = transform.position;

    //                    angle += angleStep;
    //                }
    //            }


    //            break;
    //        }

    //        Debug.Log(timer);
    //    } while (timer < overrideTimer);

    //}


    //IEnumerator TriggerCircleShoot()
    //{
    //    float angleStep = (endAngle - startAngle) / amount;
    //    float angle = startAngle;

    //    for (int i = 0; i < countShoot; i++)
    //    {
    //        yield return new WaitForSeconds(shootBetween);

    //        for (int j = 0; j < amount; j++)
    //        {
    //            float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //            float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //            newBul.transform.position = transform.position;

    //            angle += angleStep;
    //        }
    //    }


    //    //IEnumerator TriggerCircleShoot()
    //    //{
    //    //    float angleStep = (endAngle - startAngle) / circleRayCount;
    //    //    float angle = startAngle;

    //    //    for (int i = 0; i < countShoot; i++)
    //    //    {
    //    //        yield return new WaitForSeconds(intervalShoot);

    //    //        for (int j = 0; j < countShoot; j++)
    //    //        {
    //    //            float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //    //            float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //    //            newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //            newBul.transform.position = transform.position;

    //    //            angle += angleStep;
    //    //        }
    //    //    }












    //    //    //[System.Serializable] public class AttackType
    //    //    //{
    //    //    //    public enum ShootType { Aim, Circle, Spiral}


    //    //    //    [Header("Angle")]
    //    //    //    public int amount;
    //    //    //    public int startAngle = 0;
    //    //    //    public int endAngle = 360;

    //    //    //    [Header("Shoot")]
    //    //    //    public Projectile projectile;
    //    //    //    public float shootBetween;
    //    //    //    public int countShoot;

    //    //    //    public ShootType shootType;
    //    //    //}

    //    //    //private AttackController attackController;
    //    //    //private Entities entity;

    //    //    //public List<AttackType> attackTypes;

    //    //    //[Header("Angle")]
    //    //    //[SerializeField] private int amount;
    //    //    //[SerializeField] private int startAngle = 0;
    //    //    //[SerializeField] private int endAngle = 360;

    //    //    //[Header("Shoot")]
    //    //    //[SerializeField] private Projectile projectile;
    //    //    //[SerializeField] private float shootBetween;
    //    //    //[SerializeField] private int countShoot;


    //    //    //private float spiralAngle;

    //    //    //private Vector2 shootDir;


    //    //    //private void Awake()
    //    //    //{
    //    //    //    attackController = GetComponent<AttackController>();
    //    //    //    entity = GetComponent<Entities>();
    //    //    //}

    //    //    //private void Start()
    //    //    //{
    //    //    //    //StartCoroutine(TriggerCircleShoot());
    //    //    //    StartCoroutine(TriggerAimShoot());
    //    //    //}

    //    //    //IEnumerator TriggerCircleShoot()
    //    //    //{
    //    //    //    float angleStep = (endAngle - startAngle) / amount;
    //    //    //    float angle = startAngle;

    //    //    //    for (int i = 0; i < countShoot; i++)
    //    //    //    {
    //    //    //        yield return new WaitForSeconds(shootBetween);

    //    //    //        for (int j = 0; j < amount; j++) 
    //    //    //        {
    //    //    //            float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //    //    //            float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //    //    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //            newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //            newBul.transform.position = transform.position;

    //    //    //            angle += angleStep;
    //    //    //        }
    //    //    //    }



    //    //    //    yield return null;
    //    //    //}
    //    //    //IEnumerator TriggerSpiralShoot()
    //    //    //{
    //    //    //    for (int i = 0; i < countShoot; i++)
    //    //    //    {
    //    //    //        yield return new WaitForSeconds(shootBetween);

    //    //    //        float dirX = transform.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
    //    //    //        float dirY = transform.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


    //    //    //        Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //        Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //        newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //        newBul.transform.position = transform.position;

    //    //    //        spiralAngle += 10f;

    //    //    //    }
    //    //    //}
    //    //    //IEnumerator TriggerSpiralShoot1()
    //    //    //{
    //    //    //    float angleStep = 10f; // Adjust the step size as needed
    //    //    //    float angle = 0;

    //    //    //    for (int i = 0; i < countShoot; i++)
    //    //    //    {
    //    //    //        yield return new WaitForSeconds(shootBetween);

    //    //    //        // Spin the TriggerCircleShoot pattern
    //    //    //        for (int j = 0; j < amount; j++)
    //    //    //        {
    //    //    //            float dirX = transform.position.x + Mathf.Sin(((angle + j * angleStep) * Mathf.PI) / 180f);
    //    //    //            float dirY = transform.position.y + Mathf.Cos(((angle + j * angleStep) * Mathf.PI) / 180f);

    //    //    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //            newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //            newBul.transform.position = transform.position;
    //    //    //        }

    //    //    //        angle += angleStep; // Increment the angle for the next spiral
    //    //    //    }
    //    //    //}
    //    //    //IEnumerator TriggerAimShoot()
    //    //    //{

    //    //    //    for (int i = 0; i < countShoot; i++)
    //    //    //    {
    //    //    //        yield return new WaitForSeconds(shootBetween);

    //    //    //        Vector2 bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

    //    //    //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //        newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //        newBul.transform.position = transform.position;
    //    //    //    }





    //    //    //}



    //    //    //private void TriggerCircleFire()
    //    //    //{
    //    //    //    float angleStep = (endAngle - startAngle) / amount;
    //    //    //    float angle = startAngle;

    //    //    //    for (int i = 0; i < amount; i++)
    //    //    //    {
    //    //    //        float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //    //    //        float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //    //    //        Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //        Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //        newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //        newBul.transform.position = transform.position;

    //    //    //        angle += angleStep;
    //    //    //    }

    //    //    //}


    //    //    //private void TriggerSpiralSingleFire()
    //    //    //{
    //    //    //    float dirX = transform.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
    //    //    //    float dirY = transform.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


    //    //    //    Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //    Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //    GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //    newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //    newBul.transform.position = transform.position;

    //    //    //    spiralAngle += 10f;
    //    //    //}

    //    //    //private void TriggerSpiralDoubleFire()
    //    //    //{
    //    //    //    for (int i = 0; i < amount; i++)
    //    //    //    {
    //    //    //        float dirX = transform.position.x + Mathf.Sin(((spiralAngle + 180f * i) * Mathf.PI) / 180f);
    //    //    //        float dirY = transform.position.y + Mathf.Cos(((spiralAngle + 180f * i) * Mathf.PI) / 180f);


    //    //    //        Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //        Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //        newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //        newBul.transform.position = transform.position;

    //    //    //        //angle += angleStep;
    //    //    //        spiralAngle += 10f;

    //    //    //        if(spiralAngle >= 360) { spiralAngle = 0; }
    //    //    //    }
    //    //    //}

    //    //    //private void TriggerSpiralMultipleFire()
    //    //    //{
    //    //    //    // Rotate the bullets
    //    //    //    for (int i = 0; i < amount; i++)
    //    //    //    {
    //    //    //        float dirX = transform.position.x + Mathf.Sin(((spiralAngle + 180f * i) * Mathf.PI) / 180f);
    //    //    //        float dirY = transform.position.y + Mathf.Cos(((spiralAngle + 180f * i) * Mathf.PI) / 180f);

    //    //    //        Vector2 bulletVector = new Vector2(dirX, dirY);
    //    //    //        Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //    //    //        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
    //    //    //        newBul.GetComponent<Projectile>().InitializeProjectile(entity, bulletDir, 5, attackController.GetMyEnemyLayer);
    //    //    //        newBul.transform.position = transform.position;

    //    //    //        spiralAngle += 10f;

    //    //    //        if (spiralAngle >= 360) { spiralAngle = 0; }
    //    //    //    }
    //    //    //}




    //    //}
    //}









}