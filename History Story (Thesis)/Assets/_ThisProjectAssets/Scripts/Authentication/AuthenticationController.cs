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
    [SerializeField] private RectTransform signin_page;
    [SerializeField] private TextMeshProUGUI signin_errorMessage;
    [SerializeField] private TMP_InputField signin_emailIF;
    [SerializeField] private TMP_InputField signin_passwordIF;
    [SerializeField] private MMTouchButton signin_signInBtn;
    [SerializeField] private MMTouchButton signin_goto_signUpBtn;

    [Space(20)]
    [Header("For Sign Up")]
    [SerializeField] private RectTransform signup_page;
    [SerializeField] private TextMeshProUGUI signup_errorMessage;
    [SerializeField] private TMP_InputField signup_emailIF;
    [SerializeField] private TMP_InputField signup_usernameIF;
    [SerializeField] private TMP_InputField signup_passwordIF;
    [SerializeField] private TMP_InputField signup_confirmPasswordIF;
    [SerializeField] private MMTouchButton signup_signUpBtn;
    [SerializeField] private MMTouchButton signup_backSignInBtn;

    //[Space(20)]
    //[Header("For Anonymous Login")]
    //[SerializeField] private MMTouchButton guestSigninBtn;



    private void Awake()
    {
        signin_signInBtn.ButtonReleased.AddListener(SignInBtnPressed);
        signup_signUpBtn.ButtonReleased.AddListener(SignUpBtnPressed);
        //guestSigninBtn.ButtonReleased.AddListener(GuestSignInBtnPressed);

        signin_goto_signUpBtn.ButtonPressed.AddListener(() => { OpenSignUpPage(); });
        signup_backSignInBtn.ButtonPressed.AddListener(() => { OpenSignInPage(); });
    }

  

    private void Start()
    {
        signin_errorMessage.gameObject.SetActive(false);
        signup_errorMessage.gameObject.SetActive(false);
    }


    private void SignInBtnPressed()
    {
        Debug.Log("Pressing sign in btn");

        var email = signin_emailIF.text;
        var password = signin_passwordIF.text;

        SignInAccount(email, password);
    }
    public void SignInAccount(string userIdentifier, string password)
    {
        //Login account

        userIdentifier = userIdentifier.Trim();
        if (userIdentifier.Contains("@") && userIdentifier.Contains("."))
        {
            //User input their email
            //SignInWithEmail(userIdentifier, password);
            //PlayfabManager.Instance.SignInWithEmail(userIdentifier, password);
            PlayfabManager.Instance.LoginUsingEmail(userIdentifier, password);
        }
        else
        {
            //User input their username
            //PlayfabManager.Instance.SignInWithUsername(userIdentifier, password);
            PlayfabManager.Instance.LoginUsingUsername(userIdentifier, password);
        }
    }



    private void SignUpBtnPressed()
    {
        var email = signup_emailIF.text;
        var username = signup_usernameIF.text;
        var password = signup_passwordIF.text;
        var confirmPassword = signup_confirmPasswordIF.text;

        if (email.Length < 5 || !email.Contains("@") && !email.Contains("."))
        {
            var error = "Invalid Email Address";
            signup_errorMessage.text = error;
            signup_errorMessage.gameObject.SetActive(true);
            return;
        }
        else if (username.Length < 5)
        {
            var error = "Enter more than 5 characters in your user name";
            signup_errorMessage.text = error;
            signup_errorMessage.gameObject.SetActive(true);
            return;
        }

        if (password.Length < 5)
        {
            var error = "Your password is weak. Enter more than 5 characters";
            signup_errorMessage.text = error;

            signup_passwordIF.text = "";
            signup_confirmPasswordIF.text = "";
            signup_errorMessage.gameObject.SetActive(true);
            return;
        }

        if (password != confirmPassword)
        {
            var error = "Your password  is not the same";
            signup_errorMessage.text = error;

            signup_passwordIF.text = "";
            signup_confirmPasswordIF.text = "";
            signup_errorMessage.gameObject.SetActive(true);
            return;
        }


        //PlayfabManager.Instance.SignUpNewAccount(email, username, password, (x) => { }, (x) => { });
        PlayfabManager.Instance.CreateNewAccount(username, email, password);


    }







    //private void GuestSignInBtnPressed()
    //{
    //    PlayfabManager.Instance.SignInWithDevice();
    //}


//    #region SIGN IN SETUP
//    private void SignInWithAccessToken(string authToken)
//    {
//        var request = new LoginWithCustomIDRequest
//        {
//            CustomId = authToken,
//            CreateAccount = false // Do not create a new account if one does not exist
//        };

//        PlayFabClientAPI.LoginWithCustomID
//            (
//            request, //Request
//            CheckCharacterName, //If success sign in
//            (PlayFabError error) => //When Error
//            {
//                Debug.LogError("PLAYFAB ERROR: " + error);
//                UI_Manager.Instance.OpenMenu("AccountSetup Menu");
//            });
//    }
//    public void SignInAccount(string userIdentifier, string password)
//    {
//        //Login account

//        userIdentifier = userIdentifier.Trim();
//        if (userIdentifier.Contains("@") && userIdentifier.Contains("."))
//        {
//            //User input their email
//            SignInWithEmail(userIdentifier, password);
//        }
//        else
//        {
//            //User input their username
//            SignInWithUsername(userIdentifier, password);
//        }
//    }
   

//    bool CheckForSupportedMobilePlatform() //Check if the current platform is mobile or not
//    {
//        return Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer;
//    }
//    bool GetDeviceId(out string android_id, out string ios_id, out string custom_id) //Getting the device id
//    {
//        android_id = string.Empty;
//        ios_id = string.Empty;
//        custom_id = string.Empty;

//        if (CheckForSupportedMobilePlatform())
//        {
//#if UNITY_ANDROID
//            AndroidJavaClass clsUnity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
//            AndroidJavaObject objActivity = clsUnity.GetStatic<AndroidJavaObject>("currentActivity");
//            AndroidJavaObject objResolver = objActivity.Call<AndroidJavaObject>("getContentResolver");
//            AndroidJavaClass clsSecure = new AndroidJavaClass("android.provider.Settings$Secure");
//            android_id = clsSecure.CallStatic<string>("getString", objResolver, "android_id");
//#endif

//#if UNITY_IPHONE
//            ios_id = UnityEngine.iOS.Device.vendorIdentifier;
//#endif
//            return true;
//        }
//        else
//        {
//            custom_id = SystemInfo.deviceUniqueIdentifier;
//            return false;
//        }
//    }
        
//    private void SignInWithEmail(string email, string password) //Sign in using email address
//    {
//        var request = new LoginWithEmailAddressRequest
//        {
//            Email = email,
//            Password = password
//        };

//        PlayFabClientAPI.LoginWithEmailAddress(request, CheckCharacterName, ErrorThrow);
//    }
//    private void SignInWithUsername(string username, string password) //Sign in using username
//    {
//        //User input their username
//        LoginWithPlayFabRequest request = new LoginWithPlayFabRequest
//        {
//            Username = username,
//            Password = password
//        };

//        PlayFabClientAPI.LoginWithPlayFab(request, CheckCharacterName, ErrorThrow);
//    }
//    public void SignInWithDevice() //Sign in using device id
//    {
//        if (GetDeviceId(out string android_id, out string ios_id, out string custom_id))
//        {
//            //Android ID sign in
//            if (!string.IsNullOrEmpty(android_id))
//            {
//                Debug.Log("Using Android Device ID: " + android_id);
//                var androidRequest = new LoginWithAndroidDeviceIDRequest()
//                {
//                    AndroidDeviceId = android_id,
//                    CreateAccount = true
//                };

//                PlayFabClientAPI.LoginWithAndroidDeviceID(androidRequest, CheckCharacterName, ErrorThrow);
//            }

//            //Iphone ID sign in
//            else if (!string.IsNullOrEmpty(ios_id))
//            {
//                Debug.Log("Using IOS Device ID: " + ios_id);
//                var iosRequest = new LoginWithIOSDeviceIDRequest()
//                {
//                    DeviceId = ios_id,
//                    CreateAccount = true
//                };

//                PlayFabClientAPI.LoginWithIOSDeviceID(iosRequest, CheckCharacterName, ErrorThrow);
//            }
//        }
//        else
//        {
//            Debug.Log("Using custom device ID: " + custom_id);

//            var customIdRequest = new LoginWithCustomIDRequest()
//            {
//                CustomId = custom_id,
//                CreateAccount = true
//            };

//            PlayFabClientAPI.LoginWithCustomID(customIdRequest, CheckCharacterName, ErrorThrow);
//        }
//    }

//    #endregion



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
        signin_errorMessage.gameObject.SetActive(true);
        signin_errorMessage.text = error.ToString();

    }






    private void OpenSignInPage()
    {
        signin_page.gameObject.SetActive(true);
        signup_page.gameObject.SetActive(false);
    }
    private void OpenSignUpPage()
    {
        signin_page.gameObject.SetActive(false);
        signup_page.gameObject.SetActive(true);
    }






}
