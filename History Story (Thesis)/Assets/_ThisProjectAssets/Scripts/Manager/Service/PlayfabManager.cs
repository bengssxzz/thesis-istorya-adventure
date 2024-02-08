using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using System;
using Newtonsoft.Json;
using UnityEngine.Events;


public class PlayfabManager : Singleton<PlayfabManager>
{
    public void SignUpNewAccount(string email, string username, string password, Action<RegisterPlayFabUserResult> resultCallBack, Action<PlayFabError> errorCallBack)
    {
        var request = new RegisterPlayFabUserRequest()
        {
            Email = email,
            Password = username,
            Username = password,
            RequireBothUsernameAndEmail = true
        };

        PlayFabClientAPI.RegisterPlayFabUser(request, (result) =>
        {
            Debug.Log("CREATED NEW ACCOUNT");
            resultCallBack?.Invoke(result);
        }, 
        (error) => 
        {
            errorCallBack?.Invoke(error);
        });

    }
    
    
    
    
    public void SignInWithEmail(string email, string password) //Sign in using email address
    {
        var request = new LoginWithEmailAddressRequest
        {
            Email = email,
            Password = password
        };

        PlayFabClientAPI.LoginWithEmailAddress(request, CheckCharacterName, ErrorThrow);
    }
    public void SignInWithUsername(string username, string password) //Sign in using username
    {
        //User input their username
        LoginWithPlayFabRequest request = new LoginWithPlayFabRequest
        {
            Username = username,
            Password = password
        };

        PlayFabClientAPI.LoginWithPlayFab(request, CheckCharacterName, ErrorThrow);
    }
    public void SignInWithDevice() //Sign in using device id
    {
        if (GetDeviceId(out string android_id, out string ios_id, out string custom_id))
        {
            //Android ID sign in
            if (!string.IsNullOrEmpty(android_id))
            {
                Debug.Log("Using Android Device ID: " + android_id);
                var androidRequest = new LoginWithAndroidDeviceIDRequest()
                {
                    AndroidDeviceId = android_id,
                    CreateAccount = true
                };

                PlayFabClientAPI.LoginWithAndroidDeviceID(androidRequest, CheckCharacterName, ErrorThrow);
            }

            //Iphone ID sign in
            else if (!string.IsNullOrEmpty(ios_id))
            {
                Debug.Log("Using IOS Device ID: " + ios_id);
                var iosRequest = new LoginWithIOSDeviceIDRequest()
                {
                    DeviceId = ios_id,
                    CreateAccount = true
                };

                PlayFabClientAPI.LoginWithIOSDeviceID(iosRequest, CheckCharacterName, ErrorThrow);
            }
        }
        else
        {
            Debug.Log("Using custom device ID: " + custom_id);

            var customIdRequest = new LoginWithCustomIDRequest()
            {
                CustomId = custom_id,
                CreateAccount = true
            };

            PlayFabClientAPI.LoginWithCustomID(customIdRequest, CheckCharacterName, ErrorThrow);
        }
    }


    

    private void CheckCharacterName(LoginResult obj)
    {
        Debug.Log("SUCCESS LOGIN");
    }

    public void SaveDataOnPlayfab(Dictionary<string, string> saveData, UnityEvent<UpdateUserDataResult> resultCallBack = null )
    {
        var requestData = new UpdateUserDataRequest
        {
            Data = saveData
        };

        PlayFabClientAPI.UpdateUserData(requestData, 
            (result) => 
            {
                if (resultCallBack != null)
                {
                    resultCallBack?.Invoke(result);
                }
                else
                {
                    Debug.Log($"SUCCESS UPDATE DATA");
                }
            },
            ErrorThrow);
    }
    

    private void ErrorThrow(PlayFabError error)
    {
        Debug.LogError(error.ErrorMessage);
    }





















    bool CheckForSupportedMobilePlatform() //Check if the current platform is mobile or not
    {
        return Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer;
    }
    bool GetDeviceId(out string android_id, out string ios_id, out string custom_id) //Getting the device id
    {
        android_id = string.Empty;
        ios_id = string.Empty;
        custom_id = string.Empty;

        if (CheckForSupportedMobilePlatform())
        {
#if UNITY_ANDROID
            AndroidJavaClass clsUnity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject objActivity = clsUnity.GetStatic<AndroidJavaObject>("currentActivity");
            AndroidJavaObject objResolver = objActivity.Call<AndroidJavaObject>("getContentResolver");
            AndroidJavaClass clsSecure = new AndroidJavaClass("android.provider.Settings$Secure");
            android_id = clsSecure.CallStatic<string>("getString", objResolver, "android_id");
#endif

#if UNITY_IPHONE
            ios_id = UnityEngine.iOS.Device.vendorIdentifier;
#endif
            return true;
        }
        else
        {
            custom_id = SystemInfo.deviceUniqueIdentifier;
            return false;
        }
    }




}
