using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.Events;

[CreateAssetMenu(fileName = "New Circle Type 2 Attack Type", menuName = "Attack Type/Circle Type 2")]
public class RangeAttackType_CircleType2 : RangeAttackTypeSO
{
    [SerializeField] private int circleRayCount;
    [SerializeField] [Range(0, 360)] private float viewAngle;

    [SerializeField] private float rotationSpeed = 0;

    private float angleStep;
    private float angle = 0; //Start angle


    protected override async UniTask FireBehaviourForLoop(Projectile projectile, AttackHandler attackHandler, int amount, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        angleStep = viewAngle / circleRayCount;

        var host = attackHandler.GetEntity;
        var centerPosition = attackHandler.GetBaseAttackPosition;
        var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;


        for (int i = 0; i < amount; i++)
        {
            if (cancellationToken.IsCancellationRequested)
                break;

            await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));

            for (int j = 0; j < circleRayCount; j++)
            {
                float dirX = centerPosition.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
                float dirY = centerPosition.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

                Vector2 bulletVector = new Vector2(dirX, dirY);

                var direction = (bulletVector - (Vector2)centerPosition.position).normalized;



                InitializeProjectile(host, attackHandler, attackHandler.GetAttackPositionEndPoint.position, direction, projectileDistance);


                angle += angleStep + rotationSpeed;
            }

            triggerCallBack?.Invoke();
        }
    }

    protected override async UniTask FireBehaviourWhileLoop(Projectile projectile, AttackHandler attackHandler, float timer, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        angleStep = viewAngle / circleRayCount;

        var host = attackHandler.GetEntity;
        var centerPosition = attackHandler.GetBaseAttackPosition;
        var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

        do
        {
            if (cancellationToken.IsCancellationRequested)
                break;

            await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));

            for (int j = 0; j < circleRayCount; j++)
            {
                float dirX = centerPosition.position.x + Mathf.Sin((angle * Mathf.PI) / 180f);
                float dirY = centerPosition.position.y + Mathf.Cos((angle * Mathf.PI) / 180f);

                Vector2 bulletVector = new Vector2(dirX, dirY);

                var direction = (bulletVector - (Vector2)centerPosition.position).normalized;

                InitializeProjectile(host, attackHandler, attackHandler.GetAttackPositionEndPoint.position, direction, projectileDistance);


                angle += angleStep + rotationSpeed;
            }

            triggerCallBack?.Invoke();
        } while (!FinishedTimer());

        await UniTask.Yield();
    }
}
