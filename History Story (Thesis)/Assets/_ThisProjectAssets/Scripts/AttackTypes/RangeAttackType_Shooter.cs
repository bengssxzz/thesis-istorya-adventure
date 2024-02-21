using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.Events;

[CreateAssetMenu(fileName = "New Shooter Attack Type", menuName = "Attack Type/Shooter Type")]
public class RangeAttackType_Shooter : RangeAttackTypeSO
{
    [Space(15)]
    [Header("Shooter Type")]
    [SerializeField] private bool followAimTarget = false;



    private Vector2 targetPosition;

    protected override async UniTask FireBehaviourForLoop(AttackHandler attackHandler, int amount, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        if(attackHandler.GetScannerEntities.GetNearestTarget != null)
            targetPosition = attackHandler.GetScannerEntities.GetNearestTarget.position;

        for (int i = 0; i < amount; i++)
        {
            if (cancellationToken.IsCancellationRequested)
                break;

            if (followAimTarget)
            {
                if(attackHandler.GetScannerEntities.GetNearestTarget != null)
                    targetPosition = attackHandler.GetScannerEntities.GetNearestTarget.position;
            }

            var host = attackHandler.GetEntity;
            var centerPosition = attackHandler.GetBaseAttackPosition;
            var direction = (targetPosition - (Vector2)centerPosition.position).normalized;
            var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

            InitializeProjectile(host, attackHandler, attackHandler.GetAttackPositionEndPoint.position, direction, projectileDistance);

            triggerCallBack?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));
        }

        await UniTask.Yield();
    }

    protected override async UniTask FireBehaviourWhileLoop(AttackHandler attackHandler, float timer, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        targetPosition = attackHandler.GetScannerEntities.GetNearestTarget.position;

        do
        {
            if (cancellationToken.IsCancellationRequested)
                break;

            if (followAimTarget)
            {
                targetPosition = attackHandler.GetScannerEntities.GetNearestTarget.position;
            }

            var host = attackHandler.GetEntity;
            var direction = (targetPosition - (Vector2)host.transform.position).normalized;
            var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

            InitializeProjectile(host, attackHandler, attackHandler.GetAttackPositionEndPoint.position, direction, projectileDistance);

            triggerCallBack?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));
        } while (!FinishedTimer());

        await UniTask.Yield();
    }












}
