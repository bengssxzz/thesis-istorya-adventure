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

    public int TESTINGCOUNT = 0;
    private Collider2D[] CHECKTARGET;
    public Transform GetNearestEnemy { get; protected set; } //Nearest enemy
    protected float distanceToNearestEnemy; //Get the distance between gameobject to nearest enemy
    protected bool HasEnemyNearby; //Has enemy around


    protected virtual void Start()
    {
        StartCoroutine(ScanEnemyInArea(0.2f));
    }

    private IEnumerator ScanEnemyInArea(float executeTime)
    {
        while (true)
        {
            yield return new WaitForSeconds(executeTime);
            ScanNearestEnemies();
        }
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
            GetPriorityTarget(sortEnemyArray);


            //GetNearestEnemy = GetNeareastEnemyArea(sortEnemyArray).Item1;
            //distanceToNearestEnemy = GetNeareastEnemyArea(sortEnemyArray).Item2;



            //foreach (Collider2D myEnemy in sortEnemyArray)
            //{
            //    Vector2 distance = myEnemy.transform.position - transform.position;
            //    Vector2 direction = distance.normalized;
            //    RaycastHit2D hit;
            //    if (ignoreObstacle)
            //        hit = Physics2D.Raycast(transform.position, direction, detectRadius, myEnemyLayer);
            //    else
            //        hit = Physics2D.Raycast(transform.position, direction, detectRadius, raycastCanSee);

            //    // Check if the raycast hit the enemy of this object or not
            //    if (hit.collider != null && (myEnemyLayer & (1 << hit.collider.gameObject.layer)) != 0)
            //    {
            //        //I see my enemy without obtacle blocking
            //        GetNearestEnemy = myEnemy.transform;
            //        GetPriorityTarget(GetNearestEnemy);
            //        distanceToNearestEnemy = Vector2.Distance(hit.point, transform.position);


            //        if (debugMode)
            //            Debug.DrawRay(transform.position, distance, Color.magenta, 0.3f);

            //        break;
            //    }
            //}

            //Obstacle is blocking my enemies
        }

    }

    private (Transform, float) GetNeareastEnemyArea(Collider2D[] enemyArray)
    {
        Transform enemyDetected = null;
        float distanceToEnemy = 0f;

        foreach (Collider2D myEnemy in enemyArray)
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
                enemyDetected = myEnemy.transform;
                distanceToEnemy = Vector2.Distance(hit.point, transform.position);


                if (debugMode)
                    Debug.DrawRay(transform.position, distance, Color.magenta, 0.3f);

                break;
            }
        }

        return (enemyDetected, distanceToEnemy);
        //Obstacle is blocking my enemies
    }
    private void GetPriorityTarget(Collider2D[] enemyArray)
    {
        foreach (Collider2D myEnemy in enemyArray)
        {
            Vector2 distance = myEnemy.transform.position - transform.position;
            Vector2 direction = distance.normalized;
            RaycastHit2D hit;

            // Use OverlapCircleAll instead of Raycast to get all nearby entities
            CHECKTARGET = Physics2D.OverlapCircleAll(myEnemy.transform.position, 2f, 1 << gameObject.layer);

            if (CHECKTARGET.Length > 0)
            {
                TESTINGCOUNT = CHECKTARGET.Count(x => x.GetComponent<DetectMyEnemies>()?.GetNearestEnemy == GetNearestEnemy);
                Collider2D[] sortEnemyArray = CHECKTARGET.OrderBy(enemy => TESTINGCOUNT).ToArray();

                // Check if the target entity is already targeted by others
                if (TESTINGCOUNT > 0)
                {
                    // If already targeted, find another entity with fewer attackers
                    Collider2D lessAttackedEntity = sortEnemyArray.FirstOrDefault(enemy => enemy.GetComponent<DetectMyEnemies>()?.GetNearestEnemy != GetNearestEnemy);

                    if (lessAttackedEntity != null)
                    {
                        // Set the less attacked entity as the target
                        Debug.Log("Attacking less attacked entity: " + lessAttackedEntity.gameObject.name);
                        SetTarget(lessAttackedEntity.transform);
                    }
                    else
                    {
                        // No less attacked entity found, continue attacking the current target
                        Debug.Log("Continuing to attack the current target: " + myEnemy.gameObject.name);
                        SetTarget(myEnemy.transform);
                    }
                }
                else
                {
                    // If the target has no attackers, attack it
                    Debug.Log("Attacking target: " + myEnemy.gameObject.name);
                    SetTarget(myEnemy.transform);
                }
            }

            if (debugMode)
                Debug.DrawRay(transform.position, distance, Color.magenta, 0.3f);

            break;
        }
    }

    private void SetTarget(Transform newTarget)
    {
        // Implement your logic to set the new target
        // For example, assign newTarget to GetNearestEnemy or perform other actions
        GetNearestEnemy = newTarget;
        // Additional logic...
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
