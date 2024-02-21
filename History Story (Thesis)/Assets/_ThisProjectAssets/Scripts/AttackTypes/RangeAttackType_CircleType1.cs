using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.Events;

[CreateAssetMenu(fileName = "New Circle Type 1 Attack Type", menuName = "Attack Type/Circle Type 1")]
public class RangeAttackType_CircleType1 : RangeAttackTypeSO
{
    [SerializeField] private int circleRayCount;
    [SerializeField] [Range(0, 360)] private float viewAngle;

    float angleStep = 0;
    float startAngle = 0; // Start at half the view angle to the left of the right direction

    protected override async UniTask FireBehaviourForLoop(AttackHandler attackHandler, int amount, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        angleStep = viewAngle / (circleRayCount);
        startAngle = -viewAngle / 2;

        for (int i = 0; i < amount; i++)
        {
            if (cancellationToken.IsCancellationRequested)
                break;

            await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));

            float currentAngle = startAngle;

            for (int j = 0; j < circleRayCount; j++)
            {
                // Calculate the x and y direction based on the current angle
                float dirX = Mathf.Cos((currentAngle * Mathf.PI) / 180);
                float dirY = Mathf.Sin((currentAngle * Mathf.PI) / 180);

                // Apply the direction from the object's right vector
                Vector2 bulletDir = new Vector2(dirX, dirY);

                var host = attackHandler.GetEntity;
                var direction = attackHandler.GetBaseAttackPosition.TransformDirection(bulletDir);
                var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

                InitializeProjectile(attackHandler.GetEntity, attackHandler, attackHandler.GetAttackPositionEndPoint.position, direction, projectileDistance);


                // Increment the angle for the next bullet
                currentAngle += angleStep;
            }

            triggerCallBack?.Invoke();
            startAngle = -viewAngle / 2; // Reset the start angle for the next volley
        }

        await UniTask.Yield();
    }

    protected override async UniTask FireBehaviourWhileLoop(AttackHandler attackHandler, float timer, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        angleStep = viewAngle / (circleRayCount);
        startAngle = -viewAngle / 2;

        do
        {
            if (cancellationToken.IsCancellationRequested)
                break;

            await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));

            float currentAngle = startAngle;

            for (int j = 0; j < circleRayCount; j++)
            {
                // Calculate the x and y direction based on the current angle
                float dirX = Mathf.Cos((currentAngle * Mathf.PI) / 180);
                float dirY = Mathf.Sin((currentAngle * Mathf.PI) / 180);

                // Apply the direction from the object's right vector
                Vector2 bulletDir = new Vector2(dirX, dirY);

                //var dir = attackController.GetAttackHolder.TransformDirection(bulletDir);
                var host = attackHandler.GetEntity;
                var direction = attackHandler.GetBaseAttackPosition.TransformDirection(bulletDir);
                var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

                InitializeProjectile(attackHandler.GetEntity, attackHandler, attackHandler.GetAttackPositionEndPoint.position, direction, projectileDistance);

                // Increment the angle for the next bullet
                currentAngle += angleStep;
            }
            triggerCallBack?.Invoke();

            startAngle = -viewAngle / 2; // Reset the start angle for the next volley
        } while (!FinishedTimer());

        await UniTask.Yield();
    }
}
