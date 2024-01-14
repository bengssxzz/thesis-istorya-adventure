using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_RapidShot : BaseAttackBehaviour
{
    [SerializeField] private Projectile projectilePrefab;
    [SerializeField] private int countShoot;
    [SerializeField] private float overrideTimer = 0;
    [SerializeField] private float intervalShoot;


    protected override IEnumerator FireBehaviour()
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
                newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
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
                    newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
                    newBul.transform.position = transform.position;
                }
                break;
            }
        } while (timer < overrideTimer);

    }
}
