using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System.Threading;
using System.Threading.Tasks;
using ThesisLibrary;
using System;
using UnityEngine.Events;
using Pathfinding;

public class BattleTriggerArea : MonoBehaviour
{
    [System.Serializable]
    private class WaveSystem
    {
        public int enemySpawnCount = 5;
        public GameObject[] enemyArray;
        public float statsMultiplier = 0f;
    }


    private enum BattleStartState { None, Idle, OnEnterRoom, OnTrigger }

    private PolygonCollider2D roomAreaCollider;
    private RoomArea roomArea;
    BattleSystemUI battleUI;


    [SerializeField] private BattleStartState battleMode = BattleStartState.Idle;
    [SerializeField] private bool chanceToBattle = false;
    [SerializeField] private bool showBattleInfoUI = true;

    [Space(25)]
    [Header("Wave System")]
    [SerializeField] private bool show_UI_Info = true;
    [SerializeField] private int maxEnemySpawnInRoom = 5;
    [SerializeField] private WaveSystem[] waveInfoList;
    [SerializeField] private LayerMask cannotSpawn;

    [Space(10)]
    [SerializeField] private List<GameObject> listOfBarriers = new List<GameObject>();

    [Space(30)]
    public UnityEvent OnStartBattleTrigger; //When the battle started
    public UnityEvent OnFinishWaveBattle;
    public UnityEvent OnFinishedBattleTrigger; //When the battle finish

    private bool onPendingBattle = false;
    private bool randomDesiredTimer = false;
    private bool desiredToBattleInRoom = false;
    private bool isAlreadyTrigger = false;
    private CancellationTokenSource getAllEnemiesTokenSource;

    private int totalEnemyInRoom = 0;


    public bool GetNextDesiredBattleTrigger { get { return desiredToBattleInRoom; } set { desiredToBattleInRoom = value; } }
    public bool IsAlreadyTriggerArea { get { return isAlreadyTrigger; } set { isAlreadyTrigger = value; } }



    

    private void Awake()
    {
        roomArea = GetComponentInParent<RoomArea>();
        roomAreaCollider = roomArea.GetComponent<PolygonCollider2D>();
    }


    
    private void OnEnable()
    {
        roomArea.OnPlayerEnterRoom.AddListener(CallPlayerEnterRoom);
        roomArea.OnPlayerExitRoom.AddListener(CallPlayerExitRoom);
    }
    private void OnDisable()
    {
        roomArea.OnPlayerEnterRoom.RemoveListener(CallPlayerEnterRoom);
        roomArea.OnPlayerExitRoom.RemoveListener(CallPlayerExitRoom);

        CancelGetAllEnemiesTask();
    }

    private void Start()
    {
        //ExampleWaitUntil().Forget();
        //StartBattle().Forget();
        battleUI = UI_Manager.Instance.FindComponentInUIMenu<BattleSystemUI>("Battle UI");
    }


    private void CallPlayerEnterRoom()
    {
        CancelGetAllEnemiesTask();
        getAllEnemiesTokenSource = new CancellationTokenSource();

        GetAllEnemiesInRoom(getAllEnemiesTokenSource.Token).Forget();

        OnPlayerEnterRooom().Forget();
    }
    private void CallPlayerExitRoom()
    {
        CancelGetAllEnemiesTask();

        OnPlayerExitRoom().Forget();
    }


    private async UniTaskVoid OnPlayerEnterRooom() //When the player enter the room
    {
        if (battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

        if (battleMode == BattleStartState.OnEnterRoom)
        {
            Debug.Log("PLAYER ENTERED THE ROOM");
            if (!isAlreadyTrigger) //If the room is not yet trigger
            {
                //Start the battle
                TriggerBattleStart().Forget();
            }
            else
            {
                if (chanceToBattle && desiredToBattleInRoom) //If the room is already trigger and has chance to battle
                {
                    //Start the battle
                    TriggerBattleStart().Forget();
                }
            }
        }
        else if (battleMode == BattleStartState.Idle)
        {
            if (chanceToBattle && desiredToBattleInRoom) //If the room has chance to battle
            {
                //Start the battle
                TriggerBattleStart().Forget();
            }
        }

        await UniTask.Yield();
    }
    private async UniTaskVoid OnPlayerExitRoom()//When the player exit the room
    {
        //Generate next battle when trigger the room again
        if (battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

        if (randomDesiredTimer) { return; }

        //Start time for timer
        if (chanceToBattle)
        {
            randomDesiredTimer = true;
            desiredToBattleInRoom = ThesisUtility.RandomGetChanceBool();

            var timer = ThesisUtility.RandomGetAmount(5, 10);
            await UniTask.Delay(TimeSpan.FromSeconds(timer));

            randomDesiredTimer = false;
        }
    }


    private void CancelGetAllEnemiesTask()
    {
        // Cancel the task if it's running and dispose the CancellationTokenSource
        if (getAllEnemiesTokenSource != null)
        {
            getAllEnemiesTokenSource.Cancel();
            getAllEnemiesTokenSource.Dispose();
            getAllEnemiesTokenSource = null;
        }
    }
    private async UniTaskVoid GetAllEnemiesInRoom(CancellationToken cancellationToken) //Getting all the enemies alive in the area
    {
        Debug.Log("GETTING ENEMIES COUNT");

        if (roomAreaCollider != null)
        {
            try
            {
                do
                {
                    cancellationToken.ThrowIfCancellationRequested();
                    // Create a list to store colliders of enemies
                    List<Collider2D> enemyColliders = new List<Collider2D>(); // Assuming a maximum of 10 enemies

                    ContactFilter2D contactFilter = new ContactFilter2D();
                    contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Set the layer mask to include only the "Enemy" layer

                    totalEnemyInRoom = roomAreaCollider.OverlapCollider(contactFilter, enemyColliders);

                    // Check if cancellation was requested
                    await UniTask.DelayFrame(1); // Add a small delay to allow other operations to run

                } while (true);
            }
            catch (OperationCanceledException)
            {
                Debug.Log("GetAllEnemiesInRoom task was cancelled.");
            }


            //do
            //{
            //    cancellationToken.ThrowIfCancellationRequested();
            //    // Create a list to store colliders of enemies
            //    List<Collider2D> enemyColliders = new List<Collider2D>(); // Assuming a maximum of 10 enemies

            //    ContactFilter2D contactFilter = new ContactFilter2D();
            //    contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Set the layer mask to include only the "Enemy" layer

            //    totalEnemyInRoom = roomAreaCollider.OverlapCollider(contactFilter, enemyColliders);

            //    // Check if cancellation was requested
            //    await UniTask.DelayFrame(1); // Add a small delay to allow other operations to run

            //} while (true);
        }
        else
        {
            Debug.LogError("Polygon collider not assigned!");
        }

    }


    private async UniTask SpawnEnemyWaves(int waveIndex) //Spawn the enemies
    {
        if (waveIndex > waveInfoList.Length - 1) { return; }

        WaveSystem waveInfo = waveInfoList[waveIndex];


        int desiredToSpawn = waveInfo.enemySpawnCount; //Max enemy to spawn
        //int remainingToSpawn = desiredToSpawn - spawnedCount;
        

        do
        {
            int toSpawn = desiredToSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : desiredToSpawn; //Calcaulate 

            for (int i = 0; i < toSpawn; i++)
            {
                Debug.Log("CREATE NEW " + desiredToSpawn);

                //Calculate a random position first
                Vector2 randomPosition = ThesisUtility.RandomGetVector2InCollider2DArea(roomAreaCollider, 0.35f, cannotSpawn);

                GameObject selectedEnemy = ObjectPooling.Instance.GetObjectInPool("enemy", waveInfo.enemyArray.RandomGetObject(), Vector3.zero);
                selectedEnemy.transform.position = randomPosition;

                desiredToSpawn--;

                battleUI.UpdateEnemyRemain(desiredToSpawn);
                var randomCalc = ThesisUtility.RandomGetFloat(1f, 1.5f);
                await UniTask.Delay(TimeSpan.FromSeconds(randomCalc));
            }

            await UniTask.WaitUntil(() => totalEnemyInRoom <= 1); //Wait until the remaining enemy become 1
        } while (desiredToSpawn > 0);

        Debug.Log("NO MORE ENEMY TO SPAWN");
    }
    private async UniTask ExecuteWaves() //Execute the wave list
    {
        if(waveInfoList.Length == 0) { return; }

        for (int i = 0; i < waveInfoList.Length; i++)
        {
            Debug.Log($"START WAVE {i + 1}");
            battleUI.UpdateWaveInfo(i + 1, waveInfoList.Length);

            await SpawnEnemyWaves(i); //Wait to finish the spawn

            await UniTask.WaitUntil(() => totalEnemyInRoom == 0); //Wait until the total enemy become 0

            Debug.Log($"DONE {i + 1} WAVE");
        }

        Debug.Log("BATTLE WAVE IS COMPLETED");
        OnFinishWaveBattle?.Invoke();

    }


    private async UniTaskVoid TriggerBattleStart() 
    {
        var timer = 0f;

        timer = ThesisUtility.RandomGetFloat(1.2f, 1.7f);
        await UniTask.Delay(TimeSpan.FromSeconds(timer));

        if (!roomArea.isPlayerInsideRoom)
        {
            return;
        }

        BattleStarted();

        timer = ThesisUtility.RandomGetFloat(1.2f, 1.7f);
        await UniTask.Delay(TimeSpan.FromSeconds(timer));


        if (!onPendingBattle)
        {
            //Start the battle
            onPendingBattle = true;
            await ExecuteWaves(); //Wait to finish
        }

        await UniTask.WaitUntil(() => totalEnemyInRoom == 0); //Wait until the total enemy become 0
        await UniTask.Delay(1000);
        BattleEnded();
    }

    private async void BattleStarted() //Battle started
    {
        //Activate the barriers
        foreach (var item in listOfBarriers)
        {
            item.SetActive(true);
        }

        OnStartBattleTrigger?.Invoke();

        if (showBattleInfoUI)
            battleUI.ToggleWaveInfo(true);


        await UpdateGraphNode();



    }
    private async void BattleEnded() //Battle ended
    {
        //Deactivate the barriers
        foreach (var item in listOfBarriers)
        {
            item.SetActive(false);
        }

        OnFinishedBattleTrigger?.Invoke();

        if(showBattleInfoUI)
            battleUI.ToggleWaveInfo(false);

        await UpdateGraphNode();

        onPendingBattle = false;
        isAlreadyTrigger = true;
    }

    private async UniTask UpdateGraphNode()
    {
        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; //Set the bound
        var guo = new GraphUpdateObject(bounds);

        AstarPath.active.UpdateGraphs(guo, 0.3f); //Update the node according to bound


        await UniTask.WaitForEndOfFrame(this);
    }







}
