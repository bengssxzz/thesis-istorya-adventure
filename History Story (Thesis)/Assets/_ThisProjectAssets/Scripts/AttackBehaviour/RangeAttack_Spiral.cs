using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_Spiral : BaseAttackBehaviour
{

    [SerializeField] private float spinSpeed = 10f;

    [SerializeField] private int spiralRayCount = 1;


    private float spiralAngle;

    protected override IEnumerator FireBehaviourForLoop()
    {
        for (int j = 0; j < GetAmountToInt; j++)
        {
            for (int i = 0; i < spiralRayCount; i++)
            {
                yield return new WaitForSeconds(intervalShoot);

                float dirX = transform.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
                float dirY = transform.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


                Vector2 bulletVector = new Vector2(dirX, dirY);
                Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

                GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, bulletDir, 5, GetAttackController.GetMyEnemyLayer);
                newBul.transform.position = transform.position;

                spiralAngle += spinSpeed;

            }
        }
    }

    protected override IEnumerator FireBehaviourWhileLoop()
    {
        do
        {
            for (int i = 0; i < spiralRayCount; i++)
            {
                yield return new WaitForSeconds(intervalShoot);

                float dirX = transform.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
                float dirY = transform.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


                Vector2 bulletVector = new Vector2(dirX, dirY);
                Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

                GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, bulletDir, 5, GetAttackController.GetMyEnemyLayer);
                newBul.transform.position = transform.position;

                spiralAngle += spinSpeed;

            }
        } while (!DoneTimer());
    }





    //[SerializeField] private Projectile projectilePrefab;
    //[SerializeField] private int countShoot = 0;
    //[SerializeField] private float overrideTimer = 0;
    //[SerializeField] private bool useTimer = false; 
    //[SerializeField] private float intervalShoot;
    //[SerializeField] private float spinSpeed = 10f;

    //[SerializeField] private int spiralRayCount = 1;

    //[Space(20)]
    //[Header("Override Projectile")]
    //[SerializeField] private float speed;
    //[SerializeField] private float lifetime;

    //private float spiralAngle;


    //protected override IEnumerator FireBehaviour()
    //{
    //    attackIsPlaying = true;
    //    for (int j = 0; j < countShoot; j++)
    //    {
    //        for (int i = 0; i < spiralRayCount; i++)
    //        {
    //            yield return new WaitForSeconds(intervalShoot);

    //            float dirX = transform.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
    //            float dirY = transform.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


    //            Vector2 bulletVector = new Vector2(dirX, dirY);
    //            Vector2 bulletDir = (bulletVector - (Vector2)transform.position).normalized;

    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, bulletDir, 5, GetAttackController.GetMyEnemyLayer);
    //            newBul.transform.position = transform.position;

    //            spiralAngle += spinSpeed;

    //        }
    //    }
    //    attackIsPlaying = false;
    //}

}
