using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using Pathfinding;
using System;
using MoreMountains.Feedbacks;

public class EnemyAI : AIEntity
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

    public enum EnemyMoveType { Follow, RandomMove}


    [SerializeField] private EnemyMoveType moveType = EnemyMoveType.Follow;
    [SerializeField] private bool canFly = false;

    [SerializeField] private bool isBoss = false;


    [Header("Loot")]
    [SerializeField] private List<Loot> listOfDropLoot;

    private bool canRandomMove = true;


    public override void StopMovement(bool canMove)
    {
        //Debug.Log("Stop Moving");
        aiPath.canMove = canMove;
        IsCanMove = canMove;
    }

    protected override void MovementBehaviour()
    {
        switch (moveType)
        {
            case EnemyMoveType.Follow:
                //aiPath.canMove = true;
                aiPath.canMove = Vector2.Distance(transform.position, aiPath.destination) > stopDistance;
                aiPath.destination = PlayerSingleton.Instance.transform.position;
                aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
                break;
            case EnemyMoveType.RandomMove:
                //RandomPath randomPath = RandomPath.Construct(transform.position, 450, OnPathComplete);
                //randomPath.spread = 500;
                //randomPath.aimStrength = 0.8f;
                //randomPath.aim = aiPath.destination;

                //seek.StartPath(randomPath, OnPathComplete);
                aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
                StartCoroutine(RandomPathChanger());
                break;
        }

        //Stop moving
        if (Vector2.Distance(transform.position, aiPath.destination) < stopDistance)
        {

        }

        //Flee
        if (Vector2.Distance(transform.position, aiPath.destination) < fleeDistance)
        {
            //aiPath.canMove = true;
            FleePath fleePath = FleePath.Construct(transform.position, aiPath.destination, 450);
            fleePath.aimStrength = 0.8f;
            fleePath.spread = 0;


            seek.StartPath(fleePath, OnPathComplete);
        }
    }

    public void MoveTypeBehaviour()
    {
        if (!IsCanMove) {
            return;
        }

        switch (moveType)
        {
            case EnemyMoveType.Follow:
                //aiPath.canMove = true;
                aiPath.canMove = Vector2.Distance(transform.position, aiPath.destination) > stopDistance;
                aiPath.destination = PlayerSingleton.Instance.transform.position;
                aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
                break;
            case EnemyMoveType.RandomMove:
                //RandomPath randomPath = RandomPath.Construct(transform.position, 450, OnPathComplete);
                //randomPath.spread = 500;
                //randomPath.aimStrength = 0.8f;
                //randomPath.aim = aiPath.destination;

                //seek.StartPath(randomPath, OnPathComplete);
                aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
                StartCoroutine(RandomPathChanger());
                break;
        }

        //Stop moving
        if (Vector2.Distance(transform.position, aiPath.destination) < stopDistance)
        {

        }

        //Flee
        if (Vector2.Distance(transform.position, aiPath.destination) < fleeDistance)
        {
            aiPath.canMove = true;
            FleePath fleePath = FleePath.Construct(transform.position, aiPath.destination, 450);
            fleePath.aimStrength = 0.8f;
            fleePath.spread = 0;


            seek.StartPath(fleePath, OnPathComplete);
        }

    }

    private void OnPathComplete(Path p)
    {
        Debug.Log("Done");
    }

    IEnumerator RandomPathChanger()
    {
        if (canRandomMove)
        {
            canRandomMove = false;
            RandomPath randomPath = RandomPath.Construct(transform.position, ThesisUtility.RandomGetAmount(600, 2500), OnPathComplete);
            randomPath.spread = ThesisUtility.RandomGetAmount(500, 1500);
            randomPath.aimStrength = 1;
            randomPath.aim = aiPath.destination;

            seek.StartPath(randomPath, OnPathComplete);

            yield return new WaitForSeconds(ThesisUtility.RandomGetFloat(1, 4));
            canRandomMove = true;
        }
    }


    #region Loot Methods
    private GameObject[] AmountItemDropLoot(Loot itemLoot)
    {
        int amount = itemLoot.randomAmountDrop ? ThesisUtility.RandomGetAmount(itemLoot.minAmount, itemLoot.maxAmount) : itemLoot.maxAmount;
        List<GameObject> dropList = new List<GameObject>();

        for (int i = 0; i < amount; i++)
        {
            GameObject _loot = ObjectPooling.Instance.GetObjectInPool("loot", itemLoot.lootPrefab);
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
    #endregion

    protected override void DeathBehaviour()
    {
        base.DeathBehaviour();
        LootDrop();
    }

}
