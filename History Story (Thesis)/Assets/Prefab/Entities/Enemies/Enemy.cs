using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CollectingMyEnemy))]
public class Enemy : Entities
{
    [System.Serializable] private class Loot
    {
        [Tooltip("Loot prefab to be dropped when entity died")]
        public GameObject lootPrefab;
        [Tooltip("Check if you want to randomize the amount to drop, else fix amount loot drop and the minAmount will no longer use")]
        public bool randomAmountDrop = false;

        [Range(1, 100)] public int minAmount, maxAmount;

        [Tooltip("Drop loot chance")]
        [Range(0.0f, 100.0f)] public float dropChance;
    }

    private Rigidbody2D rb;
    protected CollectingMyEnemy myEnemies;

    [SerializeField] protected bool showGizmos = false;
    private Transform targetEnemy;

    [SerializeField] private List<Loot> listOfDropLoot;
    
    protected bool targetInRange = false;

    public float stopDistance;
    public float FleeDistance;


    protected override void Awake()
    {
        base.Awake();
        rb = GetComponent<Rigidbody2D>();
        myEnemies = GetComponent<CollectingMyEnemy>();
    }

    protected override void Start()
    {
        base.Start();
        targetEnemy = myEnemies.getNearestEnemy;
    }

    protected override void Update()
    {
        base.Start();
        
        if (targetInRange)
        {
            Attack();
        }
        
    }

    protected override void FixedUpdate()
    {
        base.Start();

        ChaseMyEnemy();
        FleeToMyEnemy();
    }

    protected virtual void DetectRangeBehaviour()
    {
        
    }

    protected virtual void ChaseMyEnemy()
    {
        targetEnemy = myEnemies.getNearestEnemy;
        
        if (targetEnemy == null) { return; }

        move_dir = targetEnemy.position - transform.position;
        if (Vector2.Distance(transform.position, targetEnemy.position) < stopDistance)
        {
            targetInRange = true;
            rb.velocity = Vector2.zero;
            return;
        }
        targetInRange = false;
        rb.velocity = move_dir.normalized * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    }

    protected virtual void FleeToMyEnemy()
    {
        targetEnemy = myEnemies.getNearestEnemy;

        if (targetEnemy == null) { return; }

        move_dir = targetEnemy.position - transform.position;
        if (Vector2.Distance(transform.position, targetEnemy.position) < FleeDistance)
        {
            rb.velocity = (move_dir.normalized * -GetEntityStats.currentMoveSpeed) * Time.deltaTime;
        }
        
    }

    protected virtual void Attack()
    {
        //Attack
    }

    protected override void Death()
    {
        LootDrop();
        base.Death();
    }

    private void LootDrop()
    {
        Debug.Log("DO THIS");
        foreach (var itemLoot in listOfDropLoot)
        {
            float dropRate = UnityEngine.Random.Range(0.0f, 100.0f);
            float lootRate = itemLoot.dropChance;

            /* Example:
             * when dropRate = 9.0f
             * when lootRate = 10.0f
             * Drop a loot if lootRate is greater then equal to dropRate
             * Otherwise don't drop
             */
            if (lootRate >= dropRate)
            {
                //Drop
                var loots = AmountLootItems(itemLoot);

                if (loots.Length > 0)
                {
                    foreach (var item in loots)
                    {
                        float x = UnityEngine.Random.Range(-1f, 1f);
                        float y = UnityEngine.Random.Range(-1f, 1f);
                        Vector2 randomDirection = new Vector2(x, y).normalized;

                        const float addForce = 50f;

                        item.transform.position = transform.position;
                        Rigidbody2D rb = item.GetComponent<Rigidbody2D>();
                        rb.drag = 5;
                        rb.AddForce(randomDirection * addForce * Time.deltaTime, ForceMode2D.Impulse);
                    }
                }
            }
        }
    }
    private GameObject[] AmountLootItems(Loot itemLoot)
    {
        int amount = itemLoot.randomAmountDrop ? UnityEngine.Random.Range(itemLoot.minAmount, itemLoot.maxAmount) : itemLoot.maxAmount;
        List<GameObject> dropList = new List<GameObject>();

        for (int i = 0; i < amount; i++)
        {
            GameObject _loot = ObjectPooling.instance.GetObjectInPool("loot", itemLoot.lootPrefab);
            dropList.Add(_loot);
        }

        return dropList.ToArray();
    }

    private void OnDrawGizmos()
    {
        if (!showGizmos) {
            return;
        }

        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, stopDistance);

        Gizmos.color = Color.red;   
        Gizmos.DrawWireSphere(transform.position, FleeDistance);

    }







}
