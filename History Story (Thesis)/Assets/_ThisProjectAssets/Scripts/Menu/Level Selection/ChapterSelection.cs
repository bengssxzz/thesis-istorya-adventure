using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using MoreMountains.Tools;
using UnityEngine.UI;


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
        ////TESTING
        //Debug.Log("TESTING");
        //GameManager.Instance.UnlockSceneChapter("Introduction");


        //foreach (var item in GameManager.Instance.GetDictUnlockedChapters)
        //{
        //    Debug.Log($"CHAPTER: {item.Key.chapterName} || UNLOCKED: {item.Value}");
        //}
        ////GameManager.Instance.CollectArtifacts("Hunters Insignia");
        ////GameManager.Instance.CollectedAbilities("Dodge");
        //GameManager.Instance.UnlockSceneChapter("Chapter 2");
        //GameManager.Instance.UnlockSceneChapter("Chapter 3");
        //GameManager.Instance.UnlockSceneChapter("Chapter 4");

        for (int i = 0; i < SceneManager.sceneCountInBuildSettings; i++)
        {
            string fullPath = SceneUtility.GetScenePathByBuildIndex(i);
            string name = Path.GetFileNameWithoutExtension(fullPath);

            string directoryName = Path.GetDirectoryName(fullPath);
            string folderNameOnly = Path.GetFileName(directoryName);

            //Debug.Log($"INDEX: {i} || NAME: {name} || DIRECTORY: {directoryName} || FolderName: {folderNameOnly} ||| FULL PATH: {fullPath}");
        }

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
            var getSaveSpawn = playerData.spawnPosition;

            SceneTransitionManager.Instance.SceneTransitionInstant(getSaveScene, getSaveSpawn);
        }
        else
        {
            SceneTransitionManager.Instance.SceneTransitionInstant(defaultSceneName, defaultTransID);

        }
    }


    private void SetUpInfos(Chapter_LevelSO infoSO)
    {
        chapterDescription.ShowChapterInfos(infoSO); //Show info
        artifactPage.SetListOfArtifacts(infoSO.collections.artifacts);
        abilityPage.SetListOfAbility(infoSO.collections.abilities);
    }


    private async void ShowDescriptionPage()
    {
        UI_Manager.Instance.OpenMenu("DescriptionMenu");
        var resetScrollBar = await UI_Manager.Instance.FindComponentInUIMenu<Scrollbar>("DescriptionMenu");
        resetScrollBar.value = 1;



        UI_Manager.Instance.CloseMenu("ArtifactsMenu");
        UI_Manager.Instance.CloseMenu("AbilityMenu");
    }
    private async void ShowArtifactsCollectionPage()
    {
        UI_Manager.Instance.OpenMenu("ArtifactsMenu");
        var resetScrollBar = await UI_Manager.Instance.FindComponentInUIMenu<Scrollbar>("ArtifactsMenu");
        resetScrollBar.value = 1;


        UI_Manager.Instance.CloseMenu("DescriptionMenu");
        UI_Manager.Instance.CloseMenu("AbilityMenu");
    }
    private async void ShowAbilitiesCollectionPage()
    {
        UI_Manager.Instance.OpenMenu("AbilityMenu");
        var resetScrollBar = await UI_Manager.Instance.FindComponentInUIMenu<Scrollbar>("AbilityMenu");
        resetScrollBar.value = 1;


        UI_Manager.Instance.CloseMenu("DescriptionMenu");
        UI_Manager.Instance.CloseMenu("ArtifactsMenu");
    }






    private string GetFolderNameBySceneName(string targetSceneName) //Get only the folder name of the target scene
    {
        for (int i = 0; i < SceneManager.sceneCountInBuildSettings; i++)
        {
            string fullPath = SceneUtility.GetScenePathByBuildIndex(i);

            if (Path.GetFileNameWithoutExtension(fullPath) == targetSceneName)
            {
                // Get the directory (folder) name from the path
                string folderName = Path.GetDirectoryName(fullPath);

                // Extract just the folder name without the path
                string folderNameOnly = Path.GetFileName(folderName);

                return folderNameOnly;
            }
        }

        return null;
    }

}
