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
    private Transform followerTarget;
    private Transform nearestTarget;
    private CancellationTokenSource cancellationToken;

    [SerializeField] private LayerMask followHostLayer;
    [SerializeField] private LayerMask avoidLayer;
    [SerializeField] private LayerMask targetLayer;

    [SerializeField] private float scanRadius;
    [SerializeField] private bool ignoreAvoidLayer = true;

    private List<Transform> targetInArea = new List<Transform>();


    public float GetScanRadius { get { return scanRadius; } set { scanRadius = value; } }
    public LayerMask GetTargetLayerMask { get { return targetLayer; } set { targetLayer = value; } }
    public LayerMask GetAvoidLayerMask { get { return avoidLayer; } set { avoidLayer = value; } }
    public LayerMask GetFollowTargetLayerMask { get { return followHostLayer; } set { followHostLayer = value; } }
    public LayerMask GetCombineLayerMask { get { return combinedLayer; } }

    public Transform GetNearestTarget { get { return nearestTarget; } }
    public Transform GetFollowTarget { get { return followerTarget; } }
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

        _ = FindObjectToFollow(cancellationToken.Token);
        await RescanningArea(cancellationToken.Token);

    }
    private void OnDisable()
    {
        cancellationToken?.Cancel();
    }

    private void Start()
    {
    }

    private async UniTask RescanningArea(CancellationToken scanningCancellationToken)
    {
        while (!scanningCancellationToken.IsCancellationRequested)
        {
            Collider2D[] circleArea = Physics2D.OverlapCircleAll(attackHandler.GetBaseAttackPosition.position, scanRadius, targetLayer);
            var scannedEntitiesInArea = circleArea.Select(collider => collider.transform).Distinct().ToList();


            nearestTarget = null;

            if (circleArea.Length > 0)
            {
                // Sort the array to nearest to farthest
                targetInArea = new List<Transform>(scannedEntitiesInArea.OrderBy(enemy => Vector2.Distance(enemy.position, attackHandler.GetBaseAttackPosition.position)));
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

            await UniTask.Delay(150, cancellationToken: scanningCancellationToken);
            await UniTask.Yield();
        }
    }
    private async UniTask FindObjectToFollow(CancellationToken cancellationToken)
    {
        while (!cancellationToken.IsCancellationRequested)
        {
            if (followHostLayer == 0) { break; }

            await UniTask.Delay(500);

            Collider2D[] circleArea = Physics2D.OverlapCircleAll(attackHandler.GetBaseAttackPosition.position, scanRadius, followHostLayer);
            var scannedEntitiesInArea = circleArea.Select(collider => collider.transform).Distinct().ToList();


            followerTarget = null;

            if (scannedEntitiesInArea.Count > 0)
            {
                followerTarget = scannedEntitiesInArea
                    .OrderBy(follow => Vector2.Distance(follow.position, attackHandler.GetBaseAttackPosition.position))
                    .FirstOrDefault();
            }
            else
            {
                followerTarget = null;
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
