using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;
using System;
using System.Linq;
using UnityEditor;
using Newtonsoft.Json;
using PlayFab.ClientModels;
using Cysharp.Threading.Tasks;

public class SaveGameDataManager : Singleton<SaveGameDataManager>
{
    //For player data (stats, collections, unlockables)
    const string PLAYER_DATA_FILE = "PlayerData.thesis";
    const string PLAYER_DATA_KEY = "player_key";

    //For player scene status (position, scene name)
    const string sceneFileNamePD = "PlayerSceneData";
    const string sceneKeyNamePD = "player_scene_data";

    //For saving scene data
    const string SCENE_FILE_PATH = "Scene_Path/";



    //protected override void Awake()
    //{
    //    base.Awake();
    //    PlayfabManager.Instance.LoginOnStart();

    //}
    //private void OnEnable()
    //{
    //    LoadPlayerDataCloud();
    //}
    //private void Start()
    //{
    //    //TESTING PURPOSES
    //    ES3.Save(PLAYER_DATA_KEY, SavePlayerData(), PLAYER_DATA_FILE);
    //    SavePlayerDataCloud();
    //    //ES3.Save("player_stats", PlayerSingleton.Instance.GetPlayerScript.GetEntityStats, "PlayerData.thesis");
    //    //ES3.Save("player", SavePlayerData(), "TESTDATA.thesis");
    //}
    //private void OnApplicationQuit()
    //{
    //    //ES3.Save(PLAYER_DATA_KEY, SavePlayerData(), PLAYER_DATA_FILE);
    //    //SavePlayerDataCloud();
    //}

    #region LOCAL SAVING
    public async UniTaskVoid SaveChapterScene()
    {
        var saveRoomArea = await SaveRoomAreaInScene();
        var saveTriggerTimeline = await SaveTriggerTimelineInScene();

        ES3.Save("room_trigger", saveRoomArea, filePath: GetIdentifier());
        ES3.Save("timeline_trigger", saveTriggerTimeline, filePath: GetIdentifier());
    }
    public async void LoadChapterScene()
    {
        await LoadRoomAreaInScene();
        await LoadTriggerTimelineInScene();
    }
    public PlayerSceneSaveData GetLatestSavedScene()
    {
        return LoadPlayerScene(GetCurrentFolderName());
    }

    #region Save/Load Player Data (Statistics)
    public async UniTask SavePlayerData()
    {
        Entities player = PlayerSingleton.Instance.GetPlayerScript;
        PlayerData playerData = new PlayerData
        {
            playerStats = player.GetEntityStats,

            artifactsCollected = GameManager.Instance.GetListOfCollectedArtifacts,
            abilitiesCollected = GameManager.Instance.GetListOfCollectedAbility,
            unlockedChapters = GameManager.Instance.GetDictUnlockedChapters,

            chapterScores = GameManager.Instance.GetDictEachChapterScores,
            usedCurrentAbilities = player.GetAbility_Controller.ListOfCurrentAbilities
        };

        await UniTask.RunOnThreadPool(() => ES3.Save(PLAYER_DATA_KEY, playerData, filePath: PLAYER_DATA_FILE));

    }
    public PlayerData LoadPlayerData()
    {
        if (ES3.FileExists(PLAYER_DATA_FILE))
        {
            //There's a player data
            
            Debug.Log("THERE'S A FILE OF PLAYER DATA");
            return ES3.Load<PlayerData>(PLAYER_DATA_KEY, filePath: PLAYER_DATA_FILE);
        }
        else
        {
            //There are no player data
            Debug.LogError("THERE'S NO FILE OF PLAYER DATA FOUND");
            return null;
        }
    }
    #endregion


    #region SAVE/LOAD PLAYER IN CHAPTER (Like Position, Kung nasan yung last ni player na scene)
    public async UniTaskVoid SavePlayerScene(Vector3 spawnPosition)
    {
        var playerData = new PlayerSceneSaveData()
        {
            sceneName = GetCurrentSceneName(),
            spawnPosition = spawnPosition
        };

        ES3.Save(sceneKeyNamePD, playerData, filePath: GetIdentifier(sceneFileNamePD));

        await UniTask.Delay(1000);
    }

    //public void SavePlayerScene(Vector3 spawnPosition) //Saving the player in this chapter level
    //{
    //    var playerData = new PlayerSceneSaveData()
    //    {
    //        sceneName = GetCurrentSceneName(),
    //        spawnPosition = spawnPosition
    //    };

    //    ES3.Save(sceneKeyNamePD, playerData, filePath: GetIdentifier(sceneFileNamePD)); //Save the player

    //    SaveChapterScene(); //Save the changes in the scene
    //}
    public PlayerSceneSaveData LoadPlayerScene(string folderName) //Load the player in chapter scene
    {
        var filePlayerPathData = string.Format("{0}/{1}.thesis", folderName, sceneFileNamePD);

        Debug.Log("WORKING: " + filePlayerPathData);

        if (ES3.FileExists(filePlayerPathData))
        {
            //There are a file of the player
            if(ES3.KeyExists(sceneKeyNamePD, filePath: filePlayerPathData))
            {
                return ES3.Load<PlayerSceneSaveData>(sceneKeyNamePD, filePath: filePlayerPathData);
            }
            else
            {
                Debug.LogError("THERE ARE NO KEY IN THE FILE");
                return null;
            }
        }
        else
        {
            //There no file of the player in this chapter
            Debug.LogWarning("THERE ARE NO FILE OF PLAYER IN THIS CHAPTER");
            return null;
        }
    }


    #endregion

    #region SAVE/LOAD BATTLE TRIGGER IN THE SCENE
    //To Save the battle trigger in the scene
    private List<RoomArea> FindAllRoomAreaInScene()
    {
        RoomArea[] roomAreas = FindObjectsOfType<RoomArea>();
        return new List<RoomArea>(roomAreas);
    }

    private async UniTask<List<RoomBattleSaveData>> SaveRoomAreaInScene()
    {
        var saveRoomArea = new List<RoomBattleSaveData>();
        var roomAreas = FindAllRoomAreaInScene();

        foreach (var room in roomAreas)
        {
            RoomBattleSaveData data = new RoomBattleSaveData()
            {
                roomId = room.GetBattleTrigger.GetInstanceID(),
                desiredBattleNextEnter = room.GetBattleTrigger.GetNextDesiredBattleTrigger,
                isAlreadyTrigger = room.GetBattleTrigger.IsAlreadyTriggerArea
            };

            saveRoomArea.Add(data);
        }

        await UniTask.Yield();

        return saveRoomArea;
    }
    private async UniTask LoadRoomAreaInScene()
    {
        if (IsKeyExist("room_trigger"))
        {
            var roomAreaData = ES3.Load<List<RoomBattleSaveData>>("room_trigger", filePath: GetIdentifier());

            if (roomAreaData != null)
            {
                var roomAreas = FindAllRoomAreaInScene();

                foreach (var room in roomAreas)
                {
                    var roomData = roomAreaData.FirstOrDefault(x => x.roomId == room.GetBattleTrigger.GetInstanceID());
                    if (roomData != null)
                    {
                        Debug.Log($"ID: {room.GetInstanceID()} || {roomData.isAlreadyTrigger}");
                        room.GetBattleTrigger.IsAlreadyTriggerArea = roomData.isAlreadyTrigger;
                        room.GetBattleTrigger.GetNextDesiredBattleTrigger = roomData.desiredBattleNextEnter;
                    }
                    else
                    {
                        Debug.LogWarning($"THERE ARE NO BATTLE TRIGGER WITH ID {roomData.roomId} IN {room.gameObject.name}");
                    }
                }
            }
        }

        await UniTask.Yield();

    }
    #endregion

    #region SAVE/LOAD TIMELINE CUTSCENES
    //Chapter scene saving
    private List<TriggerTimeLine> FindAllTriggerTimelineInScene() //Find all the trigger timeline in the scene
    {
        TriggerTimeLine[] triggerTimeLines = FindObjectsOfType<TriggerTimeLine>();
        return new List<TriggerTimeLine>(triggerTimeLines);
    }
    private async UniTask<List<TimelineCutscenesSaveData>> SaveTriggerTimelineInScene()
    {
        List<TimelineCutscenesSaveData> saveCutscenes = new List<TimelineCutscenesSaveData>();
        var triggerTimelines = FindAllTriggerTimelineInScene();

        foreach (TriggerTimeLine item in triggerTimelines)
        {
            TimelineCutscenesSaveData data = new TimelineCutscenesSaveData()
            {
                id = item.GetInstanceID(),
                isAlreadyTrigger = item.IsTimelinePlayOnce
            };

            saveCutscenes.Add(data);
        }

        await UniTask.Yield();
        return saveCutscenes;
    }
    private async UniTask LoadTriggerTimelineInScene()
    {
        if (IsKeyExist("timeline_trigger"))
        {
            List<TimelineCutscenesSaveData> sceneData = ES3.Load<List<TimelineCutscenesSaveData>>("timeline_trigger", filePath: GetIdentifier()); //Get the scene load

            if (sceneData != null)
            {
                //List<TimelineCutscenesSaveData> timelineDatas = sceneData.timelineCutscenesSaveDatas; //load the list of the timeline triggers from file
                var triggerTimelines = FindAllTriggerTimelineInScene();

                foreach (var item in triggerTimelines)
                {
                    TimelineCutscenesSaveData data = sceneData.FirstOrDefault(x => x.id == item.GetInstanceID()); //Find the timeline with the same instance id

                    if (data != null)
                    {
                        item.IsTimelinePlayOnce = data.isAlreadyTrigger;
                    }
                    else
                    {
                        Debug.LogError($"THERE ARE NO {item.GetInstanceID()} ID SAVED IN THE FILE");
                    }
                }
            }
        }

        await UniTask.Yield();
    }


    #endregion

    //TODO: SAVE/LOAD FOR OBJECTS IN THE SCENE

    #endregion











    private bool IsKeyExist(string findKey, string overrideFile = "") //To check if this scene is already saved
    {
        if (string.IsNullOrEmpty(overrideFile))
        {
            return ES3.KeyExists(findKey, filePath: GetIdentifier());
        }
        else
        {
            return ES3.KeyExists(findKey, filePath: GetIdentifier(overrideFile));

        }
    }
    private string GetIdentifier(string overrideFileName = "") 
    {
        if (string.IsNullOrEmpty(overrideFileName))
        {
            // path: FolderName/SceneName.thesis
            return string.Format("{0}/{1}.thesis", GetCurrentFolderName(), GetCurrentSceneName());
        }
        else
        {
            return string.Format("{0}/{1}.thesis", GetCurrentFolderName(), overrideFileName);
        }
        
    }

    private string GetCurrentFolderName() //Get the file name
    {
        // Get the full path of the current scene
        string scenePath = SceneManager.GetActiveScene().path;

        // Get the directory (folder) name from the path
        string folderName = Path.GetDirectoryName(scenePath);

        // Extract just the folder name without the path
        string folderNameOnly = Path.GetFileName(folderName);

        return folderNameOnly;
    }
    private string GetCurrentSceneName() //Get the key
    {
        return SceneManager.GetActiveScene().name;
    }


}
