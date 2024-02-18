using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using SimpleSQL.Demos;
using System;

public class PauseMenu : MonoBehaviour
{
    [SerializeField] private MMTouchButton resumeBtn; 
    [SerializeField] private MMTouchButton settingsBtn; 
    [SerializeField] private MMTouchButton mainMenuBtn;


    private void Awake()
    {
        resumeBtn.ButtonReleased.AddListener(ResumeButton);
        settingsBtn.ButtonReleased.AddListener(SettingsMenuButton);
        mainMenuBtn.ButtonReleased.AddListener(MainMenu_Button);
    }

   

    private void ResumeButton()
    {
        UI_Manager.Instance.CloseMenu("PausePanel UI");
    }

    private void SettingsMenuButton()
    {
        UI_Manager.Instance.OpenMenu("SettingsMenu");
    }
    private void MainMenu_Button()
    {
        SceneTransitionManager.Instance.SceneTransitionInstant(SceneTransitionManager.Instance.MainMenuScene);
    }
}
