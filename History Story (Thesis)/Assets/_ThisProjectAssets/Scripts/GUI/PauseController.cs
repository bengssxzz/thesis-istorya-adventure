using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseController : MonoBehaviour
{
    [SerializeField] private GameObject pauseUI;
    [SerializeField] private Button pauseBtn, resumeBtn, optionBtn, quiBtn;


    private void Start()
    {
        pauseBtn.onClick.AddListener(ShowPause);
        resumeBtn.onClick.AddListener(HidePause);
        optionBtn.onClick.AddListener(OptionMenu);
        quiBtn.onClick.AddListener(QuitMenu);

    }

    private void QuitMenu()
    {
        //TODO: Go to main menu
        Debug.Log("Go to main menu");
    }

    private void OptionMenu()
    {
        Debug.Log("Option");
    }

    private void ShowPause()
    {
        pauseUI.SetActive(true);
        GameManager.Instance.SetPauseValue(true);
        pauseBtn.gameObject.SetActive(false);
    }
    private void HidePause()
    {
        pauseUI.SetActive(false);
        GameManager.Instance.SetPauseValue(false);
        pauseBtn.gameObject.SetActive(true);
    }
}
