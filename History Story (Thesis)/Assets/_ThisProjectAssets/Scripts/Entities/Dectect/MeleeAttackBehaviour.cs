using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System;
using System.Linq;
using System.Threading;
using MoreMountains.Feedbacks;


#if UNITY_EDITOR
using UnityEditor;
#endif



[DisallowMultipleComponent]
[RequireComponent(typeof(AttackHandler))]
public class MeleeAttackBehaviour : MonoBehaviour
{
    [SerializeField] private bool showGizmos = false;
    [Space(20)]

    private AttackHandler attackHandler;


    [Space(20)]
    [Header("Melee")]
    [Tooltip("override attack speed. If 0, this will depend on the current attack speed of the entity")]
    [SerializeField] private float overrideAttackSpeed = 0;
    [SerializeField] private float attackRadius;
    [SerializeField] private MMF_Player attackFeedback;

    private float attackSpeed;
    private List<Transform> targets;


    private void Awake()
    {
        attackHandler = GetComponent<AttackHandler>();
        attackSpeed = overrideAttackSpeed;
    }


    private async void OnEnable()
    {
        targets = new List<Transform>();

        if (overrideAttackSpeed <= 0 || attackHandler.GetEntity?.GetEntityStats != null)
            attackSpeed = attackHandler.GetEntity.GetEntityStats.currentAttackSpeed;

        attackHandler.GetEntity.GetEntityStats.OnCurrentStatsChange += EntityStatsChanges;

        await MeleeAttack();
    }
    private void OnDisable()
    {   
        attackHandler.GetEntity.GetEntityStats.OnCurrentStatsChange -= EntityStatsChanges;
    }

    private void Start()
    {
        if (overrideAttackSpeed <= 0)
            attackSpeed = attackHandler.GetEntity.GetEntityStats.currentAttackSpeed;
    }

    private void EntityStatsChanges()
    {
        if (overrideAttackSpeed <= 0)
            attackSpeed = attackHandler.GetEntity.GetEntityStats.currentAttackSpeed;
    }

    private async UniTask MeleeAttack()
    {
        while (!attackHandler.GetCancellationToken.IsCancellationRequested)
        {
            var scanner = attackHandler.GetScannerEntities;

            Vector3 offsetPosition = new Vector3(0, 0.06f);

            targets = scanner.GetTargetsInArea.
                Where(x => 
                Vector2.Distance(x.position + offsetPosition, attackHandler.GetBaseAttackPosition.position) <= attackRadius &&
                attackHandler.GetScannerEntities.CheckValidTarget(x.transform)).ToList();

            foreach (var target in targets)
            {
                IDamageable entity = target.GetComponent<IDamageable>();

                float calculatedDamage = attackHandler.GetCalculatedDamage(out var critical);
                entity.TakeDamage(calculatedDamage, attackHandler.GetEntity, critical);

                attackFeedback?.PlayFeedbacks();
            }

            await UniTask.Delay(TimeSpan.FromSeconds(attackHandler.CalculateAttackSpeed(attackSpeed)));
        }
    }











    private void OnDrawGizmosSelected()
    {
        if (!showGizmos) { return; }

#if UNITY_EDITOR
        if (attackHandler == null)
        {
            Handles.color = Color.red;
            Handles.DrawWireDisc(transform.position, transform.forward, attackRadius, 3);
        }
        else
        {
            Handles.color = Color.red;
            Handles.DrawWireDisc(attackHandler.GetBaseAttackPosition.position, transform.forward, attackRadius, 3);
        }
#endif
    }


}
