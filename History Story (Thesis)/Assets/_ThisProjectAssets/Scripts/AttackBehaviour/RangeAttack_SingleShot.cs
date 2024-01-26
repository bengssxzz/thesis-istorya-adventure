using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;

public class RangeAttack_SingleShot : BaseAttackBehaviour
{

    [Space(20)]
    [Header("Feedbacks")]
    [SerializeField] private MMF_Player fireFeedback;

    protected override IEnumerator FireBehaviourForLoop()
    {
        GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
        newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, GetAttackController.GetDirectionTowardsEnemy(), 5, GetAttackController.GetMyEnemyLayer);
        newBul.transform.position = transform.position;

        fireFeedback?.PlayFeedbacks();
        yield return null;
    }
}
