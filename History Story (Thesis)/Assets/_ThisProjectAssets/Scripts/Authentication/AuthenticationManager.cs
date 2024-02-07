using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.Core;
using Unity.Services.Authentication;
using System.Threading.Tasks;
using System;

public class AuthenticationManager : MonoBehaviour
{

    private void OnDestroy()
    {
        AuthenticationService.Instance.SignedIn -= SignInWithUnity;
    }

    private async void Awake()
    {
        await UnityServices.InitializeAsync();
        AuthenticationService.Instance.SignedIn += SignInWithUnity;
    }

    

    private async void Start()
    {
        //await SignInAnonymouslyAsync();
        var accessToken = AuthenticationService.Instance.AccessToken;
        await UnityServices.InitializeAsync();
        Debug.Log("TOKEN: " + accessToken);
    }


    void SetupEvents()
    {
        AuthenticationService.Instance.SignedIn += () => 
        {
            // Shows how to get a playerID
            Debug.Log($"PlayerID: {AuthenticationService.Instance.PlayerId}");

            // Shows how to get an access token
            Debug.Log($"Access Token: {AuthenticationService.Instance.AccessToken}");

        };

        AuthenticationService.Instance.SignInFailed += (err) => {
            Debug.LogError(err);
        };

        AuthenticationService.Instance.SignedOut += () => {
            Debug.Log("Player signed out.");
        };

        AuthenticationService.Instance.Expired += () =>
        {
            Debug.Log("Player session could not be refreshed and expired.");
        };
    }

    private async void SignInWithUnity()
    {
        try
        {
            var accessToken = AuthenticationService.Instance.AccessToken;
            Debug.Log("TOKEN: " + accessToken);
            await SignInWithUnityAsync(accessToken);
        }
        catch(AuthenticationException ex)
        {
            Debug.Log(ex);
        }
    }






    private async Task SignInWithUnityAsync(string accessToken)
    {
        try
        {
            await AuthenticationService.Instance.SignInWithUnityAsync(accessToken);
            Debug.Log("SignIn is successful.");
        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            Debug.LogException(ex);
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            Debug.LogException(ex);
        }
    }

    








    private async Task SignInAnonymouslyAsync()
    {
        try
        {
            await AuthenticationService.Instance.SignInAnonymouslyAsync();
            Debug.Log("Sign in anonymously succeeded!");

            // Shows how to get the playerID
            Debug.Log($"PlayerID: {AuthenticationService.Instance.PlayerId}");

        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            Debug.LogException(ex);
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            Debug.LogException(ex);
        }
    }

    private void SignInWithFacebook()
    {

    }
    private void SignInWithGoogle()
    {

    }




























}
