using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class TestEnemy : MonoBehaviour
{
    //private Rigidbody2D rb;
    //private CollectingMyEnemy myEnemy;

    //private Vector2[] detectorDir;

    //public float moveSpeed;

    //public bool showGizmos = false;
    //public float obstacleDetectRadius = 0.2f;
    //public LayerMask obstacles;

    //public float lengthRaycast = 1;
    //public int raycastCount = 8;

    //public float[] obstacle, interest;
    //public float[] contextVector;
    //public Vector2 res;

    //// Start is called before the first frame update
    //void Start()
    //{
    //    rb = GetComponent<Rigidbody2D>();
    //    myEnemy = GetComponent<CollectingMyEnemy>();

    //    detectorDir = CreateDetectorDirection();
    //}

    //// Update is called once per frame
    //void Update()
    //{
    //    obstacle = AvoidObstacleBehaviour();
    //    interest = SeekBehaviour();
    //    res = GetMoveDirection();

    //    //var steering = GetMoveDirection() - rb.velocity;
    //    rb.velocity = GetMoveDirection() * moveSpeed * Time.deltaTime;
    //}


    //private Vector2 GetMoveDirection()
    //{
    //    contextVector = new float[raycastCount];
    //    //float[] contextVector = new float[raycastCount];

    //    for (int i = 0; i < SeekBehaviour().Length; i++)
    //    {
    //        contextVector[i] = Mathf.Clamp01(SeekBehaviour()[i] - AvoidObstacleBehaviour()[i]);
    //        //contextVector[i] = SeekBehaviour()[i] - AvoidObstacleBehaviour()[i];
    //    }

    //    Vector2 outputDirection = Vector2.zero;
    //    for (int i = 0; i < raycastCount; i++)
    //    {
    //        outputDirection += detectorDir[i] * contextVector[i];
    //    }

    //    outputDirection.Normalize();
    //    return outputDirection;
    //}
    //private float[] SeekBehaviour()
    //{
    //    float[] interest = new float[raycastCount];

    //    Vector2 directionToTarget = (myEnemy.getNearestEnemy.position - transform.position);
    //    for (int i = 0; i < interest.Length; i++)
    //    {
    //        float result = Vector2.Dot(directionToTarget.normalized, detectorDir[i]);

    //        //accept only directions at the less than 90 degrees to the target direction
    //        if (result > 0)
    //        {
    //            float valueToPutIn = result;
    //            if (valueToPutIn > interest[i])
    //            {
    //                interest[i] = valueToPutIn;
    //            }

    //        }
    //    }

    //    return interest;
    //}
    //private float[] AvoidObstacleBehaviour()
    //{
    //    float[] danger = new float[raycastCount];
    //    var radius = 0.2f;
    //    var agentColliderSize = 0.4;
    //    Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, obstacleDetectRadius, obstacles);

    //    foreach (Collider2D obstacleCollider in colliders)
    //    {
    //        Vector2 directionToObstacle = obstacleCollider.ClosestPoint(transform.position) - (Vector2)transform.position;
    //        float distanceToObstacle = directionToObstacle.magnitude;

    //        //calculate weight based on the distance Enemy<--->Obstacle
    //        float weight = distanceToObstacle <= agentColliderSize ? 1 : (radius - distanceToObstacle) / radius;

    //        Vector2 directionToObstacleNormalized = directionToObstacle.normalized;

    //        //Add obstacle parameters to the danger array
    //        for (int i = 0; i < raycastCount; i++)
    //        {
    //            float result = Vector2.Dot(directionToObstacleNormalized, detectorDir[i]);

    //            //float valueToPutIn = result * weight;
    //            float valueToPutIn = result / weight;

    //            //override value only if it is higher than the current one stored in the danger array
    //            if (valueToPutIn > danger[i])
    //            {
    //                danger[i] = valueToPutIn;
    //            }
    //        }
    //    }

    //    return danger;
    //}

    private Rigidbody2D rb;
    private CollectingMyEnemy myEnemy;

    private Vector2[] detectorDir;

    public float moveSpeed;

    public bool showGizmos = false;
    public float obstacleDetectRadius = 0.2f;
    public LayerMask obstacles;

    public float lengthRaycast = 1;
    public int raycastCount = 8;

    public float[] obstacle, interest;
    public float[] contextVector;
    public Vector2 res;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        myEnemy = GetComponent<CollectingMyEnemy>();

        detectorDir = CreateDetectorDirection();
    }

    // Update is called once per frame
    void Update()
    {
        obstacle = AvoidObstacleBehaviour();
        interest = SeekBehaviour();
        res = GetMoveDirection();

        //var steering = GetMoveDirection() - rb.velocity;
        rb.velocity = GetMoveDirection() * moveSpeed * Time.deltaTime;
    }


    //private Vector2 GetMoveDirection()
    //{
    //    if (myEnemy.getNearestEnemy != null && myEnemy.getNearestEnemy.position == transform.position)
    //    {
    //        // Special case: Player and enemy are at the same position
    //        return Vector2.zero;  // Stop moving or choose another behavior
    //    }

    //    contextVector = new float[raycastCount];
    //    //float[] contextVector = new float[raycastCount];

    //    for (int i = 0; i < SeekBehaviour().Length; i++)
    //    {
    //        contextVector[i] = Mathf.Clamp01(SeekBehaviour()[i] - AvoidObstacleBehaviour()[i]);
    //        //contextVector[i] = SeekBehaviour()[i] - AvoidObstacleBehaviour()[i];
    //    }

    //    Vector2 outputDirection = Vector2.zero;
    //    for (int i = 0; i < raycastCount; i++)
    //    {
    //        outputDirection += detectorDir[i] * contextVector[i];
    //    }

    //    outputDirection.Normalize();
    //    return outputDirection;
    //}
    private Vector2 GetMoveDirection()
    {
        float[] avoidObstacle = AvoidObstacleBehaviour();
        float[] seekInterest = SeekBehaviour();

        Vector2 outputDirection = Vector2.zero;

        for (int i = 0; i < raycastCount; i++)
        {
            float steeringWeight = 0.7f;
            float weightedDirection = seekInterest[i] * (1 - steeringWeight) + avoidObstacle[i] * steeringWeight;

            outputDirection += detectorDir[i] * weightedDirection;
        }

        // Modify the following line to use a path-following approach
        // Instead of directly seeking the player, make the enemy follow waypoints
        outputDirection += ((Vector2)myEnemy.getNearestEnemy.position - (Vector2)transform.position).normalized * 0.3f;

        outputDirection.Normalize();
        return outputDirection;
    }





    private float[] SeekBehaviour()
    {
        float[] interest = new float[raycastCount];

        Vector2 directionToTarget = (myEnemy.getNearestEnemy.position - transform.position);
        for (int i = 0; i < interest.Length; i++)
        {
            float result = Vector2.Dot(directionToTarget.normalized, detectorDir[i]);

            //accept only directions at the less than 90 degrees to the target direction
            if (result > 0)
            {
                float valueToPutIn = result;
                if (valueToPutIn > interest[i])
                {
                    interest[i] = valueToPutIn;
                }

            }
        }

        return interest;
    }
    private float[] AvoidObstacleBehaviour()
    {
        float[] danger = new float[raycastCount];
        var radius = 0.2f;
        var agentColliderSize = 0.4;
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, obstacleDetectRadius, obstacles);

        foreach (Collider2D obstacleCollider in colliders)
        {
            Vector2 directionToObstacle = obstacleCollider.ClosestPoint(transform.position) - (Vector2)transform.position;
            float distanceToObstacle = directionToObstacle.magnitude;

            //calculate weight based on the distance Enemy<--->Obstacle
            float weight = distanceToObstacle <= agentColliderSize ? 1 : (radius - distanceToObstacle) / radius;

            Vector2 directionToObstacleNormalized = directionToObstacle.normalized;

            //Add obstacle parameters to the danger array
            for (int i = 0; i < raycastCount; i++)
            {
                float result = Vector2.Dot(directionToObstacleNormalized, detectorDir[i]);

                //float valueToPutIn = result * weight;
                float valueToPutIn = result / weight;

                //override value only if it is higher than the current one stored in the danger array
                if (valueToPutIn > danger[i])
                {
                    danger[i] = valueToPutIn;
                }
            }
        }

        return danger;
    }




    // private Vector2 GetMoveDirection()
    // {
    //     contextVector = new float[raycastCount];
    //     //float[] contextVector = new float[raycastCount];

    //     for (int i = 0; i < SeekBehaviour().Length; i++)
    //     {
    //         interest[i] -= obstacle[i];
    //         //contextVector[i] = SeekBehaviour()[i] - AvoidObstacleBehaviour()[i];
    //     }

    //     float biggestInterest = Mathf.Max(SeekBehaviour().ToArray());
    //     Debug.Log(biggestInterest);
    //     int indexOfBiggestInterest = SeekBehaviour().ToList().FindIndex(x => (x == biggestInterest));

    //     Vector2 outputDirection = Vector2.zero;
    //     for (int i = 0; i < raycastCount; i++)
    //     {
    //         outputDirection += detectorDir[i] * contextVector[i];
    //     }

    //     outputDirection = detectorDir[indexOfBiggestInterest];
    //     //outputDirection.Normalize();
    //     return outputDirection;
    // }
    // private float[] SeekBehaviour()
    // {
    //     float[] interest = new float[raycastCount];

    //     Vector2 directionToTarget = (myEnemy.getNearestEnemy.position - transform.position);
    //     for (int i = 0; i < interest.Length; i++)
    //     {
    //         float result = Vector2.Dot(directionToTarget.normalized, detectorDir[i]);

    //         //accept only directions at the less than 90 degrees to the target direction
    //         if (result > 0)
    //         {
    //             float valueToPutIn = result / directionToTarget.magnitude;
    //             if (valueToPutIn > interest[i])
    //             {
    //                 interest[i] = valueToPutIn;
    //             }

    //         }
    //     }

    //     return interest;
    // }
    // private float[] AvoidObstacleBehaviour()
    // {
    //     float[] danger = new float[raycastCount];
    //     var radius = 0.2f;
    //     var agentColliderSize = 0.4;
    //     Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, obstacleDetectRadius, obstacles);

    //     foreach (Collider2D obstacleCollider in colliders)
    //     {
    //         Vector2 directionToObstacle = obstacleCollider.ClosestPoint(transform.position) - (Vector2)transform.position;
    //         float distanceToObstacle = directionToObstacle.magnitude;

    //         //calculate weight based on the distance Enemy<--->Obstacle
    //         float weight = distanceToObstacle < agentColliderSize ? 1 : (radius - distanceToObstacle) / radius;

    //         Vector2 directionToObstacleNormalized = directionToObstacle.normalized;

    //         //Add obstacle parameters to the danger array
    //         for (int i = 0; i < raycastCount; i++)
    //         {
    //             float result = Vector2.Dot(directionToObstacleNormalized, detectorDir[i]);

    //             //float valueToPutIn = result * weight;
    //             float valueToPutIn = result / distanceToObstacle;

    //             //override value only if it is higher than the current one stored in the danger array
    //             if (valueToPutIn > danger[i])
    //             {
    //                 danger[i] = valueToPutIn;
    //             }
    //         }
    //     }

    //     return danger;
    // }



    private Vector2[] CreateDetectorDirection()
    {
        Vector2[] castDir = new Vector2[raycastCount];

        var angle = 0f;
        for (int i = 0; i < raycastCount; i++)
        {
            var computeAngle = new Vector2(Mathf.Sin(angle * Mathf.PI / 180), Mathf.Cos(angle * Mathf.PI / 180));
            var directionCast = ((Vector2)transform.position + computeAngle - (Vector2)transform.position).normalized;

            castDir[i] = directionCast;
            angle += 360 / raycastCount;
        }
        return castDir;
    }

    private void OnDrawGizmos()
    {
        if (!showGizmos) { return; }

        detectorDir = CreateDetectorDirection();



        if (Application.isPlaying)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(transform.position, obstacleDetectRadius);

            // Gizmos for detector; color white
            Gizmos.color = Color.white;
            var angle = 0f;
            for (int i = 0; i < detectorDir.Length; i++)
            {
                var directionCast = detectorDir[i];

                Gizmos.DrawLine(transform.position, (Vector2)transform.position + (directionCast * lengthRaycast));
                angle += 360 / raycastCount;
            }

            // // Gizmos for interest; color green
            // Gizmos.color = Color.green;
            // for (int i = 0; i < interest.Length; i++)
            // {
            //     var directionCast = detectorDir[i];
            //     Gizmos.DrawLine(transform.position, (Vector2)transform.position + (directionCast * interest[i]));
            // }

            // // Gizmos for danger; color red
            // Gizmos.color = Color.red;
            // for (int i = 0; i < obstacle.Length; i++)
            // {
            //     var directionCast = detectorDir[i];
            //     Gizmos.DrawLine(transform.position, (Vector2)transform.position + (directionCast * obstacle[i]));
            // }

            Gizmos.color = Color.green;
            for (int i = 0; i < contextVector.Length; i++)
            {
                var directionCast = detectorDir[i];
                Gizmos.DrawLine(transform.position, (Vector2)transform.position + (directionCast * contextVector[i]));
            }


            Gizmos.color = Color.yellow;
            for (int i = 0; i < raycastCount; i++)
            {
                Gizmos.DrawRay(transform.position, GetMoveDirection() * 1);
            }

        }

    }
}
