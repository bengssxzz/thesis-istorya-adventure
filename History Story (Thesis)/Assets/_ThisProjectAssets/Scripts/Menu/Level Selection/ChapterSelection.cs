using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChapterSelection : MonoBehaviour
{
    [Header("Prefab Info")]
    [SerializeField] private LevelChapterSlot chapterSlotPrefab;
    [SerializeField] private RectTransform content;
    [SerializeField] private ChapterInfos chapterInfo;

    //[Header("Chapter List")]
    //[SerializeField] private Chapter_LevelSO[] chapterLevelSO;


    private List<LevelChapterSlot> chapterSlots = new List<LevelChapterSlot>();



    private void Awake()
    {
        
    }

    private void OnEnable()
    {
        if(chapterSlots.Count > 0)
        {
            foreach (var itemSlot in chapterSlots)
            {
                itemSlot.OnPressSelectChapter += OnPressChapterBtn;
                itemSlot.OnPressEnterLevelChapter += OnPressEnterScene;
            }
        }

        UpdateChapterButtons();
    }
    private void OnDisable()
    {
        foreach (var itemSlot in chapterSlots)
        {
            itemSlot.OnPressSelectChapter -= OnPressChapterBtn;
            itemSlot.OnPressEnterLevelChapter -= OnPressEnterScene;
        }

        DeselectAllChapterSlot(); //Deselect the chapter
        chapterInfo.ResetInfos(); //Reset
    }
    private void Start()
    {
        GameManager.Instance.CollectArtifacts("Magical Necklace");


        var allScene = GameManager.Instance.GetListOfChapters;
        foreach (Chapter_LevelSO item in allScene)
        {
            var newSlot = Instantiate(chapterSlotPrefab); //Create a new chapter button
            newSlot.gameObject.transform.SetParent(content);

            LevelChapterSlot slot = newSlot.GetComponent<LevelChapterSlot>();
            slot.InitializeChapterButton(item); //Initialize the scriptable object to the new created button

            //Subscribe to events
            slot.OnPressSelectChapter += OnPressChapterBtn;
            slot.OnPressEnterLevelChapter += OnPressEnterScene;

            chapterSlots.Add(slot); //Add the button

            //Detect if locked of not
            //if(GameManager.Instance.IsChapterSceneExist(item, out var unlockedChapter))
            //{
            //    newSlot.IsLockChapter = !unlockedChapter;
            //}
            UpdateChapterButtons();

        }

    }
    
    private void UpdateChapterButtons()
    {
        foreach (var slot in chapterSlots)
        {
            slot.UpdateBtn();

            //Detect if locked 
            if (GameManager.Instance.IsChapterSceneExist(slot.GetChapterLevelSO, out var unlockedChapter))
            {
                slot.IsLockChapter = !unlockedChapter;
            }
        }
    }


    public void DeselectAllChapterSlot() //Deselect all the chapter slots
    {
        foreach (var itemSlot in chapterSlots)
        {
            itemSlot.SelectChapterSlot(false);
        }
    }


    private void OnPressChapterBtn(LevelChapterSlot slot) //Show description
    {
        var index = 0;

        DeselectAllChapterSlot();

        index = chapterSlots.IndexOf(slot); //Get the index of the new selected button

        var chapterSlotInfo = chapterSlots[index]; //
        chapterSlotInfo.SelectChapterSlot(true);

        chapterInfo.ShowChapterInfos(chapterSlotInfo.GetChapterLevelSO); //Show info
    }
    private void OnPressEnterScene(string defaultSceneName) //Go to the scene
    {
        //Check if the selected chapter file exist
        string desiredScene_Folder = GetFolderNameBySceneName(defaultSceneName);

        Debug.Log("FOLDER NAME: " + desiredScene_Folder);
        if (string.IsNullOrEmpty(desiredScene_Folder)) {
            // If the scene is not found, return null or an appropriate default value
            Debug.LogError($"THE {defaultSceneName} SCENE IS NOT FOUND");
            return; }

        PlayerSceneSaveData playerData = SaveGameDataManager.Instance.LoadPlayerScene(desiredScene_Folder);

        if(playerData != null)
        {
            //The file exist
            var getSaveScene = playerData.sceneName;

            SceneTransitionManager.Instance.SceneTransitionInstant(getSaveScene);
        }
        else
        {
            SceneTransitionManager.Instance.SceneTransitionInstant(defaultSceneName);

        }





        //if (ES3.FileExists(filePath))
        //{
        //    //If file exist

        //    var playerKey = GameManager.Instance.GetPlayerKey; //Player key





        //    if (ES3.KeyExists(playerKey, filePath))
        //    {
        //        var playerData = ES3.Load<PlayerSceneSaveData>(playerKey, filePath: filePath); //Get the player data

        //        var _sceneName = playerData.sceneName; //Player's last scene

        //        //TODO: Spawn to the save position

        //        SceneTransitionManager.Instance.SceneTransitionInstant(_sceneName);
        //    }
        //    else
        //    {
        //        Debug.LogError("FILE EXIST BUT THERE ARE NO PLAYER KEY. GO TO DEFAULT SCENE");
        //        SceneTransitionManager.Instance.SceneTransitionInstant(defaultSceneName);
        //    }
        //}
        //else
        //{
        //    //If file is not exit
        //    Debug.LogWarning("THERE ARE NO SCENE FILE FOR THIS LEVEL PATH. GO TO DEFAULT SCENE FOR THIS LEVEL");
        //    SceneTransitionManager.Instance.SceneTransitionInstant(defaultSceneName);
        //}


        ////SceneManager.LoadScene(defaultSceneName);
    }










    private string GetFolderNameBySceneName(string targetSceneName) //Get only the folder name of the target scene
    {
        // Get all scene paths in the project
        string[] scenePaths = AssetDatabase.FindAssets("t:Scene");

        foreach (string scenePath in scenePaths)
        {
            string sceneFullPath = AssetDatabase.GUIDToAssetPath(scenePath);

            // Check if the scene is the target scene
            if (Path.GetFileNameWithoutExtension(sceneFullPath) == targetSceneName)
            {
                // Get the directory (folder) name from the path
                string folderName = Path.GetDirectoryName(sceneFullPath);

                // Extract just the folder name without the path
                string folderNameOnly = Path.GetFileName(folderName);

                return folderNameOnly;
            }
        }

        // If the scene is not found, return null or an appropriate default value
        return null;
    }


}
