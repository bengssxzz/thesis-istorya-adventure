using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using System;
using UnityEngine.Events;

public static class AccountManager
{
    private static string androidID = string.Empty;
    private static string iosID = string.Empty;
    private static string customID = string.Empty;

    private static string playerID = string.Empty;
    private static string usernameEmail = string.Empty;

    public static bool isLoggedOut = true;

    public static string GetPlayerID { get { return playerID; } }



    public static void InitializeAccount()
    {
        isLoggedOut = ES3.Load("logout-states", true);
        androidID = ES3.Load("android-id", defaultValue: string.Empty);
        iosID = ES3.Load("ios-id", defaultValue: string.Empty);
        customID = ES3.Load("custom-id", defaultValue: string.Empty);

        playerID = ES3.Load("player-id", defaultValue: string.Empty);
        usernameEmail = ES3.Load("username-email", defaultValue: string.Empty);

        if (isLoggedOut )
        {
            //is log out
           
        }
        else if (!isLoggedOut && (androidID != null || iosID != null || customID != null) && playerID != null )
        {
            //not log out
            Debug.Log($"Stay login {GetPlayerID}");
            SceneTransitionManager.Instance.SceneTransitionInGame("MainMenu");
        }
    }

    private static void SaveLoginData(string email_username) //saving data when log in
    {
        ES3.Save("username-email", email_username);
        ES3.Save("logout-states", false);

        isLoggedOut = false;
    }


    #region Account Authentication
    private static bool CheckForSupportedMobilePlatform() //Check for supported mobile platform
    {
        return Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer;
    }
    private static bool GetDeviceID(bool silent = false) //Get device id
    {
        if (CheckForSupportedMobilePlatform())
        {
#if UNITY_ANDROID
            //http://answers.unity3d.com/questions/430630/how-can-i-get-android-id-.html
            AndroidJavaClass clsUnity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject objActivity = clsUnity.GetStatic<AndroidJavaObject>("currentActivity");
            AndroidJavaObject objResolver = objActivity.Call<AndroidJavaObject>("getContentResolver");
            AndroidJavaClass clsSecure = new AndroidJavaClass("android.provider.Settings$Secure");
            androidID = clsSecure.CallStatic<string>("getString", objResolver, "android_id");
#endif

#if UNITY_IPHONE
			iosID = UnityEngine.iOS.Device.vendorIdentifier;
#endif
            return true;
        }
        else
        {
            customID = SystemInfo.deviceUniqueIdentifier;
            return false;
        }

    }
    public static bool ValidatePassword(string password1, string password2, int validCount = 5) //Validation for password
    {
        if(password1.Length > validCount)
        {
            //Valid password count
            return password1 == password2;
        }

        return false;
    }
    private static void SuccessLogin(LoginResult result)
    {
        isLoggedOut = false;
        playerID = result.PlayFabId;

        ES3.Save("player-id", playerID);
        ES3.Save("logout-states", isLoggedOut);
    }
    private static void OnLoginError(PlayFabError error) //PlayFabError
    {
        string errorMessage;

        if (error.Error == PlayFabErrorCode.InvalidParams && error.ErrorDetails.ContainsKey("Password"))
            errorMessage = "Invalid Password";
        else if (error.Error == PlayFabErrorCode.InvalidParams && error.ErrorDetails.ContainsKey("Username") || (error.Error == PlayFabErrorCode.InvalidUsername))
            errorMessage = "Invalid Username";
        else if (error.Error == PlayFabErrorCode.AccountBanned)
            errorMessage = "Account Banned";
        else if (error.Error == PlayFabErrorCode.InvalidUsernameOrPassword)
            errorMessage = "Invalid Username or Password";
        else
            errorMessage = string.Format("Error {0}: {1}", error.HttpCode, error.ErrorMessage);

        //if (OnLoginFail != null)
        //    OnLoginFail(errorMessage, MessageDisplayStyle.error);

        // reset these IDs (a hack for properly detecting if a device is claimed or not, we will have an API call for this soon)
        //PlayFabLoginCalls.android_id = string.Empty;
        //PlayFabLoginCalls.ios_id = string.Empty;

    }



    public static void LoginWithDeviceId(bool createAcount, UnityAction errCallback)
    {
        Action<bool> processResponse = (bool response) =>
        {
            if (response && GetDeviceID())
            {
                if (!string.IsNullOrEmpty(androidID))
                {
                    Debug.Log("Using Android Device ID: " + androidID);
                    var request = new LoginWithAndroidDeviceIDRequest
                    {
                        AndroidDeviceId = androidID,
                        TitleId = PlayFabSettings.TitleId,
                        CreateAccount = createAcount
                    };

                    //DialogCanvasController.RequestLoadingPrompt(PlayFabAPIMethods.GenericLogin);
                    PlayFabClientAPI.LoginWithAndroidDeviceID(request, SuccessLogin, (PlayFabError error) =>
                    {
                        //ERROR

                        //if (errCallback != null && error.Error == PlayFabErrorCode.AccountNotFound)
                        //{
                        //    errCallback();
                        //    PF_Bridge.RaiseCallbackError("Account not found, please select a login method to continue.", PlayFabAPIMethods.GenericLogin, MessageDisplayStyle.none);
                        //}
                        //else
                        //{
                        //    OnLoginError(error);
                        //}

                    });
                }
                else if (!string.IsNullOrEmpty(iosID))
                {
                    Debug.Log("Using IOS Device ID: " + iosID);
                    var request = new LoginWithIOSDeviceIDRequest
                    {
                        DeviceId = iosID,
                        TitleId = PlayFabSettings.TitleId,
                        CreateAccount = createAcount
                    };

                    //DialogCanvasController.RequestLoadingPrompt(PlayFabAPIMethods.GenericLogin);
                    PlayFabClientAPI.LoginWithIOSDeviceID(request, SuccessLogin, (PlayFabError error) =>
                    {
                        //ERROR

                        //if (errCallback != null && error.Error == PlayFabErrorCode.AccountNotFound)
                        //{
                        //    errCallback();
                        //    PF_Bridge.RaiseCallbackError("Account not found, please select a login method to continue.", PlayFabAPIMethods.GenericLogin, MessageDisplayStyle.none);
                        //}
                        //else
                        //{
                        //    OnLoginError(error);
                        //}
                    });
                }
            }
            else
            {
                Debug.Log("Using custom device ID: " + customID);
                var request = new LoginWithCustomIDRequest
                {
                    CustomId = customID,
                    TitleId = PlayFabSettings.TitleId,
                    CreateAccount = createAcount
                };

                //DialogCanvasController.RequestLoadingPrompt(PlayFabAPIMethods.GenericLogin);
                PlayFabClientAPI.LoginWithCustomID(request, SuccessLogin, error =>
                {
                    //ERROR

                    //if (errCallback != null && error.Error == PlayFabErrorCode.AccountNotFound)
                    //{
                    //    errCallback();
                    //    PF_Bridge.RaiseCallbackError("Account not found, please select a login method to continue.", PlayFabAPIMethods.GenericLogin, MessageDisplayStyle.none);
                    //}
                    //else
                    //{
                    //    OnLoginError(error);
                    //}
                });
            }
        };

        processResponse(true);
        //DialogCanvasController.RequestConfirmationPrompt("Login With Device ID", "Logging in with device ID has some issue. Are you sure you want to contine?", processResponse);
    }
    public static void LoginAccount(string email_username, string password)
    {
        //Login account
        email_username = email_username.Trim();
        if (email_username.Contains("@") && email_username.Contains("."))
        {
            //User input their email
            var request = new LoginWithEmailAddressRequest
            {
                Email = email_username,
                Password = password
            };

            PlayFabClientAPI.LoginWithEmailAddress(request, SuccessLogin,
                error =>
                {

                });
        }
        else
        {
            //User input their username
            LoginWithPlayFabRequest request = new LoginWithPlayFabRequest
            {
                Username = email_username,
                Password = password
            };

            PlayFabClientAPI.LoginWithPlayFab(request, SuccessLogin,
                error =>
                {

                });
        }
    }
    public static void SignupAccount(string email, string username, string password)
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

        PlayFabClientAPI.RegisterPlayFabUser(request,
            success =>
            {
                //success register
            },
            error =>
            {
                //Error
            });
    }
    public static void Logout()
    {
        //if (OnLoginFail != null)
        //    OnLoginFail("Logout", MessageDisplayStyle.none);

        androidID = string.Empty;
        iosID = string.Empty;
        customID = string.Empty;

        //TODO maybe not OK to delete all, but if it works out this is easy
        // hack, manually deleteing keys to work across android devices.
        PlayerPrefs.DeleteKey("LastDeviceIdUsed");
        PlayerPrefs.DeleteKey("TitleId");

        isLoggedOut = true;
        ES3.Save("logout-states", isLoggedOut);
        //TODO make sure the delay here is long enough to shut down the active game systems
        //SceneController.Instance.RequestSceneChange(SceneController.GameScenes.Authenticate, .333f);
    }

    #endregion



    public static void RecoveryEmail()
    {

    }
    public static void ChangeUserName()
    {

    }
    public static void AddUserNameAndPassword(string user, string pass, string email, UnityAction<AddUsernamePasswordResult> callback = null)
    {
        var request = new AddUsernamePasswordRequest
        {
            Email = email,
            Password = pass,
            Username = user
        };
        
        //DialogCanvasController.RequestLoadingPrompt(PlayFabAPIMethods.AddUsernamePassword);
        //PlayFabClientAPI.AddUsernamePassword(request, result =>
        //{
        //    if (callback != null)
        //        callback(result);
        //    PF_Bridge.RaiseCallbackSuccess(string.Empty, PlayFabAPIMethods.AddUsernamePassword, MessageDisplayStyle.none);
        //}, PF_Bridge.PlayFabErrorCallback);
    }

}
