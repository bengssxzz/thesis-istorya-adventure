using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;
using System;
using System.Linq;
using UnityEditor;
using Newtonsoft.Json;



public class SaveGameDataManager : Singleton<SaveGameDataManager>
{
    const string playerDataFile = "PlayerData.thesis";

    const string sceneFileNamePD = "PlayerSceneData";
    const string sceneKeyNamePD = "player_scene_data";


    private void Start()
    {
        PlayfabManager.Instance.SignInWithDevice();
        //ES3.Save("player_stats", PlayerSingleton.Instance.GetPlayerScript.GetEntityStats, "PlayerData.thesis");
        //ES3.Save("player", SavePlayerData(), "TESTDATA.thesis");
    }
    private void OnApplicationQuit()
    {
        ES3.Save("player", SavePlayerData(), "TESTDATA.thesis");
        SavePlayerDataCloud();
    }

    #region LOCAL SAVING
    public void SaveChapterScene()
    {
        ES3.Save("room_trigger", SaveRoomAreaInScene(), filePath: GetIdentifier());
        ES3.Save("timeline_trigger", SaveTriggerTimelineInScene(), filePath: GetIdentifier());
    }
    public void LoadChapterSCene()
    {
        LoadRoomAreaInScene();
        LoadTriggerTimelineInScene();
    }


    #region Save/Load Player Data
    public PlayerData SavePlayerData()
    {
        var player = PlayerSingleton.Instance.GetPlayerScript;

        PlayerData p_data = new PlayerData()
        {
            unlockedAbilities = player.GetAbility_Controller.GetListOfUnlockedAbilities(),
            usedCurrentAbilities = player.GetAbility_Controller.ListOfCurrentAbilities,
            playerStats = player.GetEntityStats,

            characterName = GameManager.Instance.GetCharacterName,
            artifactsCollected = GameManager.Instance.GetListOfCollectedArtifacts,

            chapterScores = GameManager.Instance.GetChapterScores,
            unlockedChapters = GameManager.Instance.GetChapterUnlocked
        };
        return p_data;
    }
    public PlayerData LoadPlayerData()
    {
        PlayerData getPlayerData = ES3.Load<PlayerData>("player", filePath: "TESTDATA.thesis");

        if(getPlayerData != null)
        {
            return getPlayerData;
        }
        else
        {
            Debug.LogWarning("THE PLAYER DATA FILE IS NOT YET EXIST");

            //TODO: When the file is not yet exist, then direct the player to account set up
            return null;
        }
    }
    #endregion


    #region SAVE/LOAD PLAYER IN CHAPTER
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

    //Chapter scene saving
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
    public void SavePlayerDataCloud()
    {
        var jsonPlayerData = ES3.LoadRawString(filePath: "TESTDATA.thesis");
        var saveData = new Dictionary<string, string>()
        {
            {"player_data",  jsonPlayerData}
        };

        PlayfabManager.Instance.SaveDataOnPlayfab(saveData);

    }




    #endregion

    public void CheckIfFileExist()
    {
        //TODO: Check if the local file is exist, if not then download the cloud save to local data
    }




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
