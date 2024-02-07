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
    const string PLAYER_AUTHTOKENKEY = "PlayerTokenKey";

    [Header("For Sign in Page")]
    [SerializeField] private TextMeshProUGUI errorMessage;
    [SerializeField] private TMP_InputField emailIF;
    [SerializeField] private TMP_InputField passwordIF;
    [SerializeField] private MMTouchButton signInBtn;
    [SerializeField] private MMTouchButton signUpBtn;
    [SerializeField] private MMTouchButton guestSignInBtn;

    [Space(20)]
    [Header("For Anonymous Login")]
    [SerializeField] private MMTouchButton guestSigninBtn;






    private bool isCharacterNameSet = false;

    private void Awake()
    {
        signInBtn.ButtonReleased.AddListener(SignInBtnPressed);
        guestSigninBtn.ButtonReleased.AddListener(GuestSignInBtnPressed);
    }



    private void OnDisable()
    {
        signInBtn.ButtonReleased.RemoveListener(SignInBtnPressed);
        guestSigninBtn.ButtonReleased.RemoveListener(GuestSignInBtnPressed);
    }

    private void Start()
    {
        errorMessage.gameObject.SetActive(false);

        // Check if authentication token exists
        if (PlayerPrefs.HasKey(PLAYER_AUTHTOKENKEY))
        {
            Debug.Log("ACCESS TOKEN EXIST IN THIS DEVICE");
            string authToken = PlayerPrefs.GetString(PLAYER_AUTHTOKENKEY);
            // Use stored authentication token to automatically log in
            SignInWithAccessToken(authToken);
        }
        else
        {
            // Perform traditional login
            Debug.Log("THERE ARE NO ACCESS TOKEN SAVE IN THIS DEVICE");
        }

    }


    private void SignInBtnPressed()
    {
        Debug.Log("Pressing sign in btn");

        var email = emailIF.text;
        var password = passwordIF.text;

        SignInAccount(email, password);
    }
    private void GuestSignInBtnPressed()
    {
        SignInWithDevice();
    }


    #region SIGN IN SETUP
    private void SignInWithAccessToken(string authToken)
    {
        var request = new LoginWithCustomIDRequest
        {
            CustomId = authToken,
            CreateAccount = false // Do not create a new account if one does not exist
        };

        PlayFabClientAPI.LoginWithCustomID
            (
            request, //Request
            CheckCharacterName, //If success sign in
            (PlayFabError error) => //When Error
            {
                Debug.LogError("PLAYFAB ERROR: " + error);
                UI_Manager.Instance.OpenMenu("AccountSetup Menu");
            });
    }
    public void SignInAccount(string userIdentifier, string password)
    {
        //Login account

        userIdentifier = userIdentifier.Trim();
        if (userIdentifier.Contains("@") && userIdentifier.Contains("."))
        {
            //User input their email
            SignInWithEmail(userIdentifier, password);
        }
        else
        {
            //User input their username
            SignInWithUsername(userIdentifier, password);
        }
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
        
    private void SignInWithEmail(string email, string password) //Sign in using email address
    {
        var request = new LoginWithEmailAddressRequest
        {
            Email = email,
            Password = password
        };

        PlayFabClientAPI.LoginWithEmailAddress(request, CheckCharacterName, ErrorThrow);
    }
    private void SignInWithUsername(string username, string password) //Sign in using username
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

    #endregion



    private void CheckCharacterName(LoginResult resultData) //Check if the character name is already set up
    {
        Debug.Log("SUCCESS LOGIN");
        PlayerPrefs.SetString(PLAYER_AUTHTOKENKEY, resultData.PlayFabId); //Set the access token key


        //Check for data in cloud
        GetUserDataRequest requestData = new GetUserDataRequest()
        {
            PlayFabId = resultData.PlayFabId
        };

        PlayFabClientAPI.GetUserData(requestData, (GetUserDataResult userDataResult) =>
        {
            // Check if the player has a cloud key indicating their name is set
            if (userDataResult.Data.ContainsKey("PlayerName"))
            {
                isCharacterNameSet = true;
                Debug.Log("Player name is already set.");
                UI_Manager.Instance.OpenMenu("MainPage Menu");

                // Proceed with the game

            }
            else
            {
                Debug.Log("Player name is not set.");
                UI_Manager.Instance.OpenMenu("SetCharacterName Menu");
                // Redirect the player to set their name
            }
        }
        , ErrorThrow);
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
        errorMessage.gameObject.SetActive(true);
        errorMessage.text = error.ToString();

    }













}
