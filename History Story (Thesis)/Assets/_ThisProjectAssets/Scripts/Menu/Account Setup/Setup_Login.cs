using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using PlayFab.ClientModels;

public class Setup_Login : UIPages
{
    [SerializeField] private TMP_InputField userEmail;
    [SerializeField] private TMP_InputField password;

    [SerializeField] private TextMeshProUGUI errorTxt;
    [SerializeField] private Button LoginBtn, signupBtn, guestBtn;
    [SerializeField] private UIPages guestPage, signupPage;



    public override void ShowBehavior()
    {
        LoginBtn.onClick.AddListener(PressLogin);

        //signupBtn.onClick.AddListener(() => { 
        //    signupPage.UIEnabled();
        //    this.UIDisabled();
        
        //});

        //guestBtn.onClick.AddListener(() => {
        //    guestPage.UIEnabled();
        //    this.UIDisabled();

        //});

        //PlayfabManager.Instance.OnSuccessLogin += OnSuccessLogin;
        //PlayfabManager.Instance.OnError += OnErrorThrow;

    }
    public override void HideBehavior()
    {
        LoginBtn.onClick.RemoveAllListeners();

        //PlayfabManager.Instance.OnSuccessLogin -= OnSuccessLogin;
        //PlayfabManager.Instance.OnError -= OnErrorThrow;
    }

    private void Awake()
    {
       
    }

    private void Start()
    {
        guestPage?.UIDisabled();
        signupPage?.UIDisabled();

        //Initialize account
        AccountManager.InitializeAccount();
    }

    private void OnErrorThrow(string errorString)
    {
        errorTxt.gameObject.SetActive(true);
        errorTxt.text = errorString;

    }
    private void OnSuccessLogin(LoginResult obj)
    {
        //Success
        Debug.Log("Login Success!!");

        //TODO: To go scene main menu
        SceneTransitionManager.Instance.SceneTransitionInGame("MainMenu");
    }

    private void PressLogin()
    {
        Debug.Log("PRESSING LOGIN BTN");

        //AccountManager.LoginAccount(userEmail.text, password.text);
        //PlayfabManager.Instance.LoginAccount(userEmail.text, password.text);
    }

}