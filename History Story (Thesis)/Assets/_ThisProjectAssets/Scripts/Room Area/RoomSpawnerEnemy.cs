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
    [SerializeField] private bool alwaysTriggerBattle = false;
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

    //private bool onPendingBattle = false;
    private bool randomDesiredTimer = false;

    private bool desiredToBattleInRoom = false; //To be saved
    private bool isAlreadyTrigger = false; //To be saved

    private bool doneInitializeTrigger = false;

    private Transform[] positionList;
    //private List<Transform> enemyDetected;


    public bool GetNextDesiredBattleTrigger { get { return desiredToBattleInRoom; } set { desiredToBattleInRoom = value; } }
    public bool IsAlreadyTriggerArea { get { return isAlreadyTrigger; } set { isAlreadyTrigger = value; } }





    private void Awake()
    {
        roomArea = GetComponentInParent<RoomArea>();

        roomAreaCollider = roomArea.GetComponent<PolygonCollider2D>();

        positionList = transform.GetChild(0)?.GetComponentsInChildren<Transform>().Skip(1).ToArray();

        

        BarriersToggler(false);
        AstarPath.active.Scan();
    }



    private void OnEnable()
    {
        RetriveData();

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
        doneInitializeTrigger = true;
    }

    private void RetriveData()
    {
        var loadedData = SaveGameDataManager.Instance?.LoadRoomAreaInScene();

        if (loadedData != null)
        {
            //var data = loadedData.FirstOrDefault(x => x.roomId == GetInstanceID());
            var data = loadedData.FirstOrDefault(x => x.idName == roomArea.gameObject.name);

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
            //enemyDetected = new List<Transform>();

            //StartRoomScannerEnemies().Forget();

            if (battleMode == BattleStartState.OnEnterRoom)
                StartWaveBattle();
        }
        catch (OperationCanceledException)
        {
            //enemyDetected = new List<Transform>();
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
    //private async UniTaskVoid StartRoomScannerEnemies()
    //{
    //    List<Collider2D> colliderList;


    //    if (roomAreaCollider != null)
    //    {
    //        try
    //        {
    //            while (!cancelBattleTrigger.Token.IsCancellationRequested)
    //            {

    //                colliderList = new List<Collider2D>(); // Initialize inside the loop to clear it in each iteration

    //                ContactFilter2D contactFilter = new ContactFilter2D();
    //                contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Set the layer mask to include only the "Enemy" layer

    //                roomAreaCollider.OverlapCollider(contactFilter, colliderList);

    //                // Extract the transforms from the colliders
    //                enemyDetected = colliderList.Select(collider => collider.transform).ToList();


    //                await UniTask.Yield();
    //            }

    //        }
    //        catch (OperationCanceledException)
    //        {
    //            Debug.Log("Scanning enemies in the room task was cancelled.");
    //        }
    //        catch (ObjectDisposedException)
    //        {
    //            Debug.Log("Scanning enemies in the room task was cancelled.");
    //            colliderList = new List<Collider2D>();
    //        }


    //    }
    //    else
    //    {
    //        Debug.LogError("Polygon collider not assigned!");
    //    }

    //}
    private void BarriersToggler(bool toggle)
    {
        if (listOfBarriers.Count == 0) { return; }

        foreach (var barrier in listOfBarriers)
        {
            barrier.SetActive(toggle);
        }

        if (doneInitializeTrigger)
            _ = UpdateGraphNode();
    }
    private async UniTask UpdateGraphNode()
    {
        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; // Set the bound


        AstarPath.active.AddWorkItem(() =>
        {
            // Safe to update graphs here
            var guo = new GraphUpdateObject(bounds);

            AstarPath.active.UpdateGraphs(guo, 0.3f); // Update the graphs
        });

        await UniTask.Yield(); // Yield back to the main thread
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

    }
    private async void BattleEnded()
    {
        try
        {
            //await UniTask.WaitUntil(() => enemyDetected.Count == 0, cancellationToken: cancelBattleTrigger.Token);
            await UniTask.WaitUntil(() => roomArea.GetTargetDetectedList.Count == 0, cancellationToken: cancelBattleTrigger.Token);

            await UniTask.Delay(TimeSpan.FromSeconds(ThesisUtility.RandomGetFloat(1.7f, 2.5f)), cancellationToken: cancelBattleTrigger.Token);
        }
        finally
        {
            BarriersToggler(false);

            OnEndedBattleTrigger?.Invoke();
            SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Default).Forget();

            if (showBattleInfoUI)
                battleUI?.ToggleWaveInfo(false);



            roomArea.IsBattlePending = false;
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

                await UniTask.WaitUntil(() => roomArea.GetTargetDetectedList.Count == 0, PlayerLoopTiming.LastUpdate, cancelBattleTrigger.Token); //Wait until the wave clear

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

                await UniTask.WaitUntil(() => roomArea.GetTargetDetectedList.Count <= 1, PlayerLoopTiming.LastUpdate, cancelBattleTrigger.Token); //Wait until the remaining enemy become 1
            } while (desiredToSpawn > 0 && !cancelBattleTrigger.Token.IsCancellationRequested);


        }
        catch
        {

        }

    }




    public async void StartWaveBattle()
    {
        if (!alwaysTriggerBattle)
            if (isAlreadyTrigger && !(chanceToBattle && desiredToBattleInRoom)) { return; }

        if (roomArea.IsBattlePending) { return; }
        roomArea.IsBattlePending = true;

        var timer = 0f;

        timer = ThesisUtility.RandomGetFloat(1.5f, 2f);
        await UniTask.Delay(TimeSpan.FromSeconds(timer));

        if (!roomArea.isPlayerInsideRoom)
        {
            roomArea.IsBattlePending = false;
            return;
        }

        //StartRoomScannerEnemies().Forget();
        roomArea.StartRoomScannerEnemies().Forget();

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
            //if (!isAlreadyTrigger || (chanceToBattle && desiredToBattleInRoom))
            //{
            //    BarriersToggler(true);
            //}

            StartWaveBattle();
        }
    }


















































}
//public class RoomSpawnerEnemy : MonoBehaviour
//{
//    [System.Serializable]
//    private class WaveSystem
//    {
//        public int maxSpawnCount = 5;
//        public ObjectPoolerInfo[] enemyTypes;
//    }
//    [System.Serializable]
//    private class WaveEventsTrigger
//    {
//        public int waveIndex = 0;
//        public UnityEvent waveStart;
//        public UnityEvent waveEnd;
//    }


//    private enum BattleStartState { None, Idle, OnEnterRoom, OnTrigger }

//    private PolygonCollider2D roomAreaCollider;
//    private RoomArea roomArea;
//    BattleSystemUI battleUI;


//    [SerializeField] private BattleStartState battleMode = BattleStartState.Idle;
//    [SerializeField] private bool alwaysTriggerBattle = false;
//    [SerializeField] private bool chanceToBattle = false;
//    [SerializeField] private bool showBattleInfoUI = true;


//    [Space(15)]
//    [SerializeField] private List<GameObject> listOfBarriers = new List<GameObject>();

//    [Space(25)]
//    [Header("Wave System")]
//    [SerializeField] private LayerMask cannotSpawn;
//    [SerializeField] private int maxEnemySpawnInRoom = 5;

//    [Space(15)]
//    [SerializeField] private WaveSystem[] waveInfoList;
//    [SerializeField] private WaveEventsTrigger[] waveTriggerSystem;

//    [Space(50)]
//    public UnityEvent OnStartBattleTrigger; //When the battle started
//    public UnityEvent OnEndedBattleTrigger; //When the battle finish


//    private CancellationTokenSource cancelBattleTrigger;

//    private bool onPendingBattle = false;
//    private bool randomDesiredTimer = false;
//    private bool desiredToBattleInRoom = false;
//    private bool isAlreadyTrigger = false;

//    private bool doneInitializeTrigger = false;

//    private Transform[] positionList;
//    private List<Transform> enemyDetected;


//    public bool GetNextDesiredBattleTrigger { get { return desiredToBattleInRoom; } set { desiredToBattleInRoom = value; } }
//    public bool IsAlreadyTriggerArea { get { return isAlreadyTrigger; } set { isAlreadyTrigger = value; } }





//    private void Awake()
//    {
//        roomArea = GetComponentInParent<RoomArea>();
//        roomAreaCollider = roomArea.GetComponent<PolygonCollider2D>();

//        positionList = transform.GetChild(0)?.GetComponentsInChildren<Transform>().Skip(1).ToArray();

//        RetriveData();

//        BarriersToggler(false);
//        AstarPath.active.Scan();
//    }



//    private void OnEnable()
//    {
//        roomArea.OnPlayerEnterRoom.AddListener(PlayerEnterRoom);
//        roomArea.OnPlayerExitRoom.AddListener(PlayerExitRoom);
//    }
//    private void OnDisable()
//    {
//        roomArea.OnPlayerEnterRoom.RemoveListener(PlayerEnterRoom);
//        roomArea.OnPlayerExitRoom.RemoveListener(PlayerExitRoom);
//    }
//    private void OnDestroy()
//    {
//        cancelBattleTrigger?.Dispose();
//    }

//    private void Start()
//    {
//        battleUI = BattleSystemUI.Instance;
//        doneInitializeTrigger = true;
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





//    private void PlayerEnterRoom()
//    {
//        if (battleMode == BattleStartState.None) { return; }

//        //Start the scan
//        Debug.Log("PLAYER ENTER THE ROOM");
//        try
//        {
//            cancelBattleTrigger?.Cancel();
//            cancelBattleTrigger = new CancellationTokenSource();
//            enemyDetected = new List<Transform>();

//            //StartRoomScannerEnemies().Forget();

//            if (battleMode == BattleStartState.OnEnterRoom)
//                StartWaveBattle();
//        }
//        catch (OperationCanceledException)
//        {
//            enemyDetected = new List<Transform>();
//        }

//    }
//    private void PlayerExitRoom()
//    {
//        if (battleMode == BattleStartState.None) { return; }

//        CalculateChanceBattle();

//        //stop the scan
//        Debug.Log("PLAYER EXIT THE ROOM");
//        cancelBattleTrigger?.Cancel();
//    }


//    //Start scanning the enemies in the room
//    private async UniTaskVoid StartRoomScannerEnemies()
//    {
//        List<Collider2D> colliderList;


//        if (roomAreaCollider != null)
//        {
//            try
//            {
//                while (!cancelBattleTrigger.Token.IsCancellationRequested)
//                {

//                    colliderList = new List<Collider2D>(); // Initialize inside the loop to clear it in each iteration

//                    ContactFilter2D contactFilter = new ContactFilter2D();
//                    contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Set the layer mask to include only the "Enemy" layer

//                    roomAreaCollider.OverlapCollider(contactFilter, colliderList);

//                    // Extract the transforms from the colliders
//                    enemyDetected = colliderList.Select(collider => collider.transform).ToList();


//                    await UniTask.Yield();
//                }

//            }
//            catch (OperationCanceledException)
//            {
//                Debug.Log("Scanning enemies in the room task was cancelled.");
//            }
//            catch (ObjectDisposedException)
//            {
//                Debug.Log("Scanning enemies in the room task was cancelled.");
//                colliderList = new List<Collider2D>();
//            }


//        }
//        else
//        {
//            Debug.LogError("Polygon collider not assigned!");
//        }

//    }
//    private void BarriersToggler(bool toggle)
//    {
//        if (listOfBarriers.Count == 0) { return; }

//        foreach (var barrier in listOfBarriers)
//        {
//            barrier.SetActive(toggle);
//        }

//        if (doneInitializeTrigger)
//            _ = UpdateGraphNode();
//    }
//    private async UniTask UpdateGraphNode()
//    {
//        //Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; //Set the bound
//        //var guo = new GraphUpdateObject(bounds);

//        //await UniTask.Yield(); // Yield back to the main thread before starting

//        ////await UniTask.WaitForEndOfFrame(this);
//        //AstarPath.active.UpdateGraphs(guo, 0.3f); //Update the node according to bound

//        //await UniTask.Yield();

//        ////////////////////////////////////////////

//        //Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; // Set the bound
//        //var guo = new GraphUpdateObject(bounds);

//        //// Run AstarPath.active.UpdateGraphs in a separate task
//        //await UniTask.RunOnThreadPool(() =>
//        //{
//        //    AstarPath.active.UpdateGraphs(guo, 0.3f); // Update the graphs
//        //});

//        //await UniTask.Yield(); // Yield back to the main thread

//        ///////////////////////////////////////////

//        Bounds bounds = roomArea.GetComponent<PolygonCollider2D>().bounds; // Set the bound


//        AstarPath.active.AddWorkItem(() =>
//        {
//            // Safe to update graphs here
//            var guo = new GraphUpdateObject(bounds);

//            AstarPath.active.UpdateGraphs(guo, 0.3f); // Update the graphs
//        });

//        await UniTask.Yield(); // Yield back to the main thread
//    }


//    private async void CalculateChanceBattle()
//    {
//        if (randomDesiredTimer || battleMode == BattleStartState.None) { return; }

//        try
//        {
//            if (chanceToBattle)
//            {
//                randomDesiredTimer = true;

//                var timer = ThesisUtility.RandomGetAmount(2, 5);
//                await UniTask.Delay(TimeSpan.FromSeconds(timer), cancellationToken: LevelManager.Instance.GetCancellationOnLevel);


//                desiredToBattleInRoom = ThesisUtility.RandomGetChanceBool();

//                randomDesiredTimer = false;
//            }
//        }
//        finally
//        {
//            randomDesiredTimer = false;
//        }

//    }



//    private void BattleStarted()
//    {
//        BarriersToggler(true);

//        OnStartBattleTrigger?.Invoke();
//        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Combat).Forget();

//        if (showBattleInfoUI)
//            battleUI?.ToggleWaveInfo(true);

//    }
//    private async void BattleEnded()
//    {
//        try
//        {
//            await UniTask.WaitUntil(() => enemyDetected.Count == 0, cancellationToken: cancelBattleTrigger.Token);

//            await UniTask.Delay(TimeSpan.FromSeconds(ThesisUtility.RandomGetFloat(1.7f, 2.5f)), cancellationToken: cancelBattleTrigger.Token);
//        }
//        finally
//        {
//            BarriersToggler(false);

//            OnEndedBattleTrigger?.Invoke();
//            SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Default).Forget();

//            if (showBattleInfoUI)
//                battleUI?.ToggleWaveInfo(false);



//            onPendingBattle = false;
//            isAlreadyTrigger = true;
//        }
//    }


//    private WaveEventsTrigger TriggerWaveEvents(int currentWave)
//    {
//        if (waveTriggerSystem.Length == 0)
//        {
//            return null;
//        }

//        var trigger = waveTriggerSystem.FirstOrDefault(wave => wave.waveIndex == currentWave);

//        if (trigger != null)
//        {
//            return trigger;
//        }

//        return null;
//    }

//    //Start the wave
//    private async UniTask Battle_StartWave()
//    {
//        if (waveInfoList.Length == 0)
//        {
//            Debug.LogWarning("WAVE INFO IS EMPTY");
//            return;
//        }

//        try
//        {
//            for (int i = 0; i < waveInfoList.Length; i++)
//            {
//                battleUI?.UpdateWaveInfo(i + 1, waveInfoList.Length);
//                TriggerWaveEvents(i)?.waveStart.Invoke(); //Wave started

//                await SpawnEnemyWave(i); //Wait to finish spawning

//                await UniTask.WaitUntil(() => enemyDetected.Count == 0, PlayerLoopTiming.LastUpdate, cancelBattleTrigger.Token); //Wait until the wave clear

//                TriggerWaveEvents(i)?.waveEnd.Invoke(); //Wave ended
//            }
//        }
//        finally
//        {
//            //Finish battle
//            BattleEnded();
//        }



//    }
//    //Start spawning enemies in wave
//    private async UniTask SpawnEnemyWave(int waveIndex)
//    {
//        try
//        {
//            var waveInfo = waveInfoList[waveIndex];

//            if (waveInfo.enemyTypes.Length == 0)
//            {
//                Debug.LogWarning($"ENEMY TO SPAWN AT WAVE {waveIndex} IS EMPTY IN {transform.root.name}");
//                return;
//            }


//            int desiredToSpawn = waveInfo.maxSpawnCount; //Max enemy to spawn

//            do
//            {
//                int toSpawn = desiredToSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : desiredToSpawn; //Calcaulate 

//                for (int i = 0; i < toSpawn; i++)
//                {
//                    var desiredPosition = positionList.RandomGetObject().position;
//                    var desiredEnemySpawn = ObjectPoolingManager.Instance.GetItemFromPool(waveInfo.enemyTypes.RandomGetObject());

//                    //Debug.LogWarning($"ENEMY: {desiredEnemySpawn.name} || POSITION: {desiredPosition}");

//                    desiredEnemySpawn.GetComponent<Entities>()?.GetEntityStats.ResetCurrentStats();
//                    desiredEnemySpawn.transform.position = desiredPosition;
//                    desiredEnemySpawn.SetActive(true);

//                    desiredToSpawn--;

//                    battleUI?.UpdateEnemyRemain(desiredToSpawn);
//                    var delay = ThesisUtility.RandomGetFloat(1f, 1.5f);
//                    await UniTask.Delay(TimeSpan.FromSeconds(delay), cancellationToken: cancelBattleTrigger.Token);
//                }

//                await UniTask.WaitUntil(() => enemyDetected.Count <= 1, PlayerLoopTiming.LastUpdate, cancelBattleTrigger.Token); //Wait until the remaining enemy become 1
//            } while (desiredToSpawn > 0 && !cancelBattleTrigger.Token.IsCancellationRequested);


//        }
//        catch
//        {

//        }

//    }




//    public async void StartWaveBattle()
//    {
//        if (!alwaysTriggerBattle)
//            if (isAlreadyTrigger && !(chanceToBattle && desiredToBattleInRoom)) { return; }

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

//        StartRoomScannerEnemies().Forget();
//        roomArea.StartRoomScannerEnemies().Forget();

//        await UniTask.Yield();

//        BattleStarted();

//        timer = ThesisUtility.RandomGetFloat(1.2f, 1.7f);
//        await UniTask.Delay(TimeSpan.FromSeconds(timer));


//        //Start the battle
//        await Battle_StartWave(); //Wait to finish

//        await UniTask.Delay(1500);
//        BattleEnded();
//    }





//    private void OnTriggerEnter2D(Collider2D collision)
//    {
//        if (battleMode == BattleStartState.OnTrigger)
//        {
//            //if (!isAlreadyTrigger || (chanceToBattle && desiredToBattleInRoom))
//            //{
//            //    BarriersToggler(true);
//            //}

//            StartWaveBattle();
//        }
//    }


















































//}