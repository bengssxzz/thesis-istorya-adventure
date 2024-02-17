using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;
using MoreMountains.Tools;
using Cinemachine;
using System;
using System.IO;
using System.Linq;
using PixelCrushers.DialogueSystem;


/*Save all pickup object in the scene
 * Save all the NPCs
 * Save all the battle trigger
 * Save all the timeline that already trigger
 */



public class LevelManager : Singleton<LevelManager>
{
    private CinemachineVirtualCamera sceneCamera;


    public PlayerScript player { get; private set; }
    public PlayableDirector currentDirector { get; private set; }


    private string currentScene;


    protected override void Awake()
    {
        base.Awake();
        sceneCamera = GetComponentInChildren<CinemachineVirtualCamera>();
        player = PlayerSingleton.Instance?.GetPlayerScript;

    }

    private void OnEnable()
    {
        Lua.RegisterFunction(nameof(ShowAlertUI), this, SymbolExtensions.GetMethodInfo(() => ShowAlertUI(string.Empty, (double)0)));
    }
    private void OnDisable()
    {
        Lua.UnregisterFunction(nameof(ShowAlertUI));
    }


    private void Start()
    {
        currentScene = SceneManager.GetActiveScene().name;
        SetCameraToPlayer();
    }

    //Set the camera to player
    public void SetCameraToPlayer()
    {
        if (sceneCamera != null)
        {
            if (player != null)
            {
                sceneCamera.Follow = null;
                sceneCamera.Follow = player.transform;
            }
            else
            {
                Debug.LogError("THERE ARE NO PLAYER IN THIS SCENE");
            }
        }
        else
        {
            Debug.LogError("THERE ARE NO CAMERA IN THIS SCENE");
        }
    }

    //Show alert
    public void ShowAlertUI(string message, double delay)
    {
        DialogueManager.ShowAlert(message, (float)delay);
    }

    #region Save/Load Data in this scene
    //public void SaveSceneLevel()
    //{
    //    //SavePickUpObjects(); //Save the pickup objects
    //    //SaveRoomAreaInScene(); //Save the battle trigger in the scene

    //    ChapterSceneSaveData scenedata = new ChapterSceneSaveData()
    //    {
    //        timelineCutscenesSaveDatas = SaveTriggerTimelineInScene(), //Save the timeline cutscenes trigger
    //        //pickupObjectSaveDatas = SavePickUpObjects(), //Save the pickup objects
    //        pickupObjectSaveDatas = FindAllPickupObjectInScene(), //Save the pickup objects
    //        roomBattleSaveDatas = SaveRoomAreaInScene()  //Save the battle trigger in the scene
    //    };

    //    ES3.Save(GetKeyName(), scenedata, filePath: GetFilePath());
    //    Debug.Log($"SAVING A FILE OF {GetKeyName()} IN {GetFilePath()}");
    //}
    //private void LoadDataInCurrentScene()
    //{
    //    LoadPickupObjects(); //Load the pickup in the scene
    //    LoadRoomAreaInScene(); //Load the battle room in the scene
    //    LoadTriggerTimelineInScene(); //Load the timeline cutscene trigger
    //}

    //#region SAVE/LOAD TIMELINE CUTSCENES
    //private List<TriggerTimeLine> FindAllTriggerTimelineInScene() //Find all the trigger timeline in the scene
    //{
    //    IEnumerable<TriggerTimeLine> triggerTimeLines = FindObjectsOfType<TriggerTimeLine>();
    //    return new List<TriggerTimeLine>(triggerTimeLines);
    //}
    //private List<TimelineCutscenesSaveData> SaveTriggerTimelineInScene()
    //{
    //    List<TimelineCutscenesSaveData> saveCutscenes = new List<TimelineCutscenesSaveData>();

    //    foreach (var item in FindAllTriggerTimelineInScene())
    //    {
    //        TimelineCutscenesSaveData data = new TimelineCutscenesSaveData()
    //        {
    //            id = item.GetInstanceID(),
    //            isAlreadyTrigger = item.IsTimelinePlayOnce
    //        };

    //        saveCutscenes.Add(data);
    //    }

    //    return saveCutscenes;
    //}
    //private void LoadTriggerTimelineInScene()
    //{
    //    if (IsKeyExist())
    //    {
    //        ChapterSceneSaveData sceneData = ES3.Load<ChapterSceneSaveData>(GetKeyName(), filePath: GetFilePath()); //Get the scene load

    //        if(sceneData != null)
    //        {
    //            List<TimelineCutscenesSaveData> timelineDatas = sceneData.timelineCutscenesSaveDatas; //load the list of the timeline triggers from file

    //            foreach (var item in FindAllTriggerTimelineInScene())
    //            {
    //                TimelineCutscenesSaveData data = timelineDatas.FirstOrDefault(x => x.id == item.GetInstanceID()); //Find the timeline with the same instance id

    //                if(data != null)
    //                {
    //                    item.IsTimelinePlayOnce = data.isAlreadyTrigger;
    //                }
    //            }
    //        }
    //    }
    //}


    //#endregion

    //#region SAVE/LOAD PICK UP OBJECTS IN THE SCENE
    ////To save the pickup objects in the scene
    //public List<GameObject> FindAllPickupObjectInScene() //Find all the pickup object in the scene
    //{
    //    PickupObject[] pickupObjects = FindObjectsOfType<PickupObject>().Where(x => !x.IsItemPickup).ToArray(); //Find the object that is not pick up by player
    //    List<GameObject> pickupObjectGameObjects = new List<GameObject>();

    //    foreach (var pickupObject in pickupObjects)
    //    {
    //        pickupObjectGameObjects.Add(pickupObject.gameObject);
    //    }

    //    return new List<GameObject>(pickupObjectGameObjects);
    //}

    //private List<PickupObjectSaveData> SavePickUpObjects() //Save 
    //{
    //    List<PickupObjectSaveData> saveDataPickup = new List<PickupObjectSaveData>();
    //    var pickupObjects = FindAllPickupObjectInScene();

    //    foreach (var item in pickupObjects)
    //    {
    //        PickupObject pickObject = item.GetComponent<PickupObject>();

    //        PickupObjectSaveData newPickup = new PickupObjectSaveData()
    //        {
    //            //itemSO = pickObject.GetItemSo,
    //            itemId = pickObject.GetItemId,
    //            itemSprite = pickObject.GetItemSprite,
    //            position = pickObject.transform.position,
    //            rotation = pickObject.transform.rotation,
    //            scale = pickObject.transform.localScale
    //        };

    //        saveDataPickup.Add(newPickup);
    //        //saveDataPickup.Add(new PickupObjectSaveData(pickObject));
    //    }

    //    return saveDataPickup;

    //    //ES3.Save(GetKeyName(), saveDataPickup, filePath: GetFilePath());

    //    //Debug.Log($"SAVING FILE IN {GetFilePath()}");
    //}
    ////private void LoadPickupObjects() //Load data
    ////{
    ////    //If there are already a file
    ////    if (IsKeyExist())
    ////    {
    ////        //Load a new item
    ////        //List<PickupObjectSaveData> pickupData = ES3.Load(GetKeyName(), defaultValue: new List<PickupObjectSaveData>(), filePath: GetFilePath()); //Load a data from file

    ////        ChapterSceneSaveData sceneData = ES3.Load<ChapterSceneSaveData>(GetKeyName(), filePath: GetFilePath()); //Load the data in current scene

    ////        if(sceneData != null)
    ////        {
    ////            List<PickupObjectSaveData> pickupData = sceneData.pickupObjectSaveDatas; //Get the list of pick up objects in the data

    ////            //Removing all the pickup object in the scene
    ////            foreach (var item in FindAllPickupObjectInScene())
    ////            {
    ////                item.SetActive(false);
    ////            }

    ////            foreach (var item in pickupData)
    ////            {
    ////                //Instantiate a new item and ibigay yung saved data in the new item
    ////                PickupObject obj = Instantiate(itemTemplate, item.position, item.rotation);
    ////                obj.transform.localScale = item.scale;
    ////                //obj.GetItemSo = item.itemSO;
    ////                obj.GetItemId = item.itemId;
    ////                obj.GetItemSprite = item.itemSprite;
    ////            }
    ////        }

    ////    }
    ////    else
    ////    {
    ////        Debug.Log("THERE ARE NO FILE YET IN THIS SCENE");
    ////    }
    ////}
    //private void LoadPickupObjects() //Load data
    //{
    //    //If there are already a file
    //    if (IsKeyExist())
    //    {
    //        //Load a new item
    //        //List<PickupObjectSaveData> pickupData = ES3.Load(GetKeyName(), defaultValue: new List<PickupObjectSaveData>(), filePath: GetFilePath()); //Load a data from file

    //        ChapterSceneSaveData sceneData = ES3.Load<ChapterSceneSaveData>(GetKeyName(), filePath: GetFilePath()); //Load the data in current scene

    //        if (sceneData != null)
    //        {
    //            List<GameObject> pickupData = sceneData.pickupObjectSaveDatas; //Get the list of pick up objects in the data

    //            //Removing all the pickup object in the scene
    //            //foreach (var item in FindAllPickupObjectInScene())
    //            //{
    //            //    item.SetActive(false);
    //            //}

    //            foreach (var item in pickupData)
    //            {
    //                var _item = Instantiate(item);
    //                _item.SetActive(true);
    //                ////Instantiate a new item and ibigay yung saved data in the new item
    //                //PickupObject obj = Instantiate(itemTemplate, item.position, item.rotation);
    //                //obj.transform.localScale = item.scale;
    //                ////obj.GetItemSo = item.itemSO;
    //                //obj.GetItemId = item.itemId;
    //                //obj.GetItemSprite = item.itemSprite;
    //            }
    //        }

    //    }
    //    else
    //    {
    //        Debug.Log("THERE ARE NO FILE YET IN THIS SCENE");
    //    }
    //}
    //#endregion

    //#region SAVE/LOAD BATTLE TRIGGER IN THE SCENE
    ////To Save the battle trigger in the scene
    //public List<RoomArea> FindAllRoomAreaInScene() //Find all room area in the scene
    //{
    //    IEnumerable<RoomArea> roomAreas = FindObjectsOfType<RoomArea>();
    //    return new List<RoomArea>(roomAreas);
    //}

    //private List<RoomBattleSaveData> SaveRoomAreaInScene()
    //{
    //    List<RoomBattleSaveData> saveRoomArea = new List<RoomBattleSaveData>();

    //    foreach (var item in FindAllRoomAreaInScene())
    //    {
    //        //saveRoomArea.Add(new RoomBattleSaveData(item.GetBattleTrigger));

    //        RoomBattleSaveData data = new RoomBattleSaveData()
    //        {
    //            roomId = item.GetBattleTrigger.GetInstanceID(),
    //            desiredBattleNextEnter = item.GetBattleTrigger.GetNextDesiredBattleTrigger,
    //            isAlreadyTrigger = item.GetBattleTrigger.IsAlreadyTriggerArea
    //        };

    //        saveRoomArea.Add(data);
    //    }

    //    return saveRoomArea;
    //    //ES3.Save<List<RoomBattleSaveData>>(GetKeyName(), saveRoomArea, filePath: GetFilePath());
    //    //Debug.Log("SAVING BATTLE AREA");
    //}
    //private void LoadRoomAreaInScene()
    //{
    //    if (IsKeyExist())
    //    {

    //        ChapterSceneSaveData sceneData = ES3.Load<ChapterSceneSaveData>(GetKeyName(), filePath: GetFilePath());

    //        //var loadedData = ES3.Load<List<RoomBattleSaveData>>(GetKeyName(), defaultValue: new List<RoomBattleSaveData>(), filePath: GetFilePath());

    //        if (sceneData != null)
    //        {
    //            List<RoomBattleSaveData> roomDatas = sceneData.roomBattleSaveDatas;

    //            foreach (RoomArea room in FindAllRoomAreaInScene())
    //            {
    //                //RoomBattleSaveData data = loadedData.FirstOrDefault(x => x.roomId == room.GetInstanceID()); //Find the object with the same ID
    //                RoomBattleSaveData data = roomDatas.FirstOrDefault(x => x.roomId == room.GetBattleTrigger.GetInstanceID());

    //                if (data != null)
    //                {
    //                    //Loaded the data
    //                    Debug.Log($"ID: {room.GetInstanceID()} || {data.isAlreadyTrigger}");
    //                    room.GetBattleTrigger.IsAlreadyTriggerArea = data.isAlreadyTrigger;
    //                    room.GetBattleTrigger.GetNextDesiredBattleTrigger = data.desiredBattleNextEnter;
    //                }
    //                else
    //                {
    //                    Debug.LogWarning($"THERE ARE NO ROOM WITH ID {data.roomId} IN THE SCENE");
    //                }
    //            }
    //        }
    //    }
    //}
    //#endregion












    private bool IsKeyExist() //To check if this scene is already saved
    {
        return (ES3.KeyExists(GetKeyName(), filePath: GetFilePath()));
    }
    public string GetFilePath() //Get the file name
    {
        // Get the full path of the current scene
        string scenePath = SceneManager.GetActiveScene().path;

        // Get the directory (folder) name from the path
        string folderName = Path.GetDirectoryName(scenePath);

        // Extract just the folder name without the path
        string folderNameOnly = Path.GetFileName(folderName);

        // Now, folderName contains the name of the folder
        //Debug.Log("Folder Name: " + folderNameOnly);
        return string.Format("{0}/{0}.thesis", folderNameOnly);
    }
    private string GetKeyName() //Get the key
    {
        return SceneManager.GetActiveScene().name;
    }




    #endregion































































}










