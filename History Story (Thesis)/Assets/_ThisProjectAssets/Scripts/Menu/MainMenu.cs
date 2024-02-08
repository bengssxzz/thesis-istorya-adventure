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

    //Leaderboard


    private void OnEnable()
    {
        lvlSelectBtn.ButtonReleased.AddListener(lvlSelectPressed);
        accountBtn.ButtonReleased.AddListener(accountPressed);
        settingsBtn.ButtonReleased.AddListener(settingsPressed);

        PlayfabManager.Instance.OnLoginSuccess += LoginSuccess;
    }


    private void OnDisable()
    {
        lvlSelectBtn.ButtonReleased.RemoveListener(lvlSelectPressed);
        accountBtn.ButtonReleased.RemoveListener(accountPressed);
        settingsBtn.ButtonReleased.RemoveListener(settingsPressed);

        PlayfabManager.Instance.OnLoginSuccess -= LoginSuccess;
    }


    private void Start()
    {
        PlayfabManager.Instance.LoginOnStart();
    }

    private void lvlSelectPressed()
    {
        UI_Manager.Instance.OpenMenu("LevelSelectPage");
    }
    private void settingsPressed()
    {
        UI_Manager.Instance.OpenMenu("SettingPage");
    }

    private void accountPressed()
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