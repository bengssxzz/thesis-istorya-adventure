using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_SingleShot : BaseAttackBehaviour
{
    [SerializeField] private Projectile projectilePrefab;
    //[SerializeField] private int countShoot;
    //[SerializeField] private float overrideTimer = 0;
    //[SerializeField] private float intervalShoot;


    protected override IEnumerator FireBehaviour()
    {
        attackIsPlaying = true;
        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
        newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
        newBul.transform.position = transform.position;

        yield return null;
        attackIsPlaying = false;
    }
}
