using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


public class DetectMyEnemies : MonoBehaviour
{
    [SerializeField] protected bool debugMode = false;

    [Header("Detecting my enemy")]
    [SerializeField] private bool ignoreObstacle = false;
    [SerializeField] protected float detectRadius = 0.5f; //If -1 iba-based ng radius nito sa entity's ranged attack field
    [SerializeField] protected LayerMask myEnemyLayer, obstacleLayer;
    private LayerMask raycastCanSee => myEnemyLayer + obstacleLayer;//Combined layer


    public Transform GetNearestEnemy { get; protected set; } //Nearest enemy
    protected float distanceToNearestEnemy; //Get the distance between gameobject to nearest enemy
    protected bool HasEnemyNearby; //Has enemy around


    protected virtual void Start()
    {
        StartCoroutine(ScanEnemyInArea(0.2f));
    }

    private void ScanNearestEnemies()
    {
        GetNearestEnemy = null;
        Collider2D[] circleArea = Physics2D.OverlapCircleAll(transform.position, detectRadius, myEnemyLayer);

        //Sort the array to nearest to farthest
        Collider2D[] sortEnemyArray = circleArea.OrderBy(enemy => Vector2.Distance(enemy.transform.position, transform.position)).ToArray();

        //Check if the sort array is more than zero
        if(sortEnemyArray.Length > 0)
        {
            foreach (Collider2D myEnemy in sortEnemyArray)
            {
                Vector2 distance = myEnemy.transform.position - transform.position;
                Vector2 direction = distance.normalized;
                RaycastHit2D hit;
                if (ignoreObstacle)
                    hit = Physics2D.Raycast(transform.position, direction, detectRadius, myEnemyLayer);
                else
                    hit = Physics2D.Raycast(transform.position, direction, detectRadius, raycastCanSee);

                // Check if the raycast hit the enemy of this object or not
                if (hit.collider != null && (myEnemyLayer & (1 << hit.collider.gameObject.layer)) != 0)
                {
                    //I see my enemy without obtacle blocking
                    GetNearestEnemy = myEnemy.transform;

                    distanceToNearestEnemy = Vector2.Distance(hit.point, transform.position);


                    if (debugMode)
                        Debug.DrawRay(transform.position, distance, Color.magenta, 0.3f);

                    break;
                }
            }

            //Obstacle is blocking my enemies
        }

    }


    private IEnumerator ScanEnemyInArea(float executeTime)
    {
        while (true)
        {
            yield return new WaitForSeconds(executeTime);
            ScanNearestEnemies();
        }
    }

    protected virtual void OnDrawGizmosSelected()
    {
        if (!debugMode)
        {
            return;
        }

        Gizmos.color = Color.white;
        Gizmos.DrawWireSphere(transform.position, detectRadius);
    }
}
