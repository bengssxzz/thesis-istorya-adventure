using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using System;
using Newtonsoft.Json;
using UnityEngine.Events;
using SimpleSQL;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using UnityEngine.Networking;
using System.Linq;

[Serializable]
public class PlayerUserData
{
    public string userId;
    public string displayerName;

    public string userIdentifier;
    public string password;
}

[Serializable]
public class LeaderboardFields
{
    [PrimaryKey, Unique] public int id { get; set; }
    public string p_name { get; set; }
    public int p_score { get; set; }
    public string p_playfab_id { get; set; }
}


public class PlayfabManager : Singleton<PlayfabManager>
{
    const string PLAYER_DATA_FILE = "PlayerData.thesis";
    const string PLAYER_DATA_KEY = "player_key";

    public event Action<LoginResult> OnLoginSuccess;
    public event Action OnLogoutSuccess;

    public event Action OnUpdateLeaderboard;
    public event Action OnGetDataResultSuccess;


    [SerializeField] private SimpleSQLManager sqlManagerLeaderboard;


    private void CheckIfLogIn()
    {
        if (!PlayFabClientAPI.IsClientLoggedIn())
        {
            var playerData = GetUserDataAccount();
            //LoginUsingUsername(GetUserDataAccount().userIdentifier, GetUserDataAccount().password);
            LoginUsingUsername(playerData.userIdentifier, playerData.password);
        }
    }
    public bool IsUserLogin()
    {
        var getuserData = GetUserDataAccount();

        if (getuserData == null || !PlayFabClientAPI.IsClientLoggedIn())
        {
            return false;
        }
        return true;
    }
    public void LoginOnStart()
    {
        var playerData = GetUserDataAccount();

        if (playerData == null)
        {
            //Go to login page
            Debug.Log("THERE ARE NO USERDATA SAVED IN LOCAL DATA");
        }
        else
        {
            LoginUsingUsername(playerData.userIdentifier, playerData.password);
        }
    }



    #region SAVE/LOAD/DELETE SAVE USER DATA ACCOUNT (LOCAL)
    //private void SaveUserDataAccount(PlayerUserData userData)
    //{
    //    ES3Settings settings = new ES3Settings()
    //    {
    //        encryptionPassword = "secret_key",
    //        encryptionType = ES3.EncryptionType.AES
    //    };

    //    ES3.Save("user_data", userData, "Secretkey.keys", settings);
    //}
    //public PlayerUserData GetUserDataAccount()
    //{
    //    ES3Settings settings = new ES3Settings()
    //    {
    //        encryptionPassword = "secret_key",
    //        encryptionType = ES3.EncryptionType.AES
    //    };

    //    if (ES3.FileExists("Secretkey.keys"))
    //    {
    //        Debug.Log("FILE EXIST");
    //        PlayerUserData u_data = ES3.Load<PlayerUserData>("user_data", filePath: "Secretkey.keys", settings);

    //        return u_data;
    //    }
    //    Debug.LogError("USER DATA DOESNT EXIST");
    //    return null;
    //}
    private async UniTask SaveUserDataAccount(PlayerUserData userData)
    {
        ES3Settings settings = new ES3Settings()
        {
            encryptionPassword = "secret_key",
            encryptionType = ES3.EncryptionType.AES
        };

        await UniTask.RunOnThreadPool(() => ES3.Save("user_data", userData, "Secretkey.keys", settings));
    }
    public PlayerUserData GetUserDataAccount()
    {
        ES3Settings settings = new ES3Settings()
        {
            encryptionPassword = "secret_key",
            encryptionType = ES3.EncryptionType.AES
        };

        if (ES3.FileExists("Secretkey.keys"))
        {
            Debug.Log("FILE EXISTS");
            // Use UniTask to load the data asynchronously
            return ES3.Load<PlayerUserData>("user_data", filePath: "Secretkey.keys", settings);
        }
        else
        {
            Debug.LogError("USER DATA DOES NOT EXIST");
            return null;
        }
    }


    public void DeleteUserDataAccount()
    {
        if (ES3.FileExists("Secretkey.keys"))
        {
            ES3.DeleteFile("Secretkey.keys");
            Debug.Log("DELETING A SAVE DATA FILE: SUCCESS");
        }
        else
        {
            Debug.LogWarning("THERE NO FILE TO BE DELETED");
        }
    }


    #endregion

    #region PLAYER CREATE/LOGIN/LOGOUT ACCOUNT
    //Creating a new account
    public void CreateNewAccount(string username, string email, string password)
    {
        RegisterPlayFabUserRequest newAccount = new RegisterPlayFabUserRequest()
        {
            Username = username,
            Email = email,
            Password = password,
            DisplayName = username,
            
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
            async (result) =>
            {
                Debug.Log("LOGIN USING USERNAME SUCCESS");

                var profileInfo = await GetProfileInfo(result.PlayFabId);

                var savePlayerData = new PlayerUserData
                {
                    userId = result.PlayFabId,
                    displayerName = profileInfo.PlayerProfile.DisplayName,
                    userIdentifier = username,
                    password = password
                };

                try
                {
                    await SaveUserDataAccount(savePlayerData);
                    Debug.Log("USER DATA IS SAVED SUCCESSFULLY.");

                    OnLoginSuccess?.Invoke(result);
                }
                catch(Exception ex)
                {
                    Debug.LogError("FAILED TO SAVE USER DATA: " + ex.Message);
                }
                
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
            async (result) =>
            {
                Debug.Log("LOGIN USING EMAIL SUCCESS");

                var profileInfo = await GetProfileInfo(result.PlayFabId);

                var savePlayerData = new PlayerUserData
                {
                    userId = result.PlayFabId,
                    displayerName = profileInfo.PlayerProfile.DisplayName,
                    userIdentifier = email,
                    password = password
                };

                try
                {
                    await SaveUserDataAccount(savePlayerData);
                    Debug.Log("USER DATA IS SAVED SUCCESSFULLY.");

                    OnLoginSuccess?.Invoke(result);
                }
                catch (Exception ex)
                {
                    Debug.LogError("FAILED TO SAVE USER DATA: " + ex.Message);
                }
            },
            (error) =>
            {
                Debug.LogError("ERROR: " + error.ErrorMessage);
            });
    }

    public void LogoutAccount()
    {
        PlayFabClientAPI.ForgetAllCredentials();
        DeleteUserDataAccount();

        OnLogoutSuccess?.Invoke();
    }
    #endregion

    #region PLAYER GET/SET DATA IN CLOUD
    //Get data
    public async UniTask<string> GetDataInUserCloud(string key)
    {
        var checkInternet = await CheckInternetConnectionAsync();

        if (!checkInternet) 
        {
            Debug.LogWarning("THERE ARE NO INTERNET CONNECTION");
            return null; 
        }

        var tcs = new UniTaskCompletionSource<string>();

        GetUserDataRequest userdata_request = new GetUserDataRequest()
        {
            PlayFabId = GetUserDataAccount().userId,
            Keys = new List<string>() { key }
        };

        PlayFabClientAPI.GetUserData(userdata_request,
            (result) =>
            {
            // Get data success
            Debug.Log("RETRIEVE USER DATA SUCCESS");
                if (result.Data.ContainsKey(key))
                {
                    tcs.TrySetResult(result.Data[key].Value);
                }
                else
                {
                    tcs.TrySetResult(null);
                }
            },
            (error) =>
            {
                Debug.Log("COULD NOT RETRIEVE USER DATA: " + error.ErrorMessage);
                tcs.TrySetException(new Exception(error.ErrorMessage));
            });

        return await tcs.Task;
    }
    public async UniTaskVoid SetDataInUserCloud(string key, string value)
    {
        var checkInternet = await CheckInternetConnectionAsync();

        if (!checkInternet)
        {
            Debug.LogWarning("THERE IS NO INTERNET CONNECTION");
            return;
        }

        var tcs = new UniTaskCompletionSource<bool>();

        UpdateUserDataRequest updatedata_request = new UpdateUserDataRequest()
        {
            Data = new Dictionary<string, string>() { { key, value } }
        };

        PlayFabClientAPI.UpdateUserData(updatedata_request,
            (result) =>
            {
                Debug.Log($"{key} KEY IS SUCCESSFULLY SAVED IN CLOUD");
                tcs.TrySetResult(true);
            },
            (error) =>
            {
                Debug.LogError($"{key} KEY SAVE UNSUCCESSFUL, ERROR: {error.ErrorMessage}");
                tcs.TrySetException(new Exception(error.ErrorMessage));
            });

        await tcs.Task; // This line is removed
    }

    #endregion

    #region CREATE BACKUP/RETREIVE DATA IN CLOUD

    public void SavePlayerDataCloud() //Save player data in cloud
    {
        var jsonPlayerData = ES3.LoadRawString(filePath: PLAYER_DATA_FILE);

        SetDataInUserCloud(PLAYER_DATA_KEY, jsonPlayerData).Forget();
    }
    public async UniTask RequestRetrievePlayerData() //Request for retrieving data in cloud
    {
        try
        {
            var getData = await GetDataInUserCloud(PLAYER_DATA_KEY);

            Debug.Log($"SUCCESS RETRIEVE: KEY: {PLAYER_DATA_KEY}");
            ES3.SaveRaw(getData, PLAYER_DATA_FILE);
        }
        catch (Exception ex)
        {
            Debug.LogError("FAILED GETTING A DATA: " + ex.Message);
            throw; // Rethrow the exception to be caught by the caller
        }
    }


    #endregion

    #region LEADERBOARD
    //Leaderboard
    public async UniTask SetLeaderboardPlayfab(int points)
    {
        var request = new UpdatePlayerStatisticsRequest()
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "Istorya Adventure Leaderboard",
                    Value = points
                }
            }
        };

        var taskToComplete = new UniTaskCompletionSource<UpdatePlayerStatisticsResult>();

        PlayFabClientAPI.UpdatePlayerStatistics(request, 
            result => taskToComplete.TrySetResult(result), 
            error =>taskToComplete.TrySetException(new Exception(error.ErrorMessage)));


        try
        {
            var result = await taskToComplete.Task;

            Debug.Log("LEADER BOARD IS UPDATED SUCCESSFULLY");
        }
        catch(Exception ex)
        {
            Debug.LogError("FAILED TO UPDATE ERROR: " + ex);
        }



    }
    public async UniTask UpdateLeaderboardInSqlite()
    {
        var request = new GetLeaderboardRequest
        {
            StatisticName = "Istorya Adventure Leaderboard",
            StartPosition = 0
        };

        var tcs = new UniTaskCompletionSource<GetLeaderboardResult>();

        PlayFabClientAPI.GetLeaderboard(request,
            result => tcs.TrySetResult(result),
            error => tcs.TrySetException(new Exception(error.ErrorMessage)));

        try
        {
            var result = await tcs.Task;
            Debug.Log("Leaderboard fetched successfully.");

            var deleteTableSQL = "DELETE FROM Leaderboard";
            sqlManagerLeaderboard.Execute(deleteTableSQL);

            foreach (var item in result.Leaderboard)
            {
                var updateTableSQL = "INSERT INTO Leaderboard (id, p_name, p_score, p_playfab_id) VALUES (?, ?, ?, ?)";

                int playerPosition = item.Position + 1; //id
                string playerName = string.IsNullOrEmpty(item.DisplayName) ? item.PlayFabId : item.DisplayName; //p_name
                int playerScore = item.StatValue; //p_score
                string playerPlayfabId = item.PlayFabId; //p_playfab_id

                sqlManagerLeaderboard.Execute(updateTableSQL, playerPosition, playerName, playerScore, playerPlayfabId);

            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to fetch leaderboard: {ex.Message}");
        }
    }

    public async UniTaskVoid UpdateLeaderboard()
    {
        var internetConnection = await CheckInternetConnectionAsync();

        if (IsUserLogin())
        {
            if (internetConnection)
            {
                //There are internet connection
                Debug.Log("THERE ARE INTERNET CONNECTION");
                int playerTotalScore = GameManager.Instance.GetTotalScoreInChapterLevels();

                Debug.Log("SET THE PLAYER SCORE TO LEADERBOARD");
                await SetLeaderboardPlayfab(playerTotalScore);

                await UniTask.Delay(1000);

                Debug.Log("UPDATE THE SCORE TO LEADERBOARD");
                await UpdateLeaderboardInSqlite();

                OnUpdateLeaderboard?.Invoke();
            }
            else
            {
                Debug.LogError("THERE ARE NO INTERNET CONNECTION");

            }
        }
        else
        {
            Debug.LogError("THERE ARE NO ACCOUNT SIGN IN");
        }

    }


    //SQLite
    public async UniTask<List<LeaderboardFields>> RequestLeaderboardSQLDatabase(int requestRowsCount)
    {
        // Construct the SQL query
        string sql = string.Format("SELECT * FROM Leaderboard LIMIT {0}", requestRowsCount);


        // Execute the query on a background thread
        List<LeaderboardFields> leaderBoardList = sqlManagerLeaderboard.Query<LeaderboardFields>(sql);

        await UniTask.Yield();

        // Return the result
        return new List<LeaderboardFields>(leaderBoardList);
    }
    public async UniTask<LeaderboardFields> GetPlayerInfoInLeaderboard(string playfabID)
    {
        string sql = string.Format("SELECT * FROM Leaderboard", playfabID);

        //LeaderboardFields playerInfo = sqlManagerLeaderboard.Query<LeaderboardFields>(sql).FirstOrDefault(x => x.p_playfab_id == playfabID);
        List<LeaderboardFields> leaderboard = sqlManagerLeaderboard.Query<LeaderboardFields>(sql);

        await UniTask.Yield();


        var playerInfo = leaderboard.FirstOrDefault(x => x.p_playfab_id == playfabID);


        if (playerInfo != null)
        {
            return playerInfo;
        }
        else
        {
            Debug.LogWarning($"THERE ARE NO {playfabID} PLAYFAB ID FOUND IN THE LEADERBOARD");
            return null;

        }
    }


    #endregion

    #region GET USER DATA

    private async UniTask<GetPlayerProfileResult> GetProfileInfo(string playerID)
    {
        var request = new GetPlayerProfileRequest
        {
            PlayFabId = playerID,
            ProfileConstraints = new PlayerProfileViewConstraints
            {
                ShowDisplayName = true
            }
        };

        var taskToComplete = new UniTaskCompletionSource<GetPlayerProfileResult>();

        PlayFabClientAPI.GetPlayerProfile
            (
                request,
                result => taskToComplete.TrySetResult(result),
                error => taskToComplete.TrySetException(new Exception(error.ErrorMessage))
            );

        try
        {
            var result = await taskToComplete.Task;
            Debug.Log("PLAYER PROFILE INFO IS SUCCESSFULY RETRIEVED");
            return result;
        }
        catch (Exception ex)
        {
            Debug.Log("FAILED TO RETRIEVE PLAYER PROFILE: " + ex);
            return null;
        }
    }


    #endregion



    private static async UniTask<bool> CheckInternetConnectionAsync()
    {
        const string echoServer = "http://google.com";

        bool result = false;

        using (var request = UnityWebRequest.Head(echoServer))
        {
            request.timeout = 5;
            await request.SendWebRequest();

            result = request.result == UnityWebRequest.Result.Success && request.responseCode == 200;
        }

        return result;
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
