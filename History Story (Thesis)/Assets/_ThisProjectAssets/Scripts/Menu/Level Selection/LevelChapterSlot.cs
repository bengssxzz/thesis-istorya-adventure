using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using System;
using System.Linq;
using MoreMountains.Tools;

public class LevelChapterSlot : MonoBehaviour
{
    private Chapter_LevelSO chapterLevelSO;

    public event Action<LevelChapterSlot> OnPressSelectChapter;
    public event Action<string, string> OnPressEnterLevelChapter;

    [SerializeField] private MMTouchButton chapterButton;
    [SerializeField] private RectTransform deselectedPanel;
    [SerializeField] private RectTransform lockPanel;

    [SerializeField] private Image chapterImageUI;
    [SerializeField] private Image chapterCompletionBadge;
    [SerializeField] private TextMeshProUGUI chapterNameTxt;
    [SerializeField] private TextMeshProUGUI chapterTitleTxt;
    [SerializeField] private TextMeshProUGUI chapterProgression;
    

    private bool isSelected = false;
    private bool isLock = false;

    public Chapter_LevelSO GetChapterLevelSO { get { return chapterLevelSO; } }
    public bool GetChapterLevelBtnIsSelected { get { return isSelected; } set { 
            isSelected = value;
            deselectedPanel.gameObject.SetActive(!value);
        } 
    }
    public bool IsLockChapter {
        get { return isLock; }
        set 
        {
            isLock = value;
            SetLockChapter(value);
        }
    }


    private void OnDestroy()
    {
        chapterButton.ButtonReleased.RemoveListener(ChapterButtonPressed);
    }
    private void Awake()
    {
        chapterButton.ButtonReleased.AddListener(ChapterButtonPressed);
    }

   

    public void InitializeChapterButton(Chapter_LevelSO chapterLevelSO)
    {
        this.chapterLevelSO = chapterLevelSO;

        chapterImageUI.sprite = chapterLevelSO.chapter_img;
        chapterNameTxt.text = chapterLevelSO.chapterName;
        chapterTitleTxt.text = chapterLevelSO.chapterTitle;

        GetChapterLevelBtnIsSelected = false;

        //chapterFilePath = string.Format("{0}/{0}.thesis", chapterLevelSO.sceneFolderName); //File path for loading data
        UpdateBtn();
    }

    public void UpdateBtn() //Update the button
    {
        ProgressCalculation(chapterLevelSO);
    }

    private void ProgressCalculation(Chapter_LevelSO chapterLevelSO)
    {
        var collections = chapterLevelSO.collections;

        if(collections.abilities.Count == 0 && collections.artifacts.Count == 0) { return; }

        var countAllArtifacts = 0;
        var countAllAbilities = 0;

        var countCollectedArtifacts = 0;
        var countCollectedAbilities = 0;


        countAllArtifacts = collections.artifacts.Count;
        countAllAbilities = collections.abilities.Count;

        // Count the number of artifacts and abilities
        countCollectedArtifacts = collections.artifacts.Count(artifacts => GameManager.Instance.GetListOfCollectedArtifacts.Contains(artifacts));
        countCollectedAbilities = collections.abilities.Count(ability => GameManager.Instance.GetListOfCollectedAbility.Contains(ability));

        int totalCollected = countCollectedArtifacts + countCollectedAbilities;
        int totalToCollect = countAllArtifacts + countAllAbilities;

        float computedCalcProg = ((float)totalCollected / (float)totalToCollect) * 100;

        Debug.Log($"ALL ARTIFACTS COUNT: {countAllArtifacts} | ALL ABILITY COUNT: {countAllAbilities} ||| " +
            $"COLLECTED ARTIFACTS: {countCollectedArtifacts} | COLLECTED ABILITY: {countCollectedAbilities} ||| TOTAL: {computedCalcProg}");

        SetProgression(computedCalcProg);
    }

    public void SelectChapterSlot(bool selected)
    {
        isSelected = selected;
        deselectedPanel.gameObject.SetActive(!selected);
    }

    private void SetProgression(float progress) //Set the progression
    {
        chapterProgression.text = string.Format("Complete: {0:F1}%", progress);

        chapterCompletionBadge?.gameObject.SetActive(progress > 99.9);
    }
    private void SetLockChapter(bool toggleLock)
    {
        lockPanel.gameObject.SetActive(toggleLock);
    }



    private void ChapterButtonPressed()
    {
        if (isLock) { return; }

        if (!isSelected) //If first time selected just show a details
        {
            GetChapterLevelBtnIsSelected = true;

            OnPressSelectChapter?.Invoke(this);
        }
        else //Then the second click will chance scene
        {
            OnPressEnterLevelChapter?.Invoke(chapterLevelSO.defaultSceneName, chapterLevelSO.defaultTransID);
            Debug.Log("Go to this scene");
        }
    }
}
