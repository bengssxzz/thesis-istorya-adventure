using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_RapidShot : BaseAttackBehaviour
{
    private Vector2 bulletDir;
    private GameObject newBul;

    protected override IEnumerator FireBehaviourForLoop()
    {

        for (int i = 0; i < GetAmountToInt; i++)
        {
            yield return new WaitForSeconds(intervalShoot);

            bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

            newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
            newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
            newBul.transform.position = transform.position;
        }

    }

    protected override IEnumerator FireBehaviourWhileLoop()
    {
        //startTimer = Time.time;

        do
        {
            Debug.Log("TIMER: " + startTimer);
            yield return new WaitForSeconds(intervalShoot);

            bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

            newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
            newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
            newBul.transform.position = transform.position;

        } while (!DoneTimer());

    }



    //[SerializeField] private Projectile projectilePrefab;
    //[SerializeField] private int countShoot;
    //[SerializeField] private float overrideTimer = 0;
    //[SerializeField] private float intervalShoot;


    //protected override IEnumerator FireBehaviourForLoop()
    //{
    //    float triggerTime = Time.time;
    //    float timer = 0;


    //    do
    //    {
    //        Vector2 bulletDir;
    //        GameObject newBul;

    //        if (overrideTimer > 0)
    //        {
    //            ////Shoot
    //            yield return new WaitForSeconds(intervalShoot);

    //            bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

    //            newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
    //            newBul.transform.position = transform.position;

    //            Debug.Log(timer);

    //            timer = Time.time - triggerTime;
    //        }
    //        else
    //        {

    //            for (int i = 0; i < countShoot; i++)
    //            {
    //                yield return new WaitForSeconds(intervalShoot);

    //                bulletDir = ((Vector2)PlayerSingleton.Instance.transform.position - (Vector2)transform.position).normalized;

    //                newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //                newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
    //                newBul.transform.position = transform.position;
    //            }
    //            break;
    //        }
    //    } while (timer < overrideTimer);

    //}
}
