using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using System;
using PlayFab.ClientModels;

public class MainMenu : MonoBehaviour
{
    [SerializeField] MMTouchButton lvlSelectBtn;
    [SerializeField] MMTouchButton accountBtn;
    [SerializeField] MMTouchButton settingsBtn;
    [SerializeField] MMTouchButton quitBtn;

    //Leaderboard

    private void OnEnable()
    {
        lvlSelectBtn.ButtonReleased.AddListener(LevelSelectPressed);
        accountBtn.ButtonReleased.AddListener(AccountPressed);
        settingsBtn.ButtonReleased.AddListener(SettingsPressed);
        quitBtn.ButtonReleased.AddListener(QuitGamePressed);

        PlayfabManager.Instance.OnLoginSuccess += LoginSuccess;
    }


    private void OnDisable()
    {
        lvlSelectBtn.ButtonReleased.RemoveListener(LevelSelectPressed);
        accountBtn.ButtonReleased.RemoveListener(AccountPressed);
        settingsBtn.ButtonReleased.RemoveListener(SettingsPressed);
        quitBtn.ButtonReleased.RemoveListener(QuitGamePressed);

        PlayfabManager.Instance.OnLoginSuccess -= LoginSuccess;
    }

    private async void Start()
    {
        await UI_Manager.Instance.InitializeGetAllMenus();

        PlayfabManager.Instance.LoginOnStart();
    }

    private void LevelSelectPressed()
    {
        UI_Manager.Instance.OpenMenu("LevelSelectPage");
    }
    private void SettingsPressed()
    {
        UI_Manager.Instance.OpenMenu("SettingPage");
    }
    private void QuitGamePressed()
    {
        UI_Manager.Instance.OpenMenu("QuitGamePage");
    }

    private void AccountPressed()
    {
        if (PlayfabManager.Instance.IsUserLogin())
        {
            //If already login
            UI_Manager.Instance.OpenMenu("AccountPage");
        }
        else
        {
            //Not yet login
            UI_Manager.Instance.OpenMenu("AccountSetup Menu");
        }
    }
    private void LoginSuccess(LoginResult result)
    {
        //If the menu is already open
        if (UI_Manager.Instance.IsMenuOpened("AccountSetup Menu")) 
        {
            UI_Manager.Instance.OpenMenu("AccountPage");
        }
    }





}