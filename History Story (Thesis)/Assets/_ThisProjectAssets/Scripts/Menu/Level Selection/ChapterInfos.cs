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
        chapterName.gameObject.SetActive(false);
        chapterTitle.gameObject.SetActive(false);
        chapterDescription.gameObject.SetActive(false);
    }

    public void ShowChapterInfos(string chapterName, string chapterTitle, string chapterDesc)
    {
        this.chapterName.gameObject.SetActive(true);
        this.chapterTitle.gameObject.SetActive(true);
        this.chapterDescription.gameObject.SetActive(true);

        this.chapterName.text = chapterName;
        this.chapterTitle.text = chapterTitle;
        this.chapterDescription.text = chapterDesc;

    }



}
