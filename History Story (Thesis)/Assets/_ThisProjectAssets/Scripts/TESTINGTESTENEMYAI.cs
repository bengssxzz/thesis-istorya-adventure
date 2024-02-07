using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TESTINGTESTENEMYAI : MonoBehaviour
{
    private Entities entity;
    public float circleCastRadius = 1f;
    public LayerMask playerLayer,obstacleLayer;
    private float detectPlayerRadious = 10f;

    private void Start()
    {
        //entity = GameManager.Instance.PlayerEntity;
    }

    //private void OnDrawGizmos()
    //{
    //    if (entity == null) return;

    //    // Draw a ray from the enemy to the player in 2D space
    //    Gizmos.color = Color.cyan;
    //    Debug.DrawRay(transform.position, (entity.transform.position - transform.position).normalized, Color.cyan);

    //    RaycastHit2D hit = Physics2D.Raycast(transform.position, (entity.transform.position - transform.position).normalized, Mathf.Infinity, obstacleLayer);

    //    // Raycast to check if there's an obstacle
    //    if (hit.collider != null)
    //    {
    //        // Draw the ray to the obstacle
    //        Gizmos.color = Color.red;
    //        Gizmos.DrawLine(transform.position, hit.point);

    //        // Draw a circle around the obstacle
    //        Gizmos.color = Color.yellow;
    //        Gizmos.DrawWireSphere(hit.point, circleCastRadius);

    //        // Calculate the point on the obstacle's edge
    //        Vector2 obstacleToHit = hit.point - (Vector2)transform.position;
    //        Vector2 edgePoint = hit.point + obstacleToHit.normalized * circleCastRadius;

    //        Gizmos.color = Color.blue;
    //        Gizmos.DrawLine(edgePoint, entity.transform.position);
    //    }
    //    else
    //    {
    //        // If no obstacle, draw the ray to the player
    //        Gizmos.color = Color.green;
    //        Gizmos.DrawLine(transform.position, entity.transform.position);
    //    }
    //}

    private void OnDrawGizmos()
    {
        if (entity == null) return;

        Collider2D playerHit = Physics2D.OverlapCircle(transform.position, detectPlayerRadious, playerLayer);

        if(playerHit != null)
        {
            //I can see the player
            Gizmos.color = Color.green;
            Gizmos.DrawLine(transform.position, playerHit.transform.position);

            return;
        }
        Vector2 directionToPlayer = (entity.transform.position - transform.position).normalized;
        RaycastHit2D iHitSomething = Physics2D.Raycast(transform.position, directionToPlayer, Mathf.Infinity, playerLayer);

        if(iHitSomething.collider != null)
        {

        } 


        // Ray direction towards the player
        

        // Raycast to check if there's an obstacle
        RaycastHit2D hit = Physics2D.Raycast(transform.position, directionToPlayer, Mathf.Infinity, obstacleLayer);

        if (hit.collider != null)
        {
            // Draw the ray to the obstacle
            Gizmos.color = Color.red;
            Gizmos.DrawLine(transform.position, hit.point);

            // Draw a circle around the obstacle
            Gizmos.color = Color.yellow;
            Gizmos.DrawWireSphere(hit.point, circleCastRadius);

            // Find the side corner of the obstacle
            Vector2 obstacleToPlayer = (entity.transform.position - (Vector3)hit.point).normalized;
            Vector2 edgePoint = hit.point + obstacleToPlayer * circleCastRadius;

            // Draw a ray from the side corner to the player
            Gizmos.color = Color.blue;
            Gizmos.DrawLine(edgePoint, entity.transform.position);

            // Don't aim at the player when an obstacle is detected
            return;
        }

        // If no obstacle, draw the ray to the player
        Gizmos.color = Color.green;
        Gizmos.DrawLine(transform.position, entity.transform.position);
    }

}
