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
    private ES3Settings SaveLoadSettings()
    {
        return new ES3Settings()
        {
            encryptionPassword = "thesis200",
            encryptionType = ES3.EncryptionType.None //TEMPORARY
        };
    }

    #region LOCAL SAVING

    public PlayerSceneSaveData GetLatestSavedScene()
    {
        return LoadPlayerScene(GetCurrentFolderName());
    }

    #region Save/Load Player Data (Statistics)
    public async UniTask SavePlayerStatsData()
    {
        Entities player = PlayerSingleton.Instance.GetPlayerScript;

        PlayerData playerData = new PlayerData
        {
            playerStats = player.GetEntityStats,

            //artifactsCollected = GameManager.Instance.GetListOfCollectedArtifacts,
            artifactsCollected_ID = GameManager.Instance.GetListOfCollectedArtifactsStringID,
            abilitiesCollected = GetListOfCollectedAbility_ID(),
            unlockedChapters = GameManager.Instance.GetDictUnlockedChapters,

            chapterScores = GameManager.Instance.GetDictEachChapterScores,
            usedCurrentAbilities = GetListOfUsedAbility_ID()
        };


        ES3.Save(PLAYER_DATA_KEY, playerData, filePath: PLAYER_DATA_FILE);

        await UniTask.Yield();
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
            Debug.LogError("THERE'S NO FILE OF PLAYER DATA");
            return null;
        }
    }
    #endregion


    #region Get Player Data (Abilities Collected)
    private List<string> GetListOfCollectedAbility_ID()
    {
        List<string> newList = new List<string>();
        var collectedAbilities = GameManager.Instance.GetListOfCollectedAbility;

        foreach (var ability in collectedAbilities)
        {
            if(ability == null) { continue; }
            newList.Add(ability.GetInstanceID().ToString());
        }

        return newList;
    }
    #endregion

    #region Get Player Data (Used Abilities)
    private List<string> GetListOfUsedAbility_ID()
    {
        List<string> newList = new List<string>();
        var usedAbilities = PlayerSingleton.Instance.GetPlayerScript?.GetAbility_Controller.ListOfCurrentAbilities;

        if(usedAbilities == null) { return null; }

        foreach (var ability in usedAbilities)
        {
            if (ability == null) { continue; }
            newList.Add(ability.GetInstanceID().ToString());
        }

        return newList;
    }
    #endregion

    #endregion




    #region SCENE SAVE/LOAD DATA

    public async UniTaskVoid SaveChapterScene()
    {
        await SavePlayerStatsData(); //Save the player stats
        await SaveTriggerTimelineInScene(); //Save the timeline
        await SaveRoomAreaInScene(); //Save the room area
        await SaveChestInScene(); //Save the chest
    }


    #region SAVE/LOAD PLAYER IN CHAPTER (Like Position, Kung nasan yung last ni player na scene)
    public async UniTaskVoid SavePlayerScene(Vector3 spawnPosition)
    {
        var playerData = new PlayerSceneSaveData()
        {
            sceneName = GetCurrentSceneName(),
            spawnPosition = spawnPosition
        };

        ES3.Save(sceneKeyNamePD, playerData, filePath: GetIdentifier(sceneFileNamePD));

        await UniTask.Delay(150);
    }
    public PlayerSceneSaveData LoadPlayerScene(string folderName) //Load the player in chapter scene
    {
        var filePlayerPathData = string.Format("{0}/{1}.thesis", folderName, sceneFileNamePD);

        Debug.Log("WORKING: " + filePlayerPathData);

        if (ES3.FileExists(filePlayerPathData))
        {
            //There are a file of the player
            if (ES3.KeyExists(sceneKeyNamePD, filePath: filePlayerPathData))
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
    private async UniTask SaveRoomAreaInScene()
    {
        var saveRoomArea = new List<RoomBattleSaveData>();

        if (FindAllRoomAreaInScene() == null || FindAllRoomAreaInScene().Count == 0) { return; }

        foreach (var room in FindAllRoomAreaInScene())
        {
            if(room.GetBattleTrigger == null) { continue; }

            RoomBattleSaveData data = new RoomBattleSaveData()
            {
                //roomId = room.GetBattleTrigger.GetInstanceID(),
                idName = room.gameObject.name,
                desiredBattleNextEnter = room.GetBattleTrigger.GetNextDesiredBattleTrigger,
                isAlreadyTrigger = room.GetBattleTrigger.IsAlreadyTriggerArea
            };

            saveRoomArea.Add(data);
        }


        ES3.Save("room_trigger", saveRoomArea, filePath: GetIdentifier());
        await UniTask.Yield();
    }
    public List<RoomBattleSaveData> LoadRoomAreaInScene()
    {
        if (IsKeyExist("room_trigger"))
        {
            var roomAreaData = ES3.Load<List<RoomBattleSaveData>>("room_trigger", filePath: GetIdentifier());

            if (roomAreaData != null)
            {
                return new List<RoomBattleSaveData>(roomAreaData);
            }
        }

        return null;
    }
    #endregion

    #region SAVE/LOAD TIMELINE CUTSCENES
    //Chapter scene saving
    private List<TriggerTimeLine> FindAllTriggerTimelineInScene() //Find all the trigger timeline in the scene
    {
        TriggerTimeLine[] triggerTimeLines = FindObjectsOfType<TriggerTimeLine>(true);
        return new List<TriggerTimeLine>(triggerTimeLines);
    }
    private async UniTask SaveTriggerTimelineInScene()
    {
        List<TimelineCutscenesSaveData> saveCutscenes = new List<TimelineCutscenesSaveData>();

        if (FindAllTriggerTimelineInScene() == null || FindAllTriggerTimelineInScene().Count == 0) { return; }

        foreach (TriggerTimeLine item in FindAllTriggerTimelineInScene())
        {

            TimelineCutscenesSaveData data = new TimelineCutscenesSaveData()
            {
                //id = item.GetInstanceID(),
                stringId = item.gameObject.name,
                isAlreadyTrigger = item.IsTimelinePlayOnce
            };

            saveCutscenes.Add(data);
        }

        ES3.Save("timeline_trigger", saveCutscenes, filePath: GetIdentifier());
        await UniTask.Yield();
    }
    public async UniTask< List<TimelineCutscenesSaveData> >LoadTriggerTimelineInScene()
    {
        if (IsKeyExist("timeline_trigger"))
        {
            var identified = GetIdentifier();
            List<TimelineCutscenesSaveData> sceneData = await UniTask.RunOnThreadPool(() => ES3.Load<List<TimelineCutscenesSaveData>>("timeline_trigger", filePath: identified)); //Get the scene load

            if (sceneData != null)
            {
                return new List<TimelineCutscenesSaveData>(sceneData);
            }
        }
        return null;
    }
    //public List<TimelineCutscenesSaveData> LoadTriggerTimelineInScene()
    //{
    //    if (IsKeyExist("timeline_trigger"))
    //    {
    //        List<TimelineCutscenesSaveData> sceneData = ES3.Load<List<TimelineCutscenesSaveData>>("timeline_trigger", filePath: GetIdentifier()); //Get the scene load

    //        if (sceneData != null)
    //        {
    //            return new List<TimelineCutscenesSaveData>(sceneData);
    //        }
    //    }
    //    return null;
    //}

    #endregion

    #region SAVE/LOAD CHEST IN THE SCENE

    private List<ChestScript> FindAllChestInScene()
    {
        ChestScript[] chests = FindObjectsOfType<ChestScript>();
        return new List<ChestScript>(chests);
    }
    private async UniTask SaveChestInScene()
    {
        List<ChestSaveData> savedData = new List<ChestSaveData>();

        if(FindAllChestInScene() == null || FindAllChestInScene().Count == 0) { return; }

        foreach (ChestScript chest in FindAllChestInScene())
        {
            ChestSaveData data = new ChestSaveData
            {
                id = chest.GetInstanceID(),
                isActiveInScene = chest.GetChestVisual.gameObject.activeInHierarchy,
                isChestOpened = chest.IsChestOpened
            };

            savedData.Add(data);
        }

        ES3.Save("chests", savedData, filePath: GetIdentifier());
        await UniTask.Yield();
    }
    public List<ChestSaveData> LoadChestInScene()
    {
        if (IsKeyExist("chests"))
        {
            List<ChestSaveData> chestData = ES3.Load<List<ChestSaveData>>("chests", filePath: GetIdentifier());

            if (chestData != null)
            {
                return new List<ChestSaveData>(chestData);
            }
        }
        return null;
    }
    #endregion



    //TODO: SAVE/LOAD FOR OBJECTS IN THE SCENE


    #endregion










    private bool IsKeyExist(string findKey, string overrideFile = "") //To check if this scene is already saved
    {
        if (!ES3.FileExists(GetIdentifier()))
        {
            Debug.LogWarning($"THERE ARE NO SAVED FILE FOR {GetIdentifier()} YET");
            return false;
        }

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

    public string GetCurrentFolderName() //Get the file name
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
