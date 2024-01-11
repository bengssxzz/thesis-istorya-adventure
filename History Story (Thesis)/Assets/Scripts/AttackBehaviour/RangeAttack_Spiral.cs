using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_Spiral : BaseAttackBehaviour
{
    [SerializeField] private Projectile projectilePrefab;
    [SerializeField] private int countShoot = 0;
    [SerializeField] private float overrideTimer = 0;
    [SerializeField] private float intervalShoot;

    [SerializeField] private int spiralRayCount = 1;

    private float spiralAngle;


    protected override IEnumerator FireBehaviour()
    {
        for (int j = 0; j < countShoot; j++)
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

                spiralAngle += 10f;

            }
        }
    }
}
