using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;

public class Enemy : AIEntity
{









    
























    //[System.Serializable] private class Loot
    //{
    //    [Tooltip("Loot prefab to be dropped when entity died")]
    //    public GameObject lootPrefab;
    //    [Tooltip("Check if you want to randomize the amount to drop, else fix amount loot drop and the minAmount will no longer use")]
    //    public bool randomAmountDrop = false;

    //    [Range(1, 100)] public int minAmount = 1, maxAmount = 1;

    //    [Tooltip("Drop loot chance")]
    //    [Range(0.0f, 100.0f)] public float dropChance;
    //}

    //protected enum State
    //{
    //    Idle,
    //    Seek,
    //    Flee,
    //    Range_Attack,
    //    Melee_Attack
    //}

    //private State state = State.Idle;

    //private Transform targetEnemy;
    //private AIPath aiPath;

    //[SerializeField] private List<Loot> listOfDropLoot;

    //public float stopDistance;
    //public float FleeDistance;


    //protected override void Awake()
    //{
    //    base.Awake();
    //    aiPath = GetComponent<AIPath>();
    //}
    //protected override void Start()
    //{
    //    base.Start();
    //}

    //protected override void Update()
    //{
    //    base.Update();

    //    if (targetInRange)
    //    {
    //        Attack();
    //    }

    //    StateController();
    //}


    //protected virtual void DetectRangeBehaviour()
    //{

    //}

    //protected override void MovementBehaviour()
    //{
    //    //ChaseMyEnemy();
    //    //FleeToMyEnemy();
    //}

    //protected virtual void StateController()
    //{
    //    targetEnemy = attackController.GetNearestEnemy;

    //    if(attackController.GetNearestEnemy == null || aiPath.desiredVelocity == null) {
    //        aiPath.canMove = false;
    //        return; 
    //    }


    //    switch (state)
    //    {
    //        case State.Idle:
    //            if (Vector2.Distance(transform.position, targetEnemy.position) > stopDistance)
    //            {
    //                Debug.Log("Seeking");
    //                state = State.Seek;
    //            }
    //            else
    //            {
    //                aiPath.canMove = false;
    //            }



    //            break;
    //        case State.Seek:
    //            aiPath.canMove = true;

    //            if (Vector2.Distance(transform.position, targetEnemy.position) < stopDistance) 
    //            {
    //                Debug.Log("Idle");
    //                state = State.Idle;
    //            }

    //            break;
    //        case State.Flee:
    //            break;
    //        case State.Range_Attack:
    //            break;
    //        case State.Melee_Attack:
    //            break;
    //        default:
    //            break;
    //    }
    //}


    //protected virtual void ChaseMyEnemy()
    //{
    //    //targetEnemy = collectedEnemy.GetNearestEnemy;

    //    //if (targetEnemy == null) { return; }

    //    //move_dir = targetEnemy.position - transform.position;
    //    //if (Vector2.Distance(transform.position, targetEnemy.position) < stopDistance)
    //    //{
    //    //    targetInRange = true;
    //    //    rb.velocity = Vector2.zero;
    //    //    return;
    //    //}
    //    //targetInRange = false;
    //    //rb.velocity = move_dir.normalized * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    //    aiPath.destination = attackController.GetNearestEnemy.position;
    //}

    //protected virtual void FleeToMyEnemy()
    //{
    //    //targetEnemy = collectedEnemy.GetNearestEnemy;

    //    //if (targetEnemy == null) { return; }

    //    //move_dir = targetEnemy.position - transform.position;
    //    //if (Vector2.Distance(transform.position, targetEnemy.position) < FleeDistance)
    //    //{
    //    //    rb.velocity = (move_dir.normalized * -GetEntityStats.currentMoveSpeed) * Time.deltaTime;
    //    //}

    //}

    //protected virtual void Attack()
    //{
    //    //Attack
    //}


    //protected override void DeathBehaviour()
    //{
    //    base.DeathBehaviour();

    //    LootDrop();
    //}

    //private void LootDrop() //Loot to drop
    //{
    //    //Debug.Log("Loot Dropped");
    //    foreach (var itemLoot in listOfDropLoot)
    //    {
    //        float dropRate = UnityEngine.Random.Range(0.0f, 100.0f);
    //        float lootRate = itemLoot.dropChance;

    //        /* Example:
    //         * when dropRate = 9.0f
    //         * when lootRate = 10.0f
    //         * Drop a loot if lootRate is greater then equal to dropRate
    //         * Otherwise don't drop
    //         */
    //        if (lootRate >= dropRate)
    //        {
    //            //Drop
    //            var loots = AmountLootItems(itemLoot);

    //            if (loots.Length > 0)
    //            {
    //                foreach (var item in loots)
    //                {
    //                    float x = UnityEngine.Random.Range(-1f, 1f);
    //                    float y = UnityEngine.Random.Range(-1f, 1f);
    //                    Vector2 randomDirection = new Vector2(x, y).normalized;

    //                    const float addForce = 50f;

    //                    item.transform.position = transform.position;
    //                    Rigidbody2D rb = item.GetComponent<Rigidbody2D>();
    //                    rb.drag = 5;
    //                    rb.AddForce(randomDirection * addForce * Time.deltaTime, ForceMode2D.Impulse);
    //                }
    //            }
    //        }
    //    }
    //}
    //private GameObject[] AmountLootItems(Loot itemLoot)
    //{
    //    int amount = itemLoot.randomAmountDrop ? UnityEngine.Random.Range(itemLoot.minAmount, itemLoot.maxAmount) : itemLoot.maxAmount;
    //    List<GameObject> dropList = new List<GameObject>();

    //    for (int i = 0; i < amount; i++)
    //    {
    //        GameObject _loot = ObjectPooling.instance.GetObjectInPool("loot", itemLoot.lootPrefab);
    //        dropList.Add(_loot);
    //    }

    //    return dropList.ToArray();
    //}




    //private void OnDrawGizmosSelected()
    //{
    //    if (debugMode == false)
    //    {
    //        return;
    //    }

    //    Gizmos.color = Color.green;
    //    Gizmos.DrawWireSphere(transform.position, stopDistance);

    //    Gizmos.color = Color.red;
    //    Gizmos.DrawWireSphere(transform.position, FleeDistance);


    //}

































    //[System.Serializable]
    //private class Loot
    //{
    //    [Tooltip("Loot prefab to be dropped when entity died")]
    //    public GameObject lootPrefab;
    //    [Tooltip("Check if you want to randomize the amount to drop, else fix amount loot drop and the minAmount will no longer use")]
    //    public bool randomAmountDrop = false;

    //    [Range(1, 100)] public int minAmount = 1, maxAmount = 1;

    //    [Tooltip("Drop loot chance")]
    //    [Range(0.0f, 100.0f)] public float dropChance;
    //}

    //private Rigidbody2D rb;
    //protected CollectingMyEnemy myEnemies;

    //[SerializeField] protected bool showGizmos = false;
    //private Transform targetEnemy;

    //[SerializeField] private List<Loot> listOfDropLoot;

    //protected bool targetInRange = false;

    //public float stopDistance;
    //public float FleeDistance;

    ////test
    //private Vector2[] detectorDir;

    //public float obstacleDetectRadius = 0.2f;
    //public LayerMask obstacles;

    //public float lengthRaycast = 1;
    //public int raycastCount = 8;

    //public float[] obstacle, interest;
    //public float[] contextVector;
    //public Vector2 res;
    //private Vector3 avoidanceForce = Vector2.zero;
    //public LayerMask obstacleIsee;


    //protected override void Awake()
    //{
    //    base.Awake();
    //    rb = GetComponent<Rigidbody2D>();
    //    myEnemies = GetComponent<CollectingMyEnemy>();
    //}

    //protected override void Start()
    //{
    //    base.Start();


    //    detectorDir = CreateDetectorDirection();
    //}

    //protected override void Update()
    //{
    //    base.Update();

    //    targetEnemy = myEnemies?.getNearestEnemy;


    //}

    ////This function is overwritten and executing this in inherit class fixedupdate
    //protected override void MovementBehaviour()
    //{
    //    //obstacle = AvoidObstacleBehaviour();
    //    //interest = SeekBehaviour();
    //    //res = GetMoveDirection();

    //    //rb.velocity = GetMoveDirection() * GetEntityStats.currentMoveSpeed * Time.deltaTime;

    //    Vector2 moveDirection = GetMoveDirection();

    //    rb.velocity = moveDirection * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    //}

    ////private Vector2 GetMoveDirection()
    ////{
    ////    if (targetEnemy != null && targetEnemy.position == transform.position)
    ////    {
    ////        // Special case: Player and enemy are at the same position
    ////        return Vector2.zero;  // Stop moving or choose another behavior
    ////    }

    ////    contextVector = new float[raycastCount];
    ////    //float[] contextVector = new float[raycastCount];

    ////    for (int i = 0; i < SeekBehaviour().Length; i++)
    ////    {
    ////        contextVector[i] = Mathf.Clamp01(SeekBehaviour()[i] - AvoidObstacleBehaviour()[i]);
    ////        //contextVector[i] = SeekBehaviour()[i] - AvoidObstacleBehaviour()[i];
    ////    }

    ////    Vector2 outputDirection = Vector2.zero;
    ////    for (int i = 0; i < raycastCount; i++)
    ////    {
    ////        outputDirection += detectorDir[i] * contextVector[i];
    ////    }

    ////    outputDirection.Normalize();
    ////    return outputDirection;
    ////}


    ////private float[] SeekBehaviour()
    ////{
    ////    float[] interest = new float[raycastCount];

    ////    if(targetEnemy == null) { return null; }

    ////    Vector2 directionToTarget = (targetEnemy.position - transform.position);
    ////    for (int i = 0; i < interest.Length; i++)
    ////    {
    ////        float result = Vector2.Dot(directionToTarget.normalized, detectorDir[i]);

    ////        //accept only directions at the less than 90 degrees to the target direction
    ////        if (result > 0)
    ////        {
    ////            float valueToPutIn = result;
    ////            if (valueToPutIn > interest[i])
    ////            {
    ////                interest[i] = valueToPutIn;
    ////            }

    ////        }
    ////    }

    ////    return interest;
    ////}
    ////private float[] AvoidObstacleBehaviour()
    ////{
    ////    float[] danger = new float[raycastCount];
    ////    var radius = 0.2f;
    ////    var agentColliderSize = 0.4;
    ////    Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, obstacleDetectRadius, obstacles);

    ////    foreach (Collider2D obstacleCollider in colliders)
    ////    {
    ////        Vector2 directionToObstacle = obstacleCollider.ClosestPoint(transform.position) - (Vector2)transform.position;
    ////        float distanceToObstacle = directionToObstacle.magnitude;

    ////        //calculate weight based on the distance Enemy<--->Obstacle
    ////        float weight = distanceToObstacle <= agentColliderSize ? 1 : (radius - distanceToObstacle) / radius;

    ////        Vector2 directionToObstacleNormalized = directionToObstacle.normalized;

    ////        //Add obstacle parameters to the danger array
    ////        for (int i = 0; i < raycastCount; i++)
    ////        {
    ////            float result = Vector2.Dot(directionToObstacleNormalized, detectorDir[i]);

    ////            //float valueToPutIn = result * weight;
    ////            float valueToPutIn = result / weight;

    ////            //override value only if it is higher than the current one stored in the danger array
    ////            if (valueToPutIn > danger[i])
    ////            {
    ////                danger[i] = valueToPutIn;
    ////            }
    ////        }
    ////    }

    ////    return danger;
    ////}

    //private Vector2 GetMoveDirection()
    //{
    //    if (targetEnemy != null && targetEnemy.position == transform.position)
    //    {
    //        // Special case: Player and enemy are at the same position
    //        return Vector2.zero;  // Stop moving or choose another behavior
    //    }

    //    float[] contextVector = new float[raycastCount];
    //    for (int i = 0; i < raycastCount; i++)
    //    {
    //        contextVector[i] = SeekBehaviour() - AvoidObstacleBehaviour();
    //    }

    //    Vector2 outputDirection = Vector2.zero;
    //    for (int i = 0; i < raycastCount; i++)
    //    {
    //        outputDirection += detectorDir[i] * contextVector[i];
    //    }

    //    outputDirection.Normalize();
    //    return outputDirection;
    //}




    //private float SeekBehaviour()
    //{
    //    if (targetEnemy == null)
    //    {
    //        return 0.0f;
    //    }

    //    Vector2 directionToTarget = (targetEnemy.position - transform.position).normalized;
    //    return Vector2.Dot(directionToTarget.normalized, transform.right); // Use the dot product for intensity
    //}

    //private float AvoidObstacleBehaviour()
    //{
    //    float avoidanceStrength = 0.0f;
    //    var radius = 0.2f;
    //    var agentColliderSize = 0.4;
    //    Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, obstacleDetectRadius, obstacles);

    //    foreach (Collider2D obstacleCollider in colliders)
    //    {
    //        Vector2 directionToObstacle = ((Vector2)transform.position - obstacleCollider.ClosestPoint(transform.position)).normalized;
    //        avoidanceStrength += Vector2.Dot(directionToObstacle.normalized, transform.right); // Use the dot product for intensity
    //    }

    //    return avoidanceStrength;
    //}





    //private Vector2[] CreateDetectorDirection()
    //{
    //    Vector2[] castDir = new Vector2[raycastCount];

    //    var angle = 0f;
    //    for (int i = 0; i < raycastCount; i++)
    //    {
    //        var computeAngle = new Vector2(Mathf.Sin(angle * Mathf.PI / 180), Mathf.Cos(angle * Mathf.PI / 180));
    //        var directionCast = ((Vector2)transform.position + computeAngle - (Vector2)transform.position).normalized;

    //        castDir[i] = directionCast;
    //        angle += 360 / raycastCount;
    //    }
    //    return castDir;
    //}



    //protected override void Death()
    //{
    //    LootDrop();
    //    base.Death();
    //}

    //private void LootDrop()
    //{
    //    Debug.Log("DO THIS");
    //    foreach (var itemLoot in listOfDropLoot)
    //    {
    //        float dropRate = UnityEngine.Random.Range(0.0f, 100.0f);
    //        float lootRate = itemLoot.dropChance;

    //        /* Example:
    //         * when dropRate = 9.0f
    //         * when lootRate = 10.0f
    //         * Drop a loot if lootRate is greater then equal to dropRate
    //         * Otherwise don't drop
    //         */
    //        if (lootRate >= dropRate)
    //        {
    //            //Drop
    //            var loots = AmountLootItems(itemLoot);

    //            if (loots.Length > 0)
    //            {
    //                foreach (var item in loots)
    //                {
    //                    float x = UnityEngine.Random.Range(-1f, 1f);
    //                    float y = UnityEngine.Random.Range(-1f, 1f);
    //                    Vector2 randomDirection = new Vector2(x, y).normalized;

    //                    const float addForce = 50f;

    //                    item.transform.position = transform.position;
    //                    Rigidbody2D rb = item.GetComponent<Rigidbody2D>();
    //                    rb.drag = 5;
    //                    rb.AddForce(randomDirection * addForce * Time.deltaTime, ForceMode2D.Impulse);
    //                }
    //            }
    //        }
    //    }
    //}
    //private GameObject[] AmountLootItems(Loot itemLoot)
    //{
    //    int amount = itemLoot.randomAmountDrop ? UnityEngine.Random.Range(itemLoot.minAmount, itemLoot.maxAmount) : itemLoot.maxAmount;
    //    List<GameObject> dropList = new List<GameObject>();

    //    for (int i = 0; i < amount; i++)
    //    {
    //        GameObject _loot = ObjectPooling.instance.GetObjectInPool("loot", itemLoot.lootPrefab);
    //        dropList.Add(_loot);
    //    }

    //    return dropList.ToArray();
    //}



    //private void OnDrawGizmos()
    //{
    //    if (!showGizmos) { return; }

    //    detectorDir = CreateDetectorDirection();



    //    if (Application.isPlaying)
    //    {
    //        Gizmos.color = Color.red;
    //        Gizmos.DrawWireSphere(transform.position, obstacleDetectRadius);

    //        // Gizmos for detector; color white
    //        Gizmos.color = Color.white;
    //        var angle = 0f;
    //        for (int i = 0; i < detectorDir.Length; i++)
    //        {
    //            var directionCast = detectorDir[i];

    //            Gizmos.DrawLine(transform.position, (Vector2)transform.position + (directionCast * lengthRaycast));
    //            angle += 360 / raycastCount;
    //        }

    //        Gizmos.color = Color.green;
    //        for (int i = 0; i < contextVector.Length; i++)
    //        {
    //            var directionCast = detectorDir[i];
    //            Gizmos.DrawLine(transform.position, (Vector2)transform.position + (directionCast * contextVector[i]));
    //        }


    //        Gizmos.color = Color.yellow;
    //        for (int i = 0; i < raycastCount; i++)
    //        {
    //            Gizmos.DrawRay(transform.position, GetMoveDirection() * 1);
    //        }

    //    }

    //}
}
