using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;

public class LevelChapterSlot : BaseSlot
{
    [SerializeField] private string sceneName;

    [SerializeField] private Sprite chapterImage;
    [SerializeField] private string chapterName;
    [SerializeField] private string chapterTitle;
    
    [Space(25)]
    [SerializeField] private Image chapterImageUI;
    [SerializeField] private TextMeshProUGUI chapterNameUI;
    [SerializeField] private TextMeshProUGUI chapterTitleUI;

    private bool isLock = false;



    private void Start()
    {
        chapterImageUI.sprite = chapterImage;

        chapterNameUI.text = chapterName;
        chapterTitleUI.text = chapterTitle;
    }

    public override void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("Pressing " + chapterTitle);
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
