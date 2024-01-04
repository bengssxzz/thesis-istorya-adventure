using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using ThesisLibrary;
using System;

#if UNITY_EDITOR
using UnityEditor;
#endif

[RequireComponent(typeof(AIPath))]
public class AIEntity : Entities
{
    [System.Serializable] private class Loot
    {
        [Tooltip("Loot prefab to be dropped when entity died")]
        public GameObject lootPrefab;
        [Tooltip("Check if you want to randomize the amount to drop, else fix amount loot drop and the minAmount will no longer use")]
        public bool randomAmountDrop = false;

        [Range(1, 100)] public int minAmount = 1, maxAmount = 1;

        [Tooltip("Drop loot chance")]
        [Range(0.0f, 100.0f)] public float dropChance;
    }

    private AIPath aiPath;
    private Seeker seek;

    private Transform targetEntity;

    [Header("Loot")]
    [SerializeField] private List<Loot> listOfDropLoot;


    [Space(10)]
    [Header("Distance Info")]
    [SerializeField] [Range(0f, 50f)] private float stopDistance;
    [SerializeField] [Range(0f, 50f)] private float fleeDistance;


    //Tryer
    private bool doFlee = true;

    protected override void Awake()
    {
        base.Awake();

        aiPath = GetComponent<AIPath>();
        seek = GetComponent<Seeker>();
    }
    protected override void Start()
    {
        base.Start();

    }
    protected override void Update()
    {
        targetEntity = Attack_Controller.GetNearestEnemy;

        base.Update();

        //StartCoroutine(FleeTryer());
        SeekBehaviour();
        FleeBehaviour();

    }
    protected override void FixedUpdate()
    {
        base.FixedUpdate();
    }


    protected override void MovementBehaviour()
    {

        //aiPath.destination = targetEntity.position;
    }

    private void SeekBehaviour()
    {
        var distance = Vector2.Distance(transform.position, targetEntity.position);
        if (distance >  stopDistance && distance > fleeDistance)
        {
            aiPath.canMove = true;
            aiPath.destination = targetEntity.position;
            aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
            //Debug.Log($"Current Speeed: {GetEntityStats.currentMoveSpeed} || Deltatime: {Time.deltaTime} || Total: {GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime}");

        }
        else
        {
            aiPath.canMove = false;
        }
    }
    private void FleeBehaviour()
    {
        if (Vector2.Distance(transform.position, targetEntity.position) < fleeDistance)
        {
            //TODO: Flee
            Debug.Log("Flee");
            aiPath.canMove = true;

            FleePath fleePath = FleePath.Construct(transform.position, targetEntity.position, 450);
            fleePath.aimStrength = 0.8f;
            fleePath.spread = 0;


            seek.StartPath(fleePath, OnPathComplete);
        }
    }

    private void OnPathComplete(Path p)
    {
        Debug.Log("Done Path");
    }

    protected override void DeathBehaviour()
    {
        base.DeathBehaviour();
        LootDrop();
    }

    private GameObject[] AmountItemDropLoot(Loot itemLoot)
    {
        int amount = itemLoot.randomAmountDrop ? ThesisUtility.RandomGetAmount(itemLoot.minAmount, itemLoot.maxAmount) : itemLoot.maxAmount;
        List<GameObject> dropList = new List<GameObject>();

        for (int i = 0; i < amount; i++)
        {
            GameObject _loot = ObjectPooling.instance.GetObjectInPool("loot", itemLoot.lootPrefab);
            dropList.Add(_loot);
        }

        return dropList.ToArray();
    }
    private void LootDrop() //Loot to drop
    {
        foreach (var itemLoot in listOfDropLoot)
        {
            /* Example:
             * when dropRate = 9.0f
             * when lootRate = 10.0f
             * Drop a loot if lootRate is greater then equal to dropRate
             * Otherwise don't drop
             */
            if (ThesisUtility.RandomGetChanceBool(itemLoot.dropChance / 100))
            {
                //Drop
                var loots = AmountItemDropLoot(itemLoot);

                if (loots.Length > 0)
                {
                    foreach (var lootItem in loots)
                    {
                        Vector2 randomDirection = ThesisUtility.RandomGetVector2Direction();

                        const float addForce = 50f;

                        lootItem.transform.position = transform.position;
                        Rigidbody2D rb = lootItem.GetComponent<Rigidbody2D>();
                        rb.drag = 5;
                        rb.AddForce(randomDirection * addForce * Time.deltaTime, ForceMode2D.Impulse);
                    }
                }
            }
        }
    }





    private void OnDrawGizmosSelected()
    {
        if (!debugMode) { return; }

#if UNITY_EDITOR
        Handles.color = Color.green;
        Handles.DrawWireDisc(transform.position, transform.forward, stopDistance);

        Handles.color = Color.red;
        Handles.DrawWireDisc(transform.position, transform.forward, fleeDistance);
#endif

    }















}
