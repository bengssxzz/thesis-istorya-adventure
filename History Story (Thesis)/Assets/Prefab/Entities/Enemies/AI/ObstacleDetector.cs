using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleDetector : Detector
{
    [SerializeField] private float detectRadius = 2;
    [SerializeField] private LayerMask layermask;

    [SerializeField] private bool showGizmos = false;

    private Collider2D[] colliders;


    public override void Detect(AIData aiData)
    {
        colliders = Physics2D.OverlapCircleAll(transform.position, detectRadius, layermask);
        aiData.obstacles = colliders;
    }

    private void OnDrawGizmos()
    {
        if (!showGizmos) {
            return;
        }

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, detectRadius);

        if(Application.isPlaying && colliders != null)
        {
            Gizmos.color = Color.red;
            foreach (Collider2D obstacleCollider in colliders)
            {
                Gizmos.DrawSphere(obstacleCollider.transform.position, 0.03f);
            }
        }

    }

}
