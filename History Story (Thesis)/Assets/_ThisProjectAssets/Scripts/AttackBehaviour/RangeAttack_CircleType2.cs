
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_CircleType2 : BaseAttackBehaviour
{
    [SerializeField] private int circleRayCount;
    [SerializeField] [Range(0, 360)] private float viewAngle;

    [SerializeField] private float rotationSpeed = 0;

    private float angleStep;
    private float angle = 0; //Start angle

    protected override IEnumerator FireBehaviourForLoop()
    {
        angleStep = viewAngle / circleRayCount;

        for (int i = 0; i < GetAmountToInt; i++)
        {
            yield return new WaitForSeconds(intervalShoot);

            for (int j = 0; j < circleRayCount; j++)
            {
                float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
                float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

                Vector2 bulletVector = new Vector2(dirX, dirY);
                Vector2 dir = (bulletVector - (Vector2)transform.position).normalized;

                //GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                //newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, dir, 5, GetAttackController.GetMyEnemyLayer);
                //newBul.transform.position = GetAttackController.GetAttackHolder.position;
                //newBul.transform.rotation = GetAttackController.GetAttackHolder.rotation;
                InitializeProjectile(transform.position, dir);

                angle += angleStep + rotationSpeed;
            }
        }
    }

    protected override IEnumerator FireBehaviourWhileLoop()
    {
        angleStep = viewAngle / circleRayCount;

        do
        {
            yield return new WaitForSeconds(intervalShoot);

            for (int j = 0; j < circleRayCount; j++)
            {
                float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
                float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

                Vector2 bulletVector = new Vector2(dirX, dirY);
                Vector2 dir = (bulletVector - (Vector2)transform.position).normalized;

                //GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                //newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, bulletDir, 5, GetAttackController.GetMyEnemyLayer);
                //newBul.transform.position = GetAttackController.GetAttackHolder.position;
                //newBul.transform.rotation = GetAttackController.GetAttackHolder.rotation;
                InitializeProjectile(transform.position, dir);

                angle += angleStep + rotationSpeed;
            }
        } while (!DoneTimer());
    }





    //[SerializeField] private Projectile projectilePrefab;
    //[SerializeField] private int countShoot;
    //[SerializeField] private float overrideTimer = 0;
    //[SerializeField] private float intervalShoot;

    //[SerializeField] private int circleRayCount;
    //[SerializeField] [Range(0, 360)] private float viewAngle;



    //protected override IEnumerator FireBehaviourForLoop()
    //{
    //    float angleStep = viewAngle / circleRayCount;
    //    float angle = 0; //Start angle

    //    for (int i = 0; i < countShoot; i++)
    //    {
    //        yield return new WaitForSeconds(intervalShoot);

    //        for (int j = 0; j < circleRayCount; j++)
    //        {
    //            float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //            float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, bulletDir, 5, GetAttackController.GetMyEnemyLayer);
    //            newBul.transform.position = GetAttackController.GetAttackHolder.position;
    //            newBul.transform.rotation = GetAttackController.GetAttackHolder.rotation;

    //            angle += angleStep;
    //        }
    //    }
    //}







    //protected override IEnumerator FireBehaviour()
    //{
    //    float angleStep = viewAngle / circleRayCount;
    //    float angle = 0; //Start angle

    //    for (int i = 0; i < countShoot; i++)
    //    {
    //        yield return new WaitForSeconds(intervalShoot);

    //        for (int j = 0; j < circleRayCount; j++)
    //        {
    //            float dirX = transform.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
    //            float dirY = transform.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(null, bulletDir, 5, attackController.GetMyEnemyLayer);
    //            newBul.transform.position = attackController.GetAttackHolder.position;
    //            newBul.transform.rotation = attackController.GetAttackHolder.rotation;

    //            angle += angleStep;
    //        }
    //    }
    //}

}
