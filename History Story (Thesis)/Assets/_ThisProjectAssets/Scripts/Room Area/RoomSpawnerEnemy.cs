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
using System.Linq;


public class RoomSpawnerEnemy : MonoBehaviour
{
    [System.Serializable]
    private class WaveSystem
    {
        public int maxSpawnCount = 5;
        public ObjectPoolerInfo[] enemyTypes;
    }
    [System.Serializable]
    private class WaveEventsTrigger
    {
        public int waveIndex = 0;
        public UnityEvent waveStart;
        public UnityEvent waveEnd;
    }


    private enum BattleStartState { None, Idle, OnEnterRoom, OnTrigger }

    private PolygonCollider2D roomAreaCollider;
    private RoomArea roomArea;
    BattleSystemUI battleUI;


    [SerializeField] private BattleStartState battleMode = BattleStartState.Idle;
    [SerializeField] private bool chanceToBattle = false;
    [SerializeField] private bool showBattleInfoUI = true;


    [Space(15)]
    [SerializeField] private List<GameObject> listOfBarriers = new List<GameObject>();

    [Space(25)]
    [Header("Wave System")]
    [SerializeField] private LayerMask cannotSpawn;
    [SerializeField] private int maxEnemySpawnInRoom = 5;

    [Space(15)]
    [SerializeField] private WaveSystem[] waveInfoList;
    [SerializeField] private WaveEventsTrigger[] waveTriggerSystem;

    [Space(50)]
    public UnityEvent OnStartBattleTrigger; //When the battle started
    public UnityEvent OnEndedBattleTrigger; //When the battle finish


    private CancellationTokenSource cancelBattleTrigger;

    private bool onPendingBattle = false;
    private bool randomDesiredTimer = false;
    private bool desiredToBattleInRoom = false;
    private bool isAlreadyTrigger = false;

    private Transform[] positionList;
    private List<Transform> enemyDetected;


    public bool GetNextDesiredBattleTrigger { get { return desiredToBattleInRoom; } set { desiredToBattleInRoom = value; } }
    public bool IsAlreadyTriggerArea { get { return isAlreadyTrigger; } set { isAlreadyTrigger = value; } }





    private void Awake()
    {
        roomArea = GetComponentInParent<RoomArea>();
        roomAreaCollider = roomArea.GetComponent<PolygonCollider2D>();

        positionList = transform.GetChild(0)?.GetComponentsInChildren<Transform>().Skip(1).ToArray();

        RetriveData();
    }



    private void OnEnable()
    {
        roomArea.OnPlayerEnterRoom.AddListener(PlayerEnterRoom);
        roomArea.OnPlayerExitRoom.AddListener(PlayerExitRoom);
    }
    private void OnDisable()
    {
        roomArea.OnPlayerEnterRoom.RemoveListener(PlayerEnterRoom);
        roomArea.OnPlayerExitRoom.RemoveListener(PlayerExitRoom);
    }
    private void OnDestroy()
    {
        cancelBattleTrigger?.Dispose();
    }

    private void Start()
    {
        battleUI = BattleSystemUI.Instance;

    }

    private void RetriveData()
    {
        var loadedData = SaveGameDataManager.Instance?.LoadRoomAreaInScene();

        if (loadedData != null)
        {
            var data = loadedData.FirstOrDefault(x => x.roomId == GetInstanceID());

            if (data != null)
            {
                desiredToBattleInRoom = data.desiredBattleNextEnter;
                isAlreadyTrigger = data.isAlreadyTrigger;
            }

        }
    }





    private void PlayerEnterRoom()
    {
        if (battleMode == BattleStartState.None) { return; }

        //Start the scan
        Debug.Log("PLAYER ENTER THE ROOM");
        try
        {
            cancelBattleTrigger?.Cancel();
            cancelBattleTrigger = new CancellationTokenSource();
            enemyDetected = new List<Transform>();

            //StartRoomScannerEnemies().Forget();

            if (battleMode == BattleStartState.OnEnterRoom)
                StartWaveBattle();
        }
        catch (OperationCanceledException)
        {
            enemyDetected = new List<Transform>();
        }

    }
    private void PlayerExitRoom()
    {
        if (battleMode == BattleStartState.None) { return; }

        CalculateChanceBattle();

        //stop the scan
        Debug.Log("PLAYER EXIT THE ROOM");
        cancelBattleTrigger?.Cancel();
    }


    //Start scanning the enemies in the room
    private async UniTaskVoid StartRoomScannerEnemies()
    {
        List<Collider2D> colliderList;


        if (roomAreaCollider != null)
        {
            try
            {
                while (!cancelBattleTrigger.Token.IsCancellationRequested)
                {

                    colliderList = new List<Collider2D>(); // Initialize inside the loop to clear it in each iteration

                    ContactFilter2D contactFilter = new ContactFilter2D();
                    contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Set the layer mask to include only the "Enemy" layer

                    roomAreaCollider.OverlapCollider(contactFilter, colliderList);

                    // Extract the transforms from the colliders
                    enemyDetected = colliderList.Select(collider => collider.transform).ToList();


                    await UniTask.Yield();
                }

            }
            catch (OperationCanceledException)
            {
                Debug.Log("Scanning enemies in the room task was cancelled.");
            }
            catch (ObjectDisposedException)
            {
                Debug.Log("Scanning enemies in the room task was cancelled.");
                colliderList = new List<Collider2D>();
            }


        }
        else
        {
            Debug.LogError("Polygon collider not assigned!");
        }

    }
    private void BarriersToggler(bool toggle)
    {
        foreach (var barrier in listOfBarriers)
        {
            barrier.SetActive(toggle);
        }
    }
    private async UniTask UpdateGraphNode()
    {
        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; //Set the bound
        var guo = new GraphUpdateObject(bounds);

        //await UniTask.WaitForEndOfFrame(this);
        AstarPath.active.UpdateGraphs(guo, 0.3f); //Update the node according to bound

        await UniTask.Yield();
    }
    private async void CalculateChanceBattle()
    {
        if (randomDesiredTimer || battleMode == BattleStartState.None) { return; }

        try
        {
            if (chanceToBattle)
            {
                randomDesiredTimer = true;

                var timer = ThesisUtility.RandomGetAmount(2, 5);
                await UniTask.Delay(TimeSpan.FromSeconds(timer), cancellationToken: LevelManager.Instance.GetCancellationOnLevel);


                desiredToBattleInRoom = ThesisUtility.RandomGetChanceBool();

                randomDesiredTimer = false;
            }
        }
        finally
        {
            randomDesiredTimer = false;
        }

    }



    private void BattleStarted()
    {
        BarriersToggler(true);

        OnStartBattleTrigger?.Invoke();
        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Combat).Forget();

        if (showBattleInfoUI)
            battleUI?.ToggleWaveInfo(true);

        _ = UpdateGraphNode();
    }
    private async void BattleEnded()
    {
        try
        {
            await UniTask.WaitUntil(() => enemyDetected.Count == 0, cancellationToken: cancelBattleTrigger.Token);

            await UniTask.Delay(TimeSpan.FromSeconds(ThesisUtility.RandomGetFloat(1.7f, 2.5f)), cancellationToken: cancelBattleTrigger.Token);
        }
        finally
        {
            BarriersToggler(false);

            OnEndedBattleTrigger?.Invoke();
            SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Default).Forget();

            if (showBattleInfoUI)
                battleUI?.ToggleWaveInfo(false);

            _ = UpdateGraphNode();


            onPendingBattle = false;
            isAlreadyTrigger = true;
        }
    }


    private WaveEventsTrigger TriggerWaveEvents(int currentWave)
    {
        if (waveTriggerSystem.Length == 0)
        {
            return null;
        }

        var trigger = waveTriggerSystem.FirstOrDefault(wave => wave.waveIndex == currentWave);

        if (trigger != null)
        {
            return trigger;
        }

        return null;
    }

    //Start the wave
    private async UniTask Battle_StartWave()
    {
        if (waveInfoList.Length == 0)
        {
            Debug.LogWarning("WAVE INFO IS EMPTY");
            return;
        }

        try
        {
            for (int i = 0; i < waveInfoList.Length; i++)
            {
                battleUI?.UpdateWaveInfo(i + 1, waveInfoList.Length);
                TriggerWaveEvents(i)?.waveStart.Invoke(); //Wave started

                await SpawnEnemyWave(i); //Wait to finish spawning

                await UniTask.WaitUntil(() => enemyDetected.Count == 0, PlayerLoopTiming.LastUpdate, cancelBattleTrigger.Token); //Wait until the wave clear

                TriggerWaveEvents(i)?.waveEnd.Invoke(); //Wave ended
            }
        }
        finally
        {
            //Finish battle
            BattleEnded();
        }



    }
    //Start spawning enemies in wave
    private async UniTask SpawnEnemyWave(int waveIndex)
    {
        try
        {
            var waveInfo = waveInfoList[waveIndex];

            if (waveInfo.enemyTypes.Length == 0)
            {
                Debug.LogWarning($"ENEMY TO SPAWN AT WAVE {waveIndex} IS EMPTY IN {transform.root.name}");
                return;
            }


            int desiredToSpawn = waveInfo.maxSpawnCount; //Max enemy to spawn

            do
            {
                int toSpawn = desiredToSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : desiredToSpawn; //Calcaulate 

                for (int i = 0; i < toSpawn; i++)
                {
                    var desiredPosition = positionList.RandomGetObject().position;
                    var desiredEnemySpawn = ObjectPoolingManager.Instance.GetItemFromPool(waveInfo.enemyTypes.RandomGetObject());

                    //Debug.LogWarning($"ENEMY: {desiredEnemySpawn.name} || POSITION: {desiredPosition}");

                    desiredEnemySpawn.GetComponent<Entities>()?.GetEntityStats.ResetCurrentStats();
                    desiredEnemySpawn.transform.position = desiredPosition;
                    desiredEnemySpawn.SetActive(true);

                    desiredToSpawn--;

                    battleUI?.UpdateEnemyRemain(desiredToSpawn);
                    var delay = ThesisUtility.RandomGetFloat(1f, 1.5f);
                    await UniTask.Delay(TimeSpan.FromSeconds(delay), cancellationToken: cancelBattleTrigger.Token);
                }

                await UniTask.WaitUntil(() => enemyDetected.Count <= 1, PlayerLoopTiming.LastUpdate, cancelBattleTrigger.Token); //Wait until the remaining enemy become 1
            } while (desiredToSpawn > 0 && !cancelBattleTrigger.Token.IsCancellationRequested);


        }
        catch
        {

        }

    }




    public async void StartWaveBattle()
    {
        if (isAlreadyTrigger && !(chanceToBattle && desiredToBattleInRoom)) { return; }

        if (onPendingBattle) { return; }
        onPendingBattle = true;

        var timer = 0f;

        timer = ThesisUtility.RandomGetFloat(1.5f, 2f);
        await UniTask.Delay(TimeSpan.FromSeconds(timer));

        if (!roomArea.isPlayerInsideRoom)
        {
            onPendingBattle = false;
            return;
        }

        StartRoomScannerEnemies().Forget();

        await UniTask.Yield();

        BattleStarted();

        timer = ThesisUtility.RandomGetFloat(1.2f, 1.7f);
        await UniTask.Delay(TimeSpan.FromSeconds(timer));


        //Start the battle
        await Battle_StartWave(); //Wait to finish

        await UniTask.Delay(1500);
        BattleEnded();
    }





    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (battleMode == BattleStartState.OnTrigger)
        {
            if (!isAlreadyTrigger || (chanceToBattle && desiredToBattleInRoom))
            {
                BarriersToggler(true);
            }

            StartWaveBattle();
        }
    }


















































}
//public class RoomSpawnerEnemy : MonoBehaviour
//{
//    [System.Serializable]
//    private class WaveSystem
//    {
//        public int spawnCount = 5;
//        //public GameObject[] enemyArray;
//        public ObjectPoolerInfo[] enemies;
//    }


//    private enum BattleStartState { None, Idle, OnEnterRoom, OnTrigger }

//    private PolygonCollider2D roomAreaCollider;
//    private RoomArea roomArea;
//    BattleSystemUI battleUI;


//    [SerializeField] private BattleStartState battleMode = BattleStartState.Idle;
//    [SerializeField] private bool chanceToBattle = false;
//    [SerializeField] private bool showBattleInfoUI = true;

//    [Space(25)]
//    [Header("Wave System")]
//    [SerializeField] private int maxEnemySpawnInRoom = 5;
//    [SerializeField] private WaveSystem[] waveInfoList;
//    [SerializeField] private LayerMask cannotSpawn;

//    [Space(10)]
//    [SerializeField] private List<GameObject> listOfBarriers = new List<GameObject>();

//    [Space(30)]
//    public UnityEvent OnStartBattleTrigger; //When the battle started
//    public UnityEvent OnFinishWaveBattle;
//    public UnityEvent OnFinishedBattleTrigger; //When the battle finish

//    private bool onPendingBattle = false;
//    private bool randomDesiredTimer = false;
//    private bool desiredToBattleInRoom = false;
//    private bool isAlreadyTrigger = false;
//    private CancellationTokenSource getAllEnemiesTokenSource;

//    private int totalEnemyInRoom = 0;


//    public bool GetNextDesiredBattleTrigger { get { return desiredToBattleInRoom; } set { desiredToBattleInRoom = value; } }
//    public bool IsAlreadyTriggerArea { get { return isAlreadyTrigger; } set { isAlreadyTrigger = value; } }





//    private void Awake()
//    {
//        roomArea = GetComponentInParent<RoomArea>();
//        roomAreaCollider = roomArea.GetComponent<PolygonCollider2D>();


//        RetriveData();
//    }



//    private void OnEnable()
//    {
//        roomArea.OnPlayerEnterRoom.AddListener(CallPlayerEnterRoom);
//        roomArea.OnPlayerExitRoom.AddListener(CallPlayerExitRoom);
//    }
//    private void OnDisable()
//    {
//        roomArea.OnPlayerEnterRoom.RemoveListener(CallPlayerEnterRoom);
//        roomArea.OnPlayerExitRoom.RemoveListener(CallPlayerExitRoom);

//        CancelGetAllEnemiesTask();
//    }

//    private void Start()
//    {
//        battleUI = BattleSystemUI.Instance;

//    }

//    private void RetriveData()
//    {
//        var loadedData = SaveGameDataManager.Instance?.LoadRoomAreaInScene();

//        if (loadedData != null)
//        {
//            var data = loadedData.FirstOrDefault(x => x.roomId == GetInstanceID());

//            if (data != null)
//            {
//                desiredToBattleInRoom = data.desiredBattleNextEnter;
//                isAlreadyTrigger = data.isAlreadyTrigger;
//            }

//        }
//    }


//    private void CallPlayerEnterRoom()
//    {
//        CancelGetAllEnemiesTask();
//        getAllEnemiesTokenSource = new CancellationTokenSource();

//        GetAllEnemiesInRoom(getAllEnemiesTokenSource.Token).Forget();

//        OnPlayerEnterRooom().Forget();
//    }
//    private void CallPlayerExitRoom()
//    {
//        CancelGetAllEnemiesTask();

//        OnPlayerExitRoom().Forget();
//    }

//    public void TriggerBattle()
//    {
//        TriggerBattleStart().Forget();
//    }

//    private async UniTaskVoid OnPlayerEnterRooom() //When the player enter the room
//    {
//        if (battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

//        if (battleMode == BattleStartState.OnEnterRoom)
//        {
//            Debug.Log("PLAYER ENTERED THE ROOM");
//            if (!isAlreadyTrigger) //If the room is not yet trigger
//            {
//                //Start the battle
//                TriggerBattleStart().Forget();
//            }
//            else
//            {
//                if (chanceToBattle && desiredToBattleInRoom) //If the room is already trigger and has chance to battle
//                {
//                    //Start the battle
//                    TriggerBattleStart().Forget();
//                }
//            }
//        }
//        else if (battleMode == BattleStartState.Idle)
//        {
//            if (chanceToBattle && desiredToBattleInRoom) //If the room has chance to battle
//            {
//                //Start the battle
//                TriggerBattleStart().Forget();
//            }
//        }

//        await UniTask.Yield();
//    }
//    private async UniTaskVoid OnPlayerExitRoom()//When the player exit the room
//    {
//        //Generate next battle when trigger the room again
//        if (battleMode == BattleStartState.None) { return; } //Do nothing when it set to none

//        if (randomDesiredTimer) { return; }

//        //Start time for timer
//        if (chanceToBattle)
//        {
//            randomDesiredTimer = true;
//            desiredToBattleInRoom = ThesisUtility.RandomGetChanceBool();

//            var timer = ThesisUtility.RandomGetAmount(5, 10);
//            await UniTask.Delay(TimeSpan.FromSeconds(timer));

//            randomDesiredTimer = false;
//        }
//    }


//    private async void BattleStarted() //Battle started
//    {
//        //Activate the barriers
//        foreach (var item in listOfBarriers)
//        {
//            item.SetActive(true);
//        }

//        OnStartBattleTrigger?.Invoke();

//        if (showBattleInfoUI)
//            battleUI?.ToggleWaveInfo(true);


//        await UpdateGraphNode();

//        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Combat).Forget();

//    }
//    private async void BattleEnded() //Battle ended
//    {
//        //Deactivate the barriers
//        foreach (var item in listOfBarriers)
//        {
//            item.SetActive(false);
//        }

//        OnFinishedBattleTrigger?.Invoke();

//        if (showBattleInfoUI)
//            battleUI?.ToggleWaveInfo(false);

//        await UpdateGraphNode();

//        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Default).Forget();

//        onPendingBattle = false;
//        isAlreadyTrigger = true;
//    }


//    private async UniTask UpdateGraphNode()
//    {
//        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; //Set the bound
//        var guo = new GraphUpdateObject(bounds);

//        AstarPath.active.UpdateGraphs(guo, 0.3f); //Update the node according to bound


//        await UniTask.WaitForEndOfFrame(this);
//    }
//    private void CancelGetAllEnemiesTask()
//    {
//        // Cancel the task if it's running and dispose the CancellationTokenSource
//        if (getAllEnemiesTokenSource != null)
//        {
//            getAllEnemiesTokenSource.Cancel();
//            getAllEnemiesTokenSource.Dispose();
//            getAllEnemiesTokenSource = null;
//        }
//    }
//    private async UniTaskVoid GetAllEnemiesInRoom(CancellationToken cancellationToken) //Getting all the enemies alive in the area
//    {

//        if (roomAreaCollider != null)
//        {
//            try
//            {
//                do
//                {
//                    cancellationToken.ThrowIfCancellationRequested();
//                    // Create a list to store colliders of enemies
//                    List<Collider2D> enemyColliders = new List<Collider2D>(); // Assuming a maximum of 10 enemies

//                    ContactFilter2D contactFilter = new ContactFilter2D();
//                    contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Set the layer mask to include only the "Enemy" layer

//                    totalEnemyInRoom = roomAreaCollider.OverlapCollider(contactFilter, enemyColliders);

//                    // Check if cancellation was requested
//                    await UniTask.DelayFrame(1); // Add a small delay to allow other operations to run

//                } while (true);
//            }
//            catch (OperationCanceledException)
//            {
//                Debug.Log("GetAllEnemiesInRoom task was cancelled.");
//            }
//        }
//        else
//        {
//            Debug.LogError("Polygon collider not assigned!");
//        }

//    }


//    private async UniTask SpawnEnemyWaves(int waveIndex) //Spawn the enemies
//    {
//        if (waveIndex > waveInfoList.Length - 1) { return; }

//        WaveSystem waveInfo = waveInfoList[waveIndex];


//        int desiredToSpawn = waveInfo.spawnCount; //Max enemy to spawn
//                                                       //int remainingToSpawn = desiredToSpawn - spawnedCount;


//        do
//        {
//            int toSpawn = desiredToSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : desiredToSpawn; //Calcaulate 

//            for (int i = 0; i < toSpawn; i++)
//            {
//                Vector2 randomPosition = await ThesisUtility.RandomGetVector2InCollider2DArea(roomAreaCollider, 0.3f, cannotSpawn);

//                //GameObject selectedEnemy = ObjectPooling.Instance.GetObjectInPool("enemy", waveInfo.enemyArray.RandomGetObject(), Vector3.zero);
//                GameObject selectedEnemy = ObjectPoolingManager.Instance.GetItemFromPool(waveInfo.enemies.RandomGetObject());
//                selectedEnemy.GetComponent<Entities>()?.GetEntityStats.ResetCurrentStats();
//                selectedEnemy.transform.position = randomPosition;
//                selectedEnemy.SetActive(true);

//                desiredToSpawn--;

//                battleUI?.UpdateEnemyRemain(desiredToSpawn);
//                var randomCalc = ThesisUtility.RandomGetFloat(1f, 1.5f);
//                await UniTask.Delay(TimeSpan.FromSeconds(randomCalc));
//            }

//            await UniTask.WaitUntil(() => totalEnemyInRoom <= 1); //Wait until the remaining enemy become 1
//        } while (desiredToSpawn > 0);

//    }
//    private async UniTask ExecuteWaves() //Execute the wave list
//    {
//        if (waveInfoList.Length == 0) { return; }

//        for (int i = 0; i < waveInfoList.Length; i++)
//        {
//            battleUI?.UpdateWaveInfo(i + 1, waveInfoList.Length);

//            await SpawnEnemyWaves(i); //Wait to finish the spawn

//            await UniTask.WaitUntil(() => totalEnemyInRoom == 0); //Wait until the total enemy become 0

//        }

//        await UniTask.Delay(ThesisUtility.RandomGetAmount(1000, 1700)); //From 1sec to 1.7sec

//        Debug.Log("BATTLE WAVE IS COMPLETED");
//        OnFinishWaveBattle?.Invoke();

//    }


//    private async UniTaskVoid TriggerBattleStart()
//    {
//        if (onPendingBattle) { return; }
//        onPendingBattle = true;

//        var timer = 0f;

//        timer = ThesisUtility.RandomGetFloat(1.5f, 2f);
//        await UniTask.Delay(TimeSpan.FromSeconds(timer));

//        if (!roomArea.isPlayerInsideRoom)
//        {
//            onPendingBattle = false;
//            return;
//        }

//        BattleStarted();

//        timer = ThesisUtility.RandomGetFloat(1.2f, 1.7f);
//        await UniTask.Delay(TimeSpan.FromSeconds(timer));


//        //Start the battle
//        await ExecuteWaves(); //Wait to finish


//        await UniTask.Delay(1500);
//        await UniTask.WaitUntil(() => totalEnemyInRoom == 0); //Wait until the total enemy become 0
//        BattleEnded();
//    }



















































//}
