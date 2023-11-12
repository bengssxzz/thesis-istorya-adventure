using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CollectingMyEnemy : MonoBehaviour
{
    [SerializeField] private bool showGizmos = false;

    [SerializeField] private LayerMask myEnemyLayer, raycastCanSee;
    [SerializeField] private float detectRadius = 0.5f;

    //private Transform firstNearestEnemy;

    private List<Transform> nearestEnemyISee;
    private Collider2D[] nearestObstacleISee;



    private void Update()
    {
        //ScanEnemies();
        IcanSeeEnemy();
    }

    private void IcanSeeObstacle()
    {

    }

    public Transform getNearestEnemy
    {
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
    public bool IsHasEnemyNearby()
    {
        return nearestEnemyISee.Count > 0;
    }
    private void IcanSeeEnemy()
    {
        nearestEnemyISee = new List<Transform>();
        Collider2D[] area = Physics2D.OverlapCircleAll(transform.position, detectRadius, myEnemyLayer);

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

    private void OnDrawGizmos()
    {
        if (!showGizmos) {
            return;
        }

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, detectRadius);

    }
}
