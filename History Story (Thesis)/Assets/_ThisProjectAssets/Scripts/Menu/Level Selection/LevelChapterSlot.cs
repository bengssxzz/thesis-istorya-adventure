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
    public event Action OnPressEnterLevelChapter;

    [SerializeField] private Image deselectedPanel;

    [SerializeField] private Image chapterImageUI;
    [SerializeField] private TextMeshProUGUI chapterNameTxt;
    [SerializeField] private TextMeshProUGUI chapterTitleTxt;

    private bool isLock = false;

    private bool isSelected = false;
    public bool GetChapterLevelBtnIsSelected { get { return isSelected; } set { 
            isSelected = value;
            deselectedPanel.gameObject.SetActive(!value);
        } } 



    public void InitializeChapterButton(Chapter_LevelSO chapterLevelSO)
    {
        this.chapterLevelSO = chapterLevelSO;

        chapterImageUI.sprite = chapterLevelSO.chapter_img;
        chapterNameTxt.text = chapterLevelSO.chapterName;
        chapterTitleTxt.text = chapterLevelSO.chapterTitle;

        GetChapterLevelBtnIsSelected = false;
    }

    public void SelectChapterSlot(bool selected)
    {
        isSelected = selected;
        deselectedPanel.gameObject.SetActive(!selected);
    }


    public override void OnPointerClick(PointerEventData eventData)
    {

        if (!isSelected)
        {
            GetChapterLevelBtnIsSelected = true;

            OnPressSelectChapter?.Invoke(this);
            //TODO: Show this chapter info
            Debug.Log("First press: Show details");
        }
        else
        {
            //TODO: to go the scene assign to this chapter
            OnPressEnterLevelChapter?.Invoke();
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
