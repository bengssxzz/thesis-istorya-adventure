using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using PlayFab.ClientModels;
using System;

public class Setup_Signup : UIPages
{
    [SerializeField] private TMP_InputField userName;
    [SerializeField] private TMP_InputField emailAddress;
    [SerializeField] private TMP_InputField password;
    [SerializeField] private TMP_InputField confirmPassword;

    [SerializeField] private TextMeshProUGUI errorTxt;
    [SerializeField] private Button signupBtn, loginBtn;
    [SerializeField] private UIPages loginPage;



    public override void ShowBehavior()
    {
        signupBtn.onClick.AddListener(OnPressSignup);

        loginBtn.onClick.AddListener(() => {
            loginPage.UIEnabled();
            this.UIDisabled();
        
        });

        //PlayfabManager.Instance.OnSuccessRegister += OnSuccessRegister;
        //PlayfabManager.Instance.OnError += OnErrorThrow;
    }

  

    public override void HideBehavior()
    {
        signupBtn.onClick.RemoveAllListeners();
        loginBtn.onClick.RemoveAllListeners();

        //PlayfabManager.Instance.OnSuccessRegister -= OnSuccessRegister;
        //PlayfabManager.Instance.OnError -= OnErrorThrow;

    }

    private void OnErrorThrow(string errorString)
    {
        errorTxt.gameObject.SetActive(true);
        errorTxt.text = errorString;

    }

    private void OnSuccessRegister(RegisterPlayFabUserResult result)
    {
        //Success
        Debug.Log("Register account Success!!");

        loginPage.UIEnabled();
        this.UIDisabled();
    }

    private void OnPressSignup()
    {
        //Sign up account
        if(password.text != confirmPassword.text)
        {
            //Password is not match
            OnErrorThrow("Password dont match");
            return;
        }

        //PlayfabManager.Instance.RegisterAccount(userName.text, emailAddress.text, password.text);
    }
    private void OnPressLogin()
    {
        //Back to login page
    }
}
