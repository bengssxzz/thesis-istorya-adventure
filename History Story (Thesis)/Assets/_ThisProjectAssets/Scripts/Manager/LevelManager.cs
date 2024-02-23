using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;
using MoreMountains.Tools;
using Cinemachine;
using System;
using System.IO;
using System.Linq;
using PixelCrushers.DialogueSystem;


/*Save all pickup object in the scene
 * Save all the NPCs
 * Save all the battle trigger
 * Save all the timeline that already trigger
 */



public class LevelManager : Singleton<LevelManager>
{
    private CinemachineVirtualCamera sceneCamera;


    public PlayerScript player { get; private set; }
    public PlayableDirector currentDirector { get; private set; }


    private string currentScene;


    protected override void Awake()
    {
        base.Awake();
        sceneCamera = GetComponentInChildren<CinemachineVirtualCamera>();
        player = PlayerSingleton.Instance?.GetPlayerScript;

    }

    private void OnEnable()
    {
        Lua.RegisterFunction(nameof(ShowAlertUI), this, SymbolExtensions.GetMethodInfo(() => ShowAlertUI(string.Empty, (double)0)));
        //LoadedNewScene();
    }

    private void OnDisable()
    {
        Lua.UnregisterFunction(nameof(ShowAlertUI));
        //UnloadedCurrentScene();
    }


    private void Start()
    {
        currentScene = SceneManager.GetActiveScene().name;
        SetCameraToPlayer();
        LoadedNewScene();
    }

    private void OnDestroy()
    {
        UnloadedCurrentScene();
    }

    //Set the camera to player
    public void SetCameraToPlayer()
    {
        if (sceneCamera != null)
        {
            if (player != null)
            {
                sceneCamera.Follow = null;
                sceneCamera.Follow = player.transform;
            }
            else
            {
                Debug.LogError("THERE ARE NO PLAYER IN THIS SCENE");
            }
        }
        else
        {
            Debug.LogError("THERE ARE NO CAMERA IN THIS SCENE");
        }
    }

    //Show alert
    public void ShowAlertUI(string message, double delay)
    {
        DialogueManager.ShowAlert(message, (float)delay);
    }

    
    private void LoadedNewScene()
    {
        Debug.LogWarning("CUSTOM LOADED SCENE");
        //player = PlayerSingleton.Instance.gameObject;
        //var gameUI = GameUI.Instance.gameObject;

        UI_Manager.Instance.ActivateID_OpenMenu("game_ui");
        player.gameObject.SetActive(true);
    }
    private void UnloadedCurrentScene()
    {
        Debug.LogWarning("CUSTOM UNLOADED SCENE");

        //var player = PlayerSingleton.Instance.gameObject;
        //var gameUI = GameUI.Instance.gameObject;

        //UI_Manager.Instance.ActivateID_CloseMenu("game_ui");
        UI_Manager.Instance.CloseAllMenu();
        player.gameObject.SetActive(false);
    }























































}










