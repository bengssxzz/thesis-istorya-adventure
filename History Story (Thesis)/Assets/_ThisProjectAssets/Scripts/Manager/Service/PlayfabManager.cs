using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using System;

public class PlayfabManager : Singleton<PlayfabManager>
{
    public event Action<LoginResult> OnSuccessLogin;
    public event Action<RegisterPlayFabUserResult> OnSuccessRegister;
    public event Action<string> OnError;

    private bool isCharacterNameSet = false;

    public void RegisterAccount(string username, string email, string password)
    {
        //Register account

        var request = new RegisterPlayFabUserRequest
        {
            Username = username,
            DisplayName = username,
            Email = email,
            Password = password,
            RequireBothUsernameAndEmail = false
        };

        PlayFabClientAPI.RegisterPlayFabUser(request, SuccessRegister, ErrorThrow);


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



    public void ResetPassword(string username, string emailAddress)
    {
        //Forgot account
    }



    private void SuccessRegister(RegisterPlayFabUserResult result)
    {
        //When successfuly registered account
        OnSuccessRegister?.Invoke(result);
    }

    private void SuccessLogin(LoginResult result)
    {
        //When successfuly login using email and username
        GetUserDataRequest request = new GetUserDataRequest()
        {
            PlayFabId = result.PlayFabId
        };

        Debug.Log("SUCCESS LOGIN");
        PlayFabClientAPI.GetUserData(request, OnGetUserDataSuccess, ErrorThrow);

        //OnSuccessLogin?.Invoke(result);
    }

    private void ErrorThrow(PlayFabError error)
    {
        //Error
        Debug.Log(error);

        OnError?.Invoke(error.ToString());
    }




    //check if the login player has character name saved in the cloud.
    //If not exist then direct them to set character name page
    private void OnGetUserDataSuccess(GetUserDataResult result)
    {
        // Check if the player has a cloud key indicating their name is set
        if (result.Data.ContainsKey("PlayerName"))
        {
            isCharacterNameSet = true;
            Debug.Log("Player name is already set.");
            // Proceed with the game
        }
        else
        {
            Debug.Log("Player name is not set.");
            // Redirect the player to set their name
        }
    }















}
