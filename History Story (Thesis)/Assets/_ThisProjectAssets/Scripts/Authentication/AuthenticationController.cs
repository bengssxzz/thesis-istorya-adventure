using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using UnityEngine.UI;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using System;

public class AuthenticationController : MonoBehaviour
{
    [Header("For Sign in Page")]
    [SerializeField] private TextMeshProUGUI errorMessage;
    [SerializeField] private TMP_InputField emailIF;
    [SerializeField] private TMP_InputField paswordIF;
    [SerializeField] private MMTouchButton signInBtn;
    [SerializeField] private MMTouchButton signUpBtn;
    [SerializeField] private MMTouchButton guestSignInBtn;


   

    private void Awake()
    {
        signInBtn.ButtonReleased.AddListener(SignInBtnPressed);
    }

    private void OnDisable()
    {
        signInBtn.ButtonReleased.RemoveListener(SignInBtnPressed);
    }

    private void Start()
    {
        
    }


    private void SignInBtnPressed()
    {
        Debug.Log("Pressing sign in btn");
    }

    public void LoginAccount(string username, string password)
    {
        //Login account

        username = username.Trim();
        if (username.Contains("@") && username.Contains("."))
        {
            //User input their email
            var request = new LoginWithEmailAddressRequest
            {
                Email = username,
                Password = password
            };

            PlayFabClientAPI.LoginWithEmailAddress(request, SuccessLogin, ErrorThrow);
        }
        else
        {
            //User input their username
            LoginWithPlayFabRequest request = new LoginWithPlayFabRequest
            {
                Username = username,
                Password = password
            };

            PlayFabClientAPI.LoginWithPlayFab(request, SuccessLogin, ErrorThrow);
        }
    }


    private void SuccessLogin(LoginResult result)
    {
        //When successfuly login using email and username
        GetUserDataRequest request = new GetUserDataRequest()
        {
            PlayFabId = result.PlayFabId
        };

        Debug.Log("SUCCESS LOGIN");

        //OnSuccessLogin?.Invoke(result);
    }

    private void ErrorThrow(PlayFabError error)
    {
        //Error
        Debug.Log(error);

    }













}
