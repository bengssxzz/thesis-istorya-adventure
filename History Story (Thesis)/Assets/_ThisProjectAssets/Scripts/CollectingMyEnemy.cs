using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CollectingMyEnemy : MonoBehaviour
{
    [SerializeField] private bool showGizmos = false;

    [Header("Detect")]
    [SerializeField] private LayerMask myEnemyLayer, raycastCanSee;
    [SerializeField] private float detectRadius = 0.5f;

    //private Transform firstNearestEnemy;

    private List<Transform> nearestEnemyISee = new List<Transform>();

    public Transform GetNearestEnemy{ 
        get 
        {
            //return firstNearestEnemy;
            try
            {
                return nearestEnemyISee[0];

            }
            catch(Exception)
            {
                // Run this if array has an error
                return null;
            }
        }
    }
    public bool HasEnemyNearby { get => nearestEnemyISee.Count > 0; }


    private void Start()
    {
        StartCoroutine("ScanEnemyInArea", 0.2f);
    }

    private void IcanSeeEnemy()
    {
        nearestEnemyISee = new List<Transform>();
        Collider2D[] area = Physics2D.OverlapCircleAll(transform.position, detectRadius, myEnemyLayer);

        //Fix the array, closest to farthest 
        var fixArrayEnemy = area.OrderBy(enemy => Vector2.Distance(enemy.transform.position, transform.position));
        if (area.Length > 0)
        {
            foreach (Collider2D collide in fixArrayEnemy)
            {
                Vector2 distance = collide.transform.position - transform.position;
                Vector2 direction = distance.normalized;
                RaycastHit2D hit = Physics2D.Raycast(transform.position, direction, detectRadius, raycastCanSee);

                // Check if the raycast hit the enemy of this object or not
                if (hit.collider != null && (myEnemyLayer & (1 << hit.collider.gameObject.layer)) != 0)
                {
                    if (showGizmos){
                        Debug.DrawRay(transform.position, distance, Color.magenta);
                    }

                    nearestEnemyISee.Add(collide.transform);
                }
            }
        }
    }
    private IEnumerator ScanEnemyInArea(float executeTime)
    {
        while (true)
        {
            yield return new WaitForSeconds(executeTime);
            IcanSeeEnemy();
        }
    }

    protected virtual void OnDrawGizmosSelected()
    {
        if (!showGizmos) {
            return;
        }

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, detectRadius);
    }
}
