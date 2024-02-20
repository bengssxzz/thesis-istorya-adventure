using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.Events;

[CreateAssetMenu(fileName = "New Spiral Attack Type", menuName = "Attack Type/Spiral")]
public class RangeAttackType_Spiral : RangeAttackTypeSO
{
    [SerializeField] private float spinSpeed = 10f;

    [SerializeField] private int spiralRayCount = 1;


    private float spiralAngle;



    protected override async UniTask FireBehaviourForLoop(Projectile projectile, AttackHandler attackHandler, int amount, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        var host = attackHandler.GetEntity;
        var centerPosition = attackHandler.GetBaseAttackPosition;
        var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

        for (int j = 0; j < amount; j++)
        {
            for (int i = 0; i < spiralRayCount; i++)
            {
                await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));

                float dirX = centerPosition.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
                float dirY = centerPosition.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


                Vector2 bulletVector = new Vector2(dirX, dirY);

                var direction = (bulletVector - (Vector2)centerPosition.position).normalized;

                InitializeProjectile(host, attackHandler, centerPosition.position, direction, projectileDistance);



                spiralAngle += spinSpeed;

            }

            triggerCallBack?.Invoke();
        }
    }

    protected override async UniTask FireBehaviourWhileLoop(Projectile projectile, AttackHandler attackHandler, float timer, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack)
    {
        var host = attackHandler.GetEntity;
        var centerPosition = attackHandler.GetBaseAttackPosition;
        var projectileDistance = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;

        do
        {
            for (int i = 0; i < spiralRayCount; i++)
            {
                await UniTask.Delay(TimeSpan.FromSeconds(intervalDelay));

                float dirX = centerPosition.position.x + Mathf.Sin((spiralAngle * Mathf.PI) / 180f);
                float dirY = centerPosition.position.y + Mathf.Cos((spiralAngle * Mathf.PI) / 180f);


                Vector2 bulletVector = new Vector2(dirX, dirY);
                var direction = (bulletVector - (Vector2)centerPosition.position).normalized;

                InitializeProjectile(host, attackHandler, centerPosition.position, direction, projectileDistance);


                spiralAngle += spinSpeed;

            }

            triggerCallBack?.Invoke();

        } while (!FinishedTimer());

        await UniTask.Yield();
    }
}
