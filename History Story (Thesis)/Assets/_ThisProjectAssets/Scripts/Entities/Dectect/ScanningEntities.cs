using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using Cysharp.Threading.Tasks;
using System.Threading;



#if UNITY_EDITOR
using UnityEditor;
#endif


[DisallowMultipleComponent]
[RequireComponent(typeof(AttackHandler))]
public class ScanningEntities : MonoBehaviour
{
    [SerializeField] private bool showGizmos = false;
    [Space(20)]

    private AttackHandler attackHandler;

    private LayerMask combinedLayer;
    private Transform nearestTarget;
    private CancellationTokenSource cancellationToken;

    [SerializeField] private LayerMask avoidLayer;
    [SerializeField] private LayerMask targetLayer;

    [SerializeField] private float scanRadius;
    [SerializeField] private bool ignoreAvoidLayer;


    private List<Transform> targetInArea;

    public float GetScanRadius { get { return scanRadius; } }
    public LayerMask GetAvoidLayerMask { get { return avoidLayer; } set { avoidLayer = value; } }
    public LayerMask GetTargetLayerMask { get { return targetLayer; } set { targetLayer = value; } }
    public Transform GetNearestTarget { get { return nearestTarget; } }
    public List<Transform> GetTargetsInArea { get { return new List<Transform>(targetInArea); } }




    private void Awake()
    {
        attackHandler = GetComponent<AttackHandler>();
        combinedLayer = targetLayer | avoidLayer;
    }

    private async void OnEnable()
    {
        cancellationToken = new CancellationTokenSource();

        if (scanRadius <= -1)
        {
            scanRadius = attackHandler.GetRangedAttackBehaviour.GetAttackRadius;
        }

        await RescanningArea(cancellationToken.Token);

    }
    private void OnDisable()
    {
        cancellationToken?.Cancel();
    }

    private void Start()
    {
    }

    private async UniTask RescanningArea(CancellationToken cancellationToken)
    {
        while (!cancellationToken.IsCancellationRequested)
        {
            Collider2D[] circleArea = Physics2D.OverlapCircleAll(attackHandler.GetBaseAttackPosition.position, scanRadius, targetLayer);
            var uniqueTransforms = circleArea.Select(collider => collider.transform).Distinct().ToList();

            nearestTarget = null;

            if (circleArea.Length > 0)
            {
                // Sort the array to nearest to farthest
                targetInArea = new List<Transform>(uniqueTransforms.OrderBy(enemy => Vector2.Distance(enemy.position, attackHandler.GetBaseAttackPosition.position)));
                foreach (var collider in targetInArea)
                {
                    Vector2 distance = collider.transform.position - attackHandler.GetBaseAttackPosition.position;
                    Vector2 direction = distance.normalized;

                    RaycastHit2D hit;

                    if (ignoreAvoidLayer)
                    {
                        hit = Physics2D.Raycast(attackHandler.GetBaseAttackPosition.position, direction, scanRadius, targetLayer);
                    }
                    else
                    {
                        hit = Physics2D.Raycast(attackHandler.GetBaseAttackPosition.position, direction, scanRadius, combinedLayer);
                    }

                    // Check if the raycast hit the enemy of this object or not
                    if (hit.collider != null && (targetLayer & (1 << hit.collider.gameObject.layer)) != 0)
                    {
                        // I see my enemy without obstacle blocking
                        nearestTarget = collider.transform;

                        break; // Exit loop after finding the nearest target
                    }
                }
            }
            else
            {
                nearestTarget = null;
                targetInArea = new List<Transform>();
            }

            await UniTask.Yield();
        }
    }

    public bool CheckValidTarget(Transform target)
    {
        Vector2 distance = target.position - attackHandler.GetBaseAttackPosition.position;
        Vector2 direction = distance.normalized;

        RaycastHit2D hit;
        if (ignoreAvoidLayer)
        {
            hit = Physics2D.Raycast(attackHandler.GetBaseAttackPosition.position, direction, scanRadius, targetLayer);
        }
        else
        {
            hit = Physics2D.Raycast(attackHandler.GetBaseAttackPosition.position, direction, scanRadius, combinedLayer);
        }

        return hit.collider != null && (targetLayer & (1 << hit.collider.gameObject.layer)) != 0;
    }


















    private void OnDrawGizmosSelected()
    {
        if (!showGizmos) { return; }

#if UNITY_EDITOR
        if (attackHandler == null)
        {
            Handles.color = Color.white;
            Handles.DrawWireDisc(transform.position, transform.forward, scanRadius, 2);
        }
        else
        {
            Handles.color = Color.white;
            Handles.DrawWireDisc(attackHandler.GetBaseAttackPosition.position, transform.forward, scanRadius, 2);
        }
#endif

        if (nearestTarget != null)
        {
            Gizmos.color = Color.white;
            Gizmos.DrawLine(transform.position, nearestTarget.position);
        }
    }

}
