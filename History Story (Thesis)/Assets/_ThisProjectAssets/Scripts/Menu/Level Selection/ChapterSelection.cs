using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChapterSelection : MonoBehaviour
{
    [Header("Prefab Info")]
    [SerializeField] private LevelChapterSlot chapterSlotPrefab;
    [SerializeField] private RectTransform content;
    [SerializeField] private ChapterInfos chapterInfo;

    [Header("Chapter List")]
    [SerializeField] private Chapter_LevelSO[] chapterLevelSO;


    private List<LevelChapterSlot> chapterSlots = new List<LevelChapterSlot>();


    private void OnEnable()
    {
        if(chapterSlots.Count == 0)
        {
            foreach (var itemSlot in chapterSlots)
            {
                itemSlot.OnPressSelectChapter += OnPressChapterBtn;
            }
        }
    }
    private void OnDisable()
    {
        foreach (var itemSlot in chapterSlots)
        {
            itemSlot.OnPressSelectChapter -= OnPressChapterBtn;
        }
    }
    private void Start()
    {
        foreach (Chapter_LevelSO item in chapterLevelSO)
        {
            var newSlot = Instantiate(chapterSlotPrefab);
            newSlot.gameObject.transform.SetParent(content);

            LevelChapterSlot slot = newSlot.GetComponent<LevelChapterSlot>();
            slot.InitializeChapterButton(item);

            slot.OnPressSelectChapter += OnPressChapterBtn;

            chapterSlots.Add(slot);
        }
    }

    private void DeselectAllChapterSlot()
    {
        foreach (var itemSlot in chapterSlots)
        {
            itemSlot.SelectChapterSlot(false);
        }
    }

    private void OnPressChapterBtn(LevelChapterSlot slot)
    {
        var index = 0;

        DeselectAllChapterSlot();

        index = chapterSlots.IndexOf(slot);
        chapterSlots[index].SelectChapterSlot(true);
    }

}
