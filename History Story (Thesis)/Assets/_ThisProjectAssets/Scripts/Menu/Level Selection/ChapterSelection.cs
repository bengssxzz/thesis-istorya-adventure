using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using MoreMountains.Tools;


public class ChapterSelection : MonoBehaviour
{
    [Header("Pages")]
    [SerializeField] private ChapterInfos chapterDescription;
    [SerializeField] private ArtifactsPage artifactPage;
    [SerializeField] private AbilityPageUI abilityPage;

    [Header("SubMenus")]
    [SerializeField] private MMTouchButton descriptionBtn;
    [SerializeField] private MMTouchButton artifactsCollectionBtn;
    [SerializeField] private MMTouchButton abilitiesCollectionBtn;

    [Space(20)]
    [Header("Prefab Info")]
    [SerializeField] private LevelChapterSlot chapterSlotPrefab;
    [SerializeField] private RectTransform content;

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
        SubMenusBtn_Subscribe();
        UpdateChapterButtons();
    }
    private void OnDisable()
    {
        foreach (var itemSlot in chapterSlots)
        {
            itemSlot.OnPressSelectChapter -= OnPressChapterBtn;
            itemSlot.OnPressEnterLevelChapter -= OnPressEnterScene;
        }
        SubMenusBtn_Unsubscribe();
        DeselectAllChapterSlot(); //Deselect the chapter
        chapterDescription.ResetInfos(); //Reset
    }
    private void Start()
    {
        //TESTING
        Debug.Log("TESTING");
        GameManager.Instance.CollectArtifacts("Hunters Insignia");
        GameManager.Instance.CollectedAbilities("Dodge");
        GameManager.Instance.UnlockSceneChapter("Chapter 2");

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

            UpdateChapterButtons();

        }

    }
    
    private void SubMenusBtn_Subscribe()
    {
        descriptionBtn.ButtonReleased.AddListener(ShowDescriptionPage);
        artifactsCollectionBtn.ButtonReleased.AddListener(ShowArtifactsCollectionPage);
        abilitiesCollectionBtn.ButtonReleased.AddListener(ShowAbilitiesCollectionPage);
    }
    private void SubMenusBtn_Unsubscribe()
    {
        descriptionBtn.ButtonReleased.RemoveListener(ShowDescriptionPage);
        artifactsCollectionBtn.ButtonReleased.RemoveListener(ShowArtifactsCollectionPage);
        abilitiesCollectionBtn.ButtonReleased.RemoveListener(ShowAbilitiesCollectionPage);
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

        var chapterSO = chapterSlotInfo.GetChapterLevelSO;

        ShowDescriptionPage();

        SetUpInfos(chapterSO);


    }
    private void OnPressEnterScene(string defaultSceneName, string defaultTransID) //Go to the scene
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

            SceneTransitionManager.Instance.SceneTransitionInstant(getSaveScene, defaultTransID);
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


    private void SetUpInfos(Chapter_LevelSO infoSO)
    {
        chapterDescription.ShowChapterInfos(infoSO); //Show info
        artifactPage.SetListOfArtifacts(infoSO.collections.artifacts);
        abilityPage.SetListOfAbility(infoSO.collections.abilities);
    }

    private void ShowDescriptionPage()
    {
        UI_Manager.Instance.OpenMenu("DescriptionMenu");

        UI_Manager.Instance.CloseMenu("ArtifactsMenu");
        UI_Manager.Instance.CloseMenu("AbilityMenu");
    }

    private void ShowArtifactsCollectionPage()
    {
        UI_Manager.Instance.OpenMenu("ArtifactsMenu");

        UI_Manager.Instance.CloseMenu("DescriptionMenu");
        UI_Manager.Instance.CloseMenu("AbilityMenu");
    }
    private void ShowAbilitiesCollectionPage()
    {
        UI_Manager.Instance.OpenMenu("AbilityMenu");

        UI_Manager.Instance.CloseMenu("DescriptionMenu");
        UI_Manager.Instance.CloseMenu("ArtifactsMenu");
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
