using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using ThesisLibrary;
using System;

[CreateAssetMenu(fileName = "Mactan Shield", menuName = "Abilities/Mactan Shield")]
public class MactanShieldAbility : AbilityScript
{
    [Space(15)]
    [Header("Mactan Shield Ability")]
    [SerializeField] private Projectile projectile;
    [SerializeField] private int projectileMaxCount = 30;
    [SerializeField] private float projectileMaxDistance = 1f;
    [SerializeField] private float projectileSpeed = 55f;
    [SerializeField] private float projectileAdditionalDamage = 55f;

    [Range(0, 100)] public float addDefensePercentage;
    public float time;
    float startAngle = 0;

    // Override PreCastingBehaviour with UniTask
    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);
    }

    // Override CastingBehaviour with UniTask
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);

        // Calculate defense percentage
        var entityDefense = entity.GetEntityStats.maxDefense;
        var calculateDefense = ThesisUtility.ComputeAddedValueWithPercentage(entityDefense, addDefensePercentage);

        // Temporarily modify defense
        _ = entity.GetEntityStats.TempModifiedDefense(calculateDefense, time);

        // Wait for the specified time
        await UniTask.Delay(TimeSpan.FromSeconds(time));

    }

    // Override FinishedCastingBehaviour with UniTask
    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);

        float currentAngle = startAngle;

        for (int j = 0; j < projectileMaxCount; j++)
        {
            // Convert angle to radians
            float radians = currentAngle * Mathf.Deg2Rad;

            float dirX = Mathf.Cos(radians);
            float dirY = Mathf.Sin(radians);

            Vector2 bulletDir = new Vector2(dirX, dirY);

            var dir = entity.GetAttack_Controller.GetAttackHolder.TransformDirection(bulletDir);
            GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectile.gameObject, entity.transform.position);
            newBul.transform.position = entity.transform.position;

            var projectileSettings = newBul.GetComponent<Projectile>();
            projectileSettings.InitializeProjectile(entity, dir, entity.GetAttack_Controller.GetRangedAttackDistance);
            projectileSettings.OverrideProjectileSpeed(projectileSpeed);
            projectileSettings.OverrideProjectileMaxDistance(projectileMaxDistance);
            projectileSettings.OverrideProjectileDamage(entity.GetEntityStats.currentDamage + projectileAdditionalDamage);

            currentAngle += 360f / projectileMaxCount;

            // Optionally, if you want to limit the angle to a full circle
            if (currentAngle >= 360f)
            {
                currentAngle -= 360f;
            }
        }
        startAngle = -360 / 2;
    }











    //protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    //{
    //    yield return base.PreCastingBehaviour(mono, entity);


    //}
    //protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    //{
    //    yield return base.CastingBehaviour(mono, entity);

    //    //Kung gusto mag add ng defense, For example you want to add 40% 
    //    var entityDefense = entity.GetEntityStats.maxDefense;
    //    var calculateDefense = ThesisUtility.ComputeAddedValueWithPercentage(entityDefense, addDefensePercentage);
    //    entity.GetEntityStats.TempModifiedDefense(calculateDefense, time).ConfigureAwait(false); //Modify defence

    //    yield return new WaitForSeconds(time);
    //}

    //protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    //{
    //    yield return base.FinishedCastingBehaviour(mono, entity);

    //    float currentAngle = startAngle;


    //    for (int j = 0; j < circleRayCount; j++)
    //    {
    //        // Convert angle to radians
    //        float radians = currentAngle * Mathf.Deg2Rad;

    //        float dirX = Mathf.Cos(radians);
    //        float dirY = Mathf.Sin(radians);

    //        Vector2 bulletDir = new Vector2(dirX, dirY);

    //        var dir = entity.GetAttack_Controller.GetAttackHolder.TransformDirection(bulletDir);
    //        GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectile.gameObject, entity.transform.position);

    //        var projectileSettings = newBul.GetComponent<Projectile>();
    //        projectileSettings.InitializeProjectile(entity, dir, entity.GetAttack_Controller.GetRangedAttackDistance);
    //        projectileSettings.OverrideProjectileSpeed(projectileSpeed);
    //        projectileSettings.OverrideProjectileMaxDistance(projectileMaxDistance);
    //        projectileSettings.OverrideProjectileDamage(entity.GetEntityStats.currentDamage + projectileAdditionalDamage);


    //        //newBul.GetComponent<Projectile>().InitializeProjectile(entity, dir, entity.GetAttack_Controller.GetRangedAttackDistance);
    //        //newBul.transform.position = entity.transform.position;


    //        currentAngle += 360f / circleRayCount;

    //        // Optionally, if you want to limit the angle to a full circle
    //        if (currentAngle >= 360f)
    //        {
    //            currentAngle -= 360f;
    //        }
    //    }
    //    startAngle = -360 / 2;
    //}

}
