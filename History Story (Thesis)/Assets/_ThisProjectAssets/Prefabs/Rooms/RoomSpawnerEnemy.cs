using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using UnityEngine.Events;
using Pathfinding;

public class RoomSpawnerEnemy : MonoBehaviour
{
    [System.Serializable]
    public class WaveSystem
    {
        public int enemySpawnCount = 5;
        public GameObject[] enemyArray;
        public float statsMultiplier = 0f;
    }

    private enum BattleStartState { None, OnEnterRoom, OnTrigger}

    private PolygonCollider2D roomAreaCollider;
    private RoomArea roomArea;

    [SerializeField] private BattleStartState battleMode = BattleStartState.None;
    [SerializeField] private bool chanceToBattle = false;

    [Space(25)]
    [Header("Wave System")]
    [SerializeField] private WaveSystem[] waveInfoList;
    [SerializeField] private LayerMask cannotSpawn;
    [SerializeField] private int maxEnemySpawnInRoom = 5;

    [Space(30)]
    public UnityEvent OnBeforeBattleTrigger; //Before battle
    public UnityEvent OnStartBattleTrigger; //When the battle started
    public UnityEvent OnFinishedBattleTrigger; //When the battle finish


    private List<Collider2D> enemiesAliveList = new List<Collider2D>();
    private int currentWave = 0;
    private int enemySpawnCount = 0;

    
    private bool isAlreadyTrigger = false;
    private bool isPendingBattle = false;


    private void Awake()
    {
        roomArea = GetComponentInParent<RoomArea>();
        roomAreaCollider = roomArea.GetComponent<PolygonCollider2D>();
    }

    private void OnEnable()
    {
        roomArea.OnPlayerEnterRoom.AddListener(OnPlayerEnterRooom);
        roomArea.OnPlayerExitRoom.AddListener(OnPlayerExitRoom);
    }

   

    private void OnDisable()
    {
        roomArea.OnPlayerEnterRoom.RemoveListener(OnPlayerEnterRooom);
        roomArea.OnPlayerExitRoom.RemoveListener(OnPlayerExitRoom);

    }


    private void OnPlayerEnterRooom()
    {
        if (battleMode == BattleStartState.OnEnterRoom)
        {
            if (!isAlreadyTrigger) //If the room is not yet trigger
            {
                //Start the battle
                StartBattle();
            }
            else
            {
                if (chanceToBattle && ThesisUtility.RandomGetChanceBool()) //If the room is already trigger and has chance to battle
                {
                    //Start the battle
                    StartBattle();
                }
            }
        }else if(battleMode == BattleStartState.None)
        {
            if (chanceToBattle && ThesisUtility.RandomGetChanceBool()) //If the room has chance to battle
            {
                //Start the battle
                StartBattle();
            }
        }
    }
    private void OnPlayerExitRoom()
    {
        //No need
    }

    private void BattleIsStarted()
    {
        isPendingBattle = true;
        StartCoroutine(ScanEnemies()); //Start the scanning
        OnStartBattleTrigger?.Invoke(); //Invoke after the battle started

        //Debug.Log("UPDATE GRAPH");

        UpdateRoomGraphPathFinding();

    }
    private void BattleIsEnded()
    {
        isPendingBattle = false;
        UpdateRoomGraphPathFinding();

    }

    private void UpdateRoomGraphPathFinding() //Update the graph
    {
        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; //Set the bound
        var guo = new GraphUpdateObject(bounds);

        // Set some settings
        AstarPath.active.UpdateGraphs(guo); //Update the node according to bound
    }

    IEnumerator ScanEnemies()
    {
        if (roomAreaCollider != null)
        {
            // Set up a ContactFilter2D to filter colliders by tag
            ContactFilter2D contactFilter = new ContactFilter2D();
            contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Replace "Enemy" with your actual layer or tag

            do
            {
                // Get all enemy colliders inside the PolygonCollider2D
                enemiesAliveList = new List<Collider2D>();
                roomAreaCollider.OverlapCollider(contactFilter, enemiesAliveList);

                Debug.Log("Enemy alive left: " + enemiesAliveList.Count);
                yield return new WaitForSeconds(0.2f);

                //If there are no more enemy to be scan then while loop done
            } while (enemiesAliveList.Count > 0 || isPendingBattle);

            //Done fighting in this room
            ResetBattle(); //Reset the battle system
            OnFinishedBattleTrigger?.Invoke();

            BattleIsEnded();
        }
        else
        {
            Debug.LogError("Collider2D is not existed.");
        }
    }
    IEnumerator EnemyWaveSpawner() //Control the spawning enemy in each wave
    {
        int maxNumberEnemy = waveInfoList[currentWave].enemySpawnCount;
        int remainingSpawn = maxNumberEnemy - enemySpawnCount;

        if (remainingSpawn > 0)
        {
            //If still have remaining enemy to be spawn
            int toSpawn = remainingSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : remainingSpawn;

            for (int i = 0; i < toSpawn; i++)
            {

                var selectedRandomEnemy = ObjectPooling.Instance.GetObjectInPool("enemy", waveInfoList[currentWave].enemyArray.RandomGetObject()); //Get Enemy
                selectedRandomEnemy.transform.position = ThesisUtility.RandomGetVector2InCollider2DArea(roomAreaCollider, 0.1f, cannotSpawn); //Set the position
                enemySpawnCount++;
                yield return new WaitForSeconds(Random.Range(0.2f, 1.5f));
            }
        }
        else
        {
            //Wave is done
            Debug.Log("Enemy spawned reached maximum amount in this wave");
        }
    }
    IEnumerator ExecuteWaveBattle() //Control the wave battle
    {
        do
        {
            yield return new WaitForSeconds(0.2f);

            if (enemiesAliveList.Count == 0 && enemySpawnCount >= waveInfoList[currentWave].enemySpawnCount)
            {
                //Next Wave
                Debug.Log("Next wave");
                yield return new WaitForSeconds(0.5f);
                enemySpawnCount = 0;
                currentWave++;

            }
            else if (enemiesAliveList.Count <= 3)
            {
                yield return StartCoroutine(EnemyWaveSpawner()); //Wait to finish the wave spawning
                yield return new WaitForSeconds(0.5f);
            }



        } while (currentWave <= waveInfoList.Length - 1);

        //Done spawning enemies
        Debug.Log("THIS ROOM IS FINISH SPAWNING");

        isAlreadyTrigger = true;
        isPendingBattle = false;
    }

    private void ResetBattle()
    {
        //Reset the variables
        currentWave = 0;
        enemySpawnCount = 0;
    }

    #region Battle Methods
    private void StartBattle() //Start the battle
    {
        OnBeforeBattleTrigger?.Invoke(); //Invoke before the battle start

        StartCoroutine(ExecuteWaveBattle());

        BattleIsStarted();

    }

    /* You can use these in the unity event in the inspector
     * The StartBattleOnChance() mathod, ipla-play nya ang battle on chances only
     * The ForceStartBattle() method will play without calling the unity events
     */
    public void StartBattleOnChance() //Start the battle on chances
    {
        if (ThesisUtility.RandomGetChanceBool())
        {
            //Start the battle
            ForceStartBattle();

            BattleIsStarted();
        }
    }
    public void ForceStartBattle() //Force start the battle
    {
        StartCoroutine(ExecuteWaveBattle());
        BattleIsStarted();
    }
    #endregion

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.CompareTag("Player") && battleMode == BattleStartState.OnTrigger)
        {
            if (!isAlreadyTrigger) //If not yet trigger 
            {
                //Start battle
                StartBattle();
                isAlreadyTrigger = true;
            }
            else //Is already trigger
            {
                if (chanceToBattle && ThesisUtility.RandomGetChanceBool()) //If has chance to trigger the battle
                {
                    //Start battle
                    StartBattle();
                }
            }
        }
    }















}
