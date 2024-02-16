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
    public void SaveChapterScene()
    {
        ES3.Save("room_trigger", SaveRoomAreaInScene(), filePath: GetIdentifier());
        ES3.Save("timeline_trigger", SaveTriggerTimelineInScene(), filePath: GetIdentifier());
    }
    public void LoadChapterScene()
    {
        LoadRoomAreaInScene();
        LoadTriggerTimelineInScene();
    }
    public void GetLatestSavedScene(out PlayerSceneSaveData playerSavedScene)
    {
        playerSavedScene = LoadPlayerScene(GetCurrentFolderName());
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
    public void SavePlayerScene(Vector3 spawnPosition) //Saving the player in this chapter level
    {
        var playerData = new PlayerSceneSaveData()
        {
            sceneName = GetCurrentSceneName(),
            spawnPosition = spawnPosition
        };

        ES3.Save(sceneKeyNamePD, playerData, filePath: GetIdentifier(sceneFileNamePD)); //Save the player

        SaveChapterScene(); //Save the changes in the scene
    }
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
    private List<RoomArea> FindAllRoomAreaInScene() //Find all room area in the scene
    {
        IEnumerable<RoomArea> roomAreas = FindObjectsOfType<RoomArea>();
        return new List<RoomArea>(roomAreas);
    }

    private List<RoomBattleSaveData> SaveRoomAreaInScene()
    {
        List<RoomBattleSaveData> saveRoomArea = new List<RoomBattleSaveData>();

        foreach (var item in FindAllRoomAreaInScene())
        {
            //saveRoomArea.Add(new RoomBattleSaveData(item.GetBattleTrigger));

            RoomBattleSaveData data = new RoomBattleSaveData()
            {
                roomId = item.GetBattleTrigger.GetInstanceID(),
                desiredBattleNextEnter = item.GetBattleTrigger.GetNextDesiredBattleTrigger,
                isAlreadyTrigger = item.GetBattleTrigger.IsAlreadyTriggerArea
            };

            saveRoomArea.Add(data);
        }

        return saveRoomArea;
        //ES3.Save<List<RoomBattleSaveData>>(GetKeyName(), saveRoomArea, filePath: GetFilePath());
        //Debug.Log("SAVING BATTLE AREA");
    }
    private void LoadRoomAreaInScene()
    {
        if (IsKeyExist("room_trigger"))
        {
            List<RoomBattleSaveData> roomAreaData = ES3.Load<List<RoomBattleSaveData>>("room_trigger", filePath: GetIdentifier());

            //var loadedData = ES3.Load<List<RoomBattleSaveData>>(GetKeyName(), defaultValue: new List<RoomBattleSaveData>(), filePath: GetFilePath());

            if (roomAreaData != null)
            {
                //List<RoomBattleSaveData> roomDatas = roomAreaData.roomBattleSaveDatas;

                foreach (RoomArea room in FindAllRoomAreaInScene())
                {
                    //RoomBattleSaveData data = loadedData.FirstOrDefault(x => x.roomId == room.GetInstanceID()); //Find the object with the same ID
                    //RoomBattleSaveData data = roomAreaData.FirstOrDefault(x => x.roomId == room.GetBattleTrigger.GetInstanceID());
                    RoomBattleSaveData roomData = roomAreaData.FirstOrDefault(x => x.roomId == room.GetBattleTrigger.GetInstanceID());
                    if (roomData != null)
                    {
                        //Loaded the data
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
    }
    #endregion

    #region SAVE/LOAD TIMELINE CUTSCENES
    //Chapter scene saving
    private List<TriggerTimeLine> FindAllTriggerTimelineInScene() //Find all the trigger timeline in the scene
    {
        IEnumerable<TriggerTimeLine> triggerTimeLines = FindObjectsOfType<TriggerTimeLine>();
        return new List<TriggerTimeLine>(triggerTimeLines);
    }
    private List<TimelineCutscenesSaveData> SaveTriggerTimelineInScene()
    {
        List<TimelineCutscenesSaveData> saveCutscenes = new List<TimelineCutscenesSaveData>();

        foreach (TriggerTimeLine item in FindAllTriggerTimelineInScene())
        {
            TimelineCutscenesSaveData data = new TimelineCutscenesSaveData()
            {
                id = item.GetInstanceID(),
                isAlreadyTrigger = item.IsTimelinePlayOnce
            };

            saveCutscenes.Add(data);
        }

        return saveCutscenes;
    }
    private void LoadTriggerTimelineInScene()
    {
        if (IsKeyExist("timeline_trigger"))
        {
            List<TimelineCutscenesSaveData> sceneData = ES3.Load<List<TimelineCutscenesSaveData>>("timeline_trigger", filePath: GetIdentifier()); //Get the scene load

            if (sceneData != null)
            {
                //List<TimelineCutscenesSaveData> timelineDatas = sceneData.timelineCutscenesSaveDatas; //load the list of the timeline triggers from file

                foreach (var item in FindAllTriggerTimelineInScene())
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
    }


    #endregion

    //TODO: SAVE/LOAD FOR OBJECTS IN THE SCENE

    #endregion



    #region CLOUD SAVING
    public void SavePlayerDataCloud() //Save player data in cloud
    {
        var jsonPlayerData = ES3.LoadRawString(filePath: PLAYER_DATA_FILE);

        PlayfabManager.Instance.SetCloudUserData(PLAYER_DATA_KEY, jsonPlayerData);
    }
    public void RequestRetrievePlayerData() //Request for retrieving data in cloud
    {
        PlayfabManager.Instance.GetCloudUserData(PLAYER_DATA_KEY, (key, value) =>
        {
            Debug.Log($"SUCCESS RETRIEVE: KEY: {key}");
            ES3.SaveRaw(value, PLAYER_DATA_FILE);
        });
    }
    public void LoadPlayerDataCloud()
    {
        Debug.Log("LOAD DATA CALL");
        //PlayfabManager.Instance.LoadDataFromPlayfab(PLAYER_DATA_KEY, OnUserDataLoaded);
        PlayfabManager.Instance.GetCloudUserData(PLAYER_DATA_KEY, (key, value) => 
        {
            Debug.Log($"SUCCESS RETRIEVE: KEY: {key}");
            ES3.SaveRaw(value, "TESTINGCLOUDLOAD.thesis");
        });

    }

    private void OnUserDataLoaded(GetUserDataResult dataResult)
    {
        Debug.Log("LOADED DATA");
        if (dataResult != null && dataResult.Data.ContainsKey(PLAYER_DATA_KEY))
        {
            Debug.LogError("THERE ARE RESULT IN THE CLOUD");

            var resultValue = dataResult.Data["PLAYER_DATA_KEY"].Value;

            ES3.SaveRaw(resultValue, "TESTINGCLOUDLOAD.thesis");
            
        }
        else
        {
            Debug.LogError("THERE ARE NO RESULT");
            return;
        }
    }



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
