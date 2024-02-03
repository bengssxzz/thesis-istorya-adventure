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


/*Save all pickup object in the scene
 * Save all the NPCs
 * Save all the battle trigger
 * Save all the timeline that already trigger
 */


public class LevelManager : Singleton<LevelManager>
{

    private CinemachineVirtualCamera sceneCamera;


    [Header("Scene Info")]
    [SerializeField] private PickupObject itemTemplate;

    [SerializeField] private string questionChapter = "Chapter 1";


    public PlayerScript player { get; private set; }
    public PlayableDirector currentDirector { get; private set; }
    public string GetQuestionChapter { get { return questionChapter; } }


    private string currentScene;


    //private void OnApplicationQuit() //TEMPORARY
    //{
    //    SavePickUpObjects();
    //}

    protected override void Awake()
    {
        base.Awake();
        sceneCamera = GetComponentInChildren<CinemachineVirtualCamera>();
        player = PlayerSingleton.Instance.GetPlayerScript;

    }


    private void Start()
    {
        currentScene = SceneManager.GetActiveScene().name;
        SetCameraToPlayer();


        LoadPickupObjects(); //Load the pickup in the scene
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



    #region Save Data in this scene
    public void SaveSceneLevel()
    {
        SavePickUpObjects(); //Save the pickup objects
    }






    //To save the pickup objects in the scene
    public List<GameObject> FindAllPickupObjectInScene() //Find all the pickup object in the scene
    {
        PickupObject[] pickupObjects = FindObjectsOfType<PickupObject>().Where(x => !x.IsItemPickup).ToArray(); //Find the object that is not pick up by player
        List<GameObject> pickupObjectGameObjects = new List<GameObject>();

        foreach (var pickupObject in pickupObjects)
        {
            pickupObjectGameObjects.Add(pickupObject.gameObject);
        }

        return new List<GameObject>(pickupObjectGameObjects);
    }

    public void SavePickUpObjects() //Save 
    {
        List<PickupObjectSaveData> saveDataPickup = new List<PickupObjectSaveData>();
        var pickupObjects = FindAllPickupObjectInScene();

        foreach (var item in pickupObjects)
        {
            PickupObject pickObject = item.GetComponent<PickupObject>();
            saveDataPickup.Add(new PickupObjectSaveData(pickObject));
        }

        ES3.Save<List<PickupObjectSaveData>>(GetKeyName(), saveDataPickup, filePath: GetFilePath());

        Debug.Log($"SAVING FILE IN {GetFilePath()}");
    }
    private void LoadPickupObjects() //Load data
    {
        //If there are already a file
        if (IsKeyExist())
        {
            //Removing all the pickup object in the scene
            foreach (var item in FindAllPickupObjectInScene())
            {
                item.SetActive(false);
            }

            //Load a new item
            List<PickupObjectSaveData> pickupData = ES3.Load(GetKeyName(), defaultValue: new List<PickupObjectSaveData>(), filePath: GetFilePath()); //Load a data from file
            foreach (var item in pickupData)
            {
                //Instantiate a new item and ibigay yung saved data in the new item
                PickupObject obj = Instantiate(itemTemplate, item.position, item.rotation);
                obj.transform.localScale = item.scale;
                obj.GetItemId = item.itemId;
                obj.GetItemSprite = item.itemSprite;
            }

            Debug.Log($"LOAD COMPLETE IN {SceneManager.GetActiveScene().name}");
        }
        else
        {
            Debug.Log("THERE ARE NO FILE YET IN THIS SCENE");
        }
    }





















    private bool IsKeyExist() //To check if this scene is already saved
    {
        return (ES3.KeyExists(GetKeyName(), filePath: GetFilePath()));
    }
    private string GetFilePath() //Get the file name
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










