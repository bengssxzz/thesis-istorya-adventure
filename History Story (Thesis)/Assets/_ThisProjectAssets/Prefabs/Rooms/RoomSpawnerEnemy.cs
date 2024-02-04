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

    private enum BattleStartState { None, Idle, OnEnterRoom, OnTrigger}

    private PolygonCollider2D roomAreaCollider;
    private RoomArea roomArea;

    [SerializeField] private BattleStartState battleMode = BattleStartState.Idle;
    [SerializeField] private bool chanceToBattle = false;

    [Space(25)]
    [Header("Wave System")]
    [SerializeField] private WaveSystem[] waveInfoList;
    [SerializeField] private LayerMask cannotSpawn;
    [SerializeField] private int maxEnemySpawnInRoom = 5;

    [Space(10)]
    [SerializeField] private List<GameObject> listOfBarriers = new List<GameObject>();

    [Space(30)]
    public UnityEvent OnBeforeBattleTrigger; //Before battle
    public UnityEvent OnStartBattleTrigger; //When the battle started
    public UnityEvent OnFinishedBattleTrigger; //When the battle finish


    private List<Collider2D> enemiesAliveList = new List<Collider2D>();
    private int currentWave = 0;
    private int enemySpawnCount = 0;
    private bool isPendingBattle = false;

    private bool randomDesiredTimer = false;
    private bool desiredToBattleInRoom = false;
    private bool isAlreadyTrigger = false;

    public bool GetNextDesiredBattleTrigger { get { return desiredToBattleInRoom; } set { desiredToBattleInRoom = value; } }
    public bool IsAlreadyTriggerArea { get { return isAlreadyTrigger; } set { isAlreadyTrigger = value; } }


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

    private void Start()
    {
        if(battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

        if(battleMode == BattleStartState.Idle)
        {
            if (chanceToBattle)
                RandomDesiredBattleInRoom();
            else
                desiredToBattleInRoom = false;
        }
        else
        {
            desiredToBattleInRoom = true; //To make sure to trigger the room at first enter
        }
        ToggleBarriers(false);
    }


    

    private void OnPlayerEnterRooom() //When the player enter the room
    {
        if (battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

        if (battleMode == BattleStartState.OnEnterRoom)
        {
            if (!isAlreadyTrigger) //If the room is not yet trigger
            {
                //Start the battle
                StartCoroutine(DelayStartBattle());
            }
            else
            {
                if (chanceToBattle && desiredToBattleInRoom) //If the room is already trigger and has chance to battle
                {
                    //Start the battle
                    StartCoroutine(DelayStartBattle());
                }
            }
        }else if(battleMode == BattleStartState.Idle)
        {
            if (chanceToBattle && desiredToBattleInRoom) //If the room has chance to battle
            {
                //Start the battle
                StartCoroutine(DelayStartBattle()); //Trigger the battle with delay
            }
        }
    }
    private void OnPlayerExitRoom()//When the player exit the room
    {
        //Generate next battle when trigger the room again
        //Start time for timer
        if(battleMode == BattleStartState.Idle)
        {
            if (chanceToBattle) //If chance to battle is true and player exit the room
            {
                StartCoroutine(TimerToRandomizeDesiredBattle()); //Then randomize the desired battle next trigger
            }
        }
        else
        {
            if (isAlreadyTrigger && chanceToBattle)
            {
                //Start the timer to randomize a new battle next trigger
                StartCoroutine(TimerToRandomizeDesiredBattle());
            }
        }
        
    }

    private void BattleIsStarted() //When the battle is started
    {
        isPendingBattle = true;
        StartCoroutine(ScanEnemies()); //Start the scanning
        OnStartBattleTrigger?.Invoke(); //Invoke after the battle started

        ToggleBarriers(true); //Enable all the barriers

        UpdateRoomGraphPathFinding();
        Debug.Log("THE GAME IS STARTED");
        UI_Manager.Instance.CloseMenu("InventoryBtn UI");
    }
    private void BattleIsEnded() //When the battle is Ended
    {
        isPendingBattle = false;
        UpdateRoomGraphPathFinding();

        ToggleBarriers(false); //Disable the barriers

        UI_Manager.Instance.ActivateID_OpenMenu("game_ui");
    }

    private void UpdateRoomGraphPathFinding() //Update the graph
    {
        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; //Set the bound
        var guo = new GraphUpdateObject(bounds);

        // Set some settings
        AstarPath.active.UpdateGraphs(guo); //Update the node according to bound
    }
    private void ToggleBarriers(bool enable) //To Toggle the barriers in the battle trigger
    {
        foreach (var barriers in listOfBarriers)
        {
            barriers.SetActive(enable);
        }
    }

    IEnumerator TimerToRandomizeDesiredBattle() //Timer to generate a desired next battle trigger
    {
        if (!randomDesiredTimer)
        {
            randomDesiredTimer = true;
            yield return new WaitForSeconds(3f); //Wait for 3 secods before randomize the desired battle 
            RandomDesiredBattleInRoom();
            randomDesiredTimer = false;

            Debug.Log("RANDOMIZED THE DESIRED BATTLE");
        }
    }
    private void RandomDesiredBattleInRoom()
    {
        desiredToBattleInRoom = ThesisUtility.RandomGetChanceBool();
    }

    IEnumerator DelayStartBattle()
    {
        yield return new WaitForSeconds(ThesisUtility.RandomGetFloat(0.8f, 1.5f)); //Wait for a while before trigger the battle

        //Then check if the player is inside the room
        if (roomArea.isPlayerInsideRoom)
        {
            StartBattle(); //Start the battle
        }
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

                isPendingBattle = enemiesAliveList.Count > 0; //If there are still enemies  then it is still pending battle
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
     * The StartBattleOnChance() method, ipla-play nya ang battle on chances only
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
        if (battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

        if (collision.CompareTag("Player") && battleMode == BattleStartState.OnTrigger)
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
