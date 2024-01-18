using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ChapterInfos : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI chapterName;
    [SerializeField] private TextMeshProUGUI chapterTitle;
    [SerializeField] private TextMeshProUGUI chapterDescription;


    private void Start()
    {
        ShowInfoUI(false);
    }

    public void ShowChapterInfos(Chapter_LevelSO chapterLevelSO)
    {
        ShowInfoUI(true);

        this.chapterName.text = chapterLevelSO.chapterName;
        this.chapterTitle.text = chapterLevelSO.chapterTitle;
        this.chapterDescription.text = chapterLevelSO.description;

    }

    private void ShowInfoUI(bool visible)
    {
        chapterName.gameObject.SetActive(visible);
        chapterTitle.gameObject.SetActive(visible);
        chapterDescription.gameObject.SetActive(visible);
    }

}
