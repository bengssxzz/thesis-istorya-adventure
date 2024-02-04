using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using System;

public class LevelChapterSlot : BaseSlot
{
    private Chapter_LevelSO chapterLevelSO;

    public event Action<LevelChapterSlot> OnPressSelectChapter;
    public event Action<string, string> OnPressEnterLevelChapter;

    [SerializeField] private Image deselectedPanel;

    [SerializeField] private Image chapterImageUI;
    [SerializeField] private TextMeshProUGUI chapterNameTxt;
    [SerializeField] private TextMeshProUGUI chapterTitleTxt;


    public Chapter_LevelSO GetChapterLevelSO { get { return chapterLevelSO; } }
    public bool GetChapterLevelBtnIsSelected { get { return isSelected; } set { 
            isSelected = value;
            deselectedPanel.gameObject.SetActive(!value);
        } 
    }

    private string chapterFilePath; //File path for loading data

    private bool isLock = false;
    private bool isSelected = false;
    public void InitializeChapterButton(Chapter_LevelSO chapterLevelSO)
    {
        this.chapterLevelSO = chapterLevelSO;

        chapterImageUI.sprite = chapterLevelSO.chapter_img;
        chapterNameTxt.text = chapterLevelSO.chapterName;
        chapterTitleTxt.text = chapterLevelSO.chapterTitle;

        GetChapterLevelBtnIsSelected = false;

        chapterFilePath = string.Format("{0}/{0}.thesis", chapterLevelSO.sceneFolderName); //File path for loading data

        ChapterSlotInitializeStartFunc();
    }

    private void ChapterSlotInitializeStartFunc() //Act as like a start function when instantiate
    {
        //Load a data from the file
    }

    public void SelectChapterSlot(bool selected)
    {
        isSelected = selected;
        deselectedPanel.gameObject.SetActive(!selected);
    }


    public override void OnPointerClick(PointerEventData eventData)
    {

        if (!isSelected) //If first time selected just show a details
        {
            GetChapterLevelBtnIsSelected = true;

            OnPressSelectChapter?.Invoke(this);
        }
        else //Then the second click will chance scene
        {
            OnPressEnterLevelChapter?.Invoke(chapterFilePath, chapterLevelSO.defaultSceneName);
            Debug.Log("Go to this scene");
        }

    }














    #region No Need
    public override void OnBeginDrag(PointerEventData eventData)
    {
    }

    public override void OnDrag(PointerEventData eventData)
    {
    }

    public override void OnDrop(PointerEventData eventData)
    {
    }

    public override void OnEndDrag(PointerEventData eventData)
    {
    }

    #endregion
}
