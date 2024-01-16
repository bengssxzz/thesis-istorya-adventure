using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_SingleShot : BaseAttackBehaviour
{

    protected override IEnumerator FireBehaviourForLoop()
    {
        GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
        newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
        newBul.transform.position = transform.position;

        yield return null;
    }
}
