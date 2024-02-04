using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChapterSelection : MonoBehaviour
{
    [Header("Prefab Info")]
    [SerializeField] private LevelChapterSlot chapterSlotPrefab;
    [SerializeField] private RectTransform content;
    [SerializeField] private ChapterInfos chapterInfo;

    [Header("Chapter List")]
    [SerializeField] private Chapter_LevelSO[] chapterLevelSO;


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
        foreach (Chapter_LevelSO item in chapterLevelSO)
        {
            var newSlot = Instantiate(chapterSlotPrefab); //Create a new chapter button
            newSlot.gameObject.transform.SetParent(content);

            LevelChapterSlot slot = newSlot.GetComponent<LevelChapterSlot>();
            slot.InitializeChapterButton(item); //Initialize the scriptable object to the new created button

            //Subscribe to events
            slot.OnPressSelectChapter += OnPressChapterBtn;
            slot.OnPressEnterLevelChapter += OnPressEnterScene;

            chapterSlots.Add(slot); //Add the button
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

    private void OnPressEnterScene(string filePath, string defaultSceneName) //Go to the scene
    {
        //Check if the selected chapter file exist
        if (ES3.FileExists(filePath))
        {
            //If file exist

            var playerKey = GameManager.Instance.GetPlayerKey; //Player key
            if (ES3.KeyExists(playerKey, filePath))
            {
                var playerData = ES3.Load<PlayerSceneSaveData>(playerKey, filePath: filePath); //Get the player data

                var _sceneName = playerData.sceneName; //Player's last scene

                //TODO: Spawn to the save position

                SceneTransitionManager.Instance.SceneTransitionInstant(_sceneName);
            }
            else
            {
                Debug.LogError("FILE EXIST BUT THERE ARE NO PLAYER KEY. GO TO DEFAULT SCENE");
                SceneTransitionManager.Instance.SceneTransitionInstant(defaultSceneName);
            }
        }
        else
        {
            //If file is not exit
            Debug.LogWarning("THERE ARE NO SCENE FILE FOR THIS LEVEL PATH. GO TO DEFAULT SCENE FOR THIS LEVEL");
            SceneTransitionManager.Instance.SceneTransitionInstant(defaultSceneName);
        }


        //SceneManager.LoadScene(defaultSceneName);
    }













}
