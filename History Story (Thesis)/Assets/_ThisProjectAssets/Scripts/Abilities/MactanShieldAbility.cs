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
    [SerializeField] private ObjectPoolerInfo projectile;
    [SerializeField] private int projectileMaxCount = 30;
    [SerializeField] private float projectileMaxDistance = 1f;
    [SerializeField] private float projectileSpeed = 55f;
    [SerializeField] private float projectileAddDamagePercent = 10f;

    public float timeDelay = 5;

    float startAngle = 0;


    public override void InitializeAbility_Used()
    {
        base.InitializeAbility_Used();

        projectile.InitializePoolerInfo();
        ObjectPoolingManager.Instance.CreateNewPool(projectile, 10, true);
    }


    // Override PreCastingBehaviour with UniTask
    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);
    }

    // Override CastingBehaviour with UniTask
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);

        _ = entity.GetEntityStats.TempModifiedMoveSpeed(ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.currentMoveSpeed, -40), timeDelay); //Slow
        _ = entity.GetEntityStats.TempModifiedDodgeChance(100, timeDelay); //Increase dodge

        entity.GetAttackHandler.IsCanAttack = false;

        // Wait for the specified time
        await UniTask.Delay(TimeSpan.FromSeconds(timeDelay));

    }

    // Override FinishedCastingBehaviour with UniTask
    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);

        entity.GetAttackHandler.IsCanAttack = true;

        var attackHandler = entity.GetAttackHandler;

        float currentAngle = startAngle;

        if (attackHandler != null)
        {
            for (int j = 0; j < projectileMaxCount; j++)
            {
                // Convert angle to radians
                float radians = currentAngle * Mathf.Deg2Rad;

                float dirX = Mathf.Cos(radians);
                float dirY = Mathf.Sin(radians);

                Vector2 bulletDir = new Vector2(dirX, dirY);

                var dir = entity.GetAttackHandler.GetBaseAttackPosition.TransformDirection(bulletDir);
                GameObject newBul = ObjectPoolingManager.Instance.GetItemFromPool(projectile);
                newBul.transform.position = entity.transform.position;
                newBul.SetActive(true);

                //Projectile settings
                var startingPosition = (Vector2)attackHandler.GetBaseAttackPosition.position;
                var colorType = attackHandler.GetColorType;
                var hitLayer = attackHandler.GetScannerEntities.GetCombineLayerMask;


                var projectileSettings = newBul.GetComponent<BaseProjectile>();
                projectileSettings.InitializeProjectile(entity, dir, startingPosition, projectileMaxDistance, hitLayer, colorType);
                projectileSettings.OverrideProjectileSpeed(projectileSpeed);
                projectileSettings.OverrideProjectileMaxDistance(projectileMaxDistance);
                projectileSettings.OverrideProjectileDamage(ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.currentDamage, projectileAddDamagePercent), 0);

                currentAngle += 360f / projectileMaxCount;

                // Optionally, if you want to limit the angle to a full circle
                if (currentAngle >= 360f)
                {
                    currentAngle -= 360f;
                }
            }
            startAngle = -360 / 2;
        }


    }
}



//public class MactanShieldAbility : AbilityScript
//{
//    [Space(15)]
//    [Header("Mactan Shield Ability")]
//    [SerializeField] private BaseProjectile projectile;
//    [SerializeField] private int projectileMaxCount = 30;
//    [SerializeField] private float projectileMaxDistance = 1f;
//    [SerializeField] private float projectileSpeed = 55f;
//    [SerializeField] private float projectileAdditionalDamage = 55f;

//    [Range(0, 100)] public float addDefensePercentage;
//    public float time;
//    float startAngle = 0;

//    // Override PreCastingBehaviour with UniTask
//    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        await base.PreCastingBehaviour(mono, entity);
//    }

//    // Override CastingBehaviour with UniTask
//    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        await base.CastingBehaviour(mono, entity);

//        // Calculate defense percentage
//        var entityDefense = entity.GetEntityStats.maxDefense;
//        var calculateDefense = ThesisUtility.ComputeAddedValueWithPercentage(entityDefense, addDefensePercentage);

//        // Temporarily modify defense
//        _ = entity.GetEntityStats.TempModifiedDefense(calculateDefense, time);

//        // Wait for the specified time
//        await UniTask.Delay(TimeSpan.FromSeconds(time));

//    }

//    // Override FinishedCastingBehaviour with UniTask
//    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        await base.FinishedCastingBehaviour(mono, entity);

//        var attackHandler = entity.GetAttackHandler;

//        float currentAngle = startAngle;

//        if(attackHandler != null)
//        {
//            for (int j = 0; j < projectileMaxCount; j++)
//            {
//                // Convert angle to radians
//                float radians = currentAngle * Mathf.Deg2Rad;

//                float dirX = Mathf.Cos(radians);
//                float dirY = Mathf.Sin(radians);

//                Vector2 bulletDir = new Vector2(dirX, dirY);

//                var dir = entity.GetAttackHandler.GetBaseAttackPosition.TransformDirection(bulletDir);
//                GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectile.gameObject, entity.transform.position);
//                newBul.transform.position = entity.transform.position;
//                newBul.SetActive(true);

//                //Projectile settings
//                var startingPosition = (Vector2)attackHandler.GetBaseAttackPosition.position;
//                var colorType = attackHandler.GetColorType;
//                var hitLayer = attackHandler.GetScannerEntities.GetCombineLayerMask;


//                var projectileSettings = newBul.GetComponent<BaseProjectile>();
//                projectileSettings.InitializeProjectile(entity, dir, startingPosition, projectileMaxDistance, hitLayer, colorType);
//                projectileSettings.OverrideProjectileSpeed(projectileSpeed);
//                projectileSettings.OverrideProjectileMaxDistance(projectileMaxDistance);
//                projectileSettings.OverrideProjectileDamage(entity.GetEntityStats.currentDamage + projectileAdditionalDamage, 0);

//                currentAngle += 360f / projectileMaxCount;

//                // Optionally, if you want to limit the angle to a full circle
//                if (currentAngle >= 360f)
//                {
//                    currentAngle -= 360f;
//                }
//            }
//            startAngle = -360 / 2;
//        }


//    }
//}
