using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using System;
using Newtonsoft.Json;
using UnityEngine.Events;

[Serializable]
public class PlayerUserData
{
    public string userId;
    public string userIdentifier;
    public string password;
}

public class PlayfabManager : Singleton<PlayfabManager>
{
    public event Action<LoginResult> OnLoginSuccess;

    public event Action OnGetDataResultSuccess;



    private void SaveUserData(PlayerUserData userData)
    {
        ES3Settings settings = new ES3Settings()
        {
            encryptionPassword = "secret_key",
            encryptionType = ES3.EncryptionType.AES
        };

        ES3.Save("user_data", userData, "Secretkey.keys", settings);
    }
    public PlayerUserData GetUserData()
    {
        ES3Settings settings = new ES3Settings()
        {
            encryptionPassword = "secret_key",
            encryptionType = ES3.EncryptionType.AES
        };

        if (ES3.FileExists("Secretkey.keys"))
        {
            Debug.Log("FILE EXIST");
            PlayerUserData u_data = ES3.Load<PlayerUserData>("user_data", filePath: "Secretkey.keys", settings);

            return u_data;
        }
        Debug.LogError("USER DATA DOESNT EXIST");
        return null;
    }

    private void CheckIfLogIn()
    {
        if (!PlayFabClientAPI.IsClientLoggedIn())
        {
            LoginUsingUsername(GetUserData().userIdentifier, GetUserData().password);
        }
    }
    public bool IsUserLogin()
    {
        if(GetUserData() == null || !PlayFabClientAPI.IsClientLoggedIn())
        {
            return false;
        }

        return true;
    }
    public void LoginOnStart()
    {
        if(GetUserData() == null)
        {
            //Go to login page
            Debug.Log("THERE ARE NO USERDATA SAVED IN LOCAL DATA");
        }
        else
        {
            LoginUsingUsername(GetUserData().userIdentifier, GetUserData().password);
        }
    }


    //Creating a new account
    public void CreateNewAccount(string username, string email, string password)
    {
        RegisterPlayFabUserRequest newAccount = new RegisterPlayFabUserRequest()
        {
            Username = username,
            Email = email,
            Password = password,
            RequireBothUsernameAndEmail = true
        };


        PlayFabClientAPI.RegisterPlayFabUser(newAccount,
            (result) =>
            {
                Debug.Log("CREATE NEW ACCOUNT SUCCESS");

                //If success then login automatically
                LoginUsingUsername(username, password);
            },
            (error) =>
            {
                Debug.LogError("ERROR: " + error.ErrorMessage);
            });


    }

    public void LoginUsingUsername(string username, string password)
    {
        LoginWithPlayFabRequest userName_Login = new LoginWithPlayFabRequest()
        {
            Username = username,
            Password = password,
        };

        PlayFabClientAPI.LoginWithPlayFab(userName_Login,
            (result) =>
            {
                Debug.Log("LOGIN USING USERNAME SUCCESS");
                SaveUserData(new PlayerUserData()
                {
                    userId = result.PlayFabId,
                    userIdentifier = username,
                    password = password
                });

                OnLoginSuccess?.Invoke(result);
            },
            (error) =>
            {
                Debug.LogError("ERROR: " + error.ErrorMessage);
            });
    }
    public void LoginUsingEmail(string email, string password)
    {
        LoginWithEmailAddressRequest email_Login = new LoginWithEmailAddressRequest()
        {
            Email = email,
            Password = password
        };

        PlayFabClientAPI.LoginWithEmailAddress(email_Login,
            (result) =>
            {
                Debug.Log("LOGIN USING EMAIL SUCCESS");
                SaveUserData(new PlayerUserData()
                {
                    userId = result.PlayFabId,
                    userIdentifier = email,
                    password = password
                });

                OnLoginSuccess?.Invoke(result);
            },
            (error) =>
            {
                Debug.LogError("ERROR: " + error.ErrorMessage);
            });
    }



    //Get data
    public void GetCloudUserData(string key, UnityAction<string, string> resultCallback)
    {
        CheckIfLogIn();

        GetUserDataRequest userdata_request = new GetUserDataRequest()
        {
            PlayFabId = GetUserData().userId,
            Keys = new List<string>() { key }
        };


        PlayFabClientAPI.GetUserData(userdata_request,
            (result) =>
            {
                //Get data success
                Debug.Log("RETRIEVE USER DATA SUCCESS");
                if (result.Data.ContainsKey(key))
                {
                    resultCallback?.Invoke(key, result.Data[key].Value);
                }
            },
            (error) =>
            {
                Debug.Log("COULD NOT RETRIEVE USER DATA: " + error.ErrorMessage);
                resultCallback?.Invoke(key, null);
            });


    }
    public void SetCloudUserData(string key, string value)
    {
        CheckIfLogIn();


        UpdateUserDataRequest updatedata_request = new UpdateUserDataRequest()
        {
            Data = new Dictionary<string, string>() { { key, value } }
        };


        PlayFabClientAPI.UpdateUserData(updatedata_request,
            (result) =>
            {
                Debug.Log($"{key} KEY IS SUCCESSFULLY SAVED IN CLOUD");
            },
            (error) =>
            {
                Debug.LogError($"{key} KEY SAVE UNSUCCESSFUL, ERROR: " + error.ErrorMessage);
            });

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

    public void SaveDataOnPlayfab(Dictionary<string, string> saveData, UnityEvent<UpdateUserDataResult> resultCallBack = null)
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
