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
using System.Threading;


/*Save all pickup object in the scene
 * Save all the NPCs
 * Save all the battle trigger
 * Save all the timeline that already trigger
 */



public class LevelManager : Singleton<LevelManager>
{
    private CinemachineVirtualCamera sceneCamera;
    private CancellationTokenSource cancellationSceneLevel;

    public PlayerScript player { get; private set; }
    public PlayableDirector currentDirector { get; private set; }
    public CancellationToken GetCancellationOnLevel { get { return cancellationSceneLevel.Token; } }


    private string currentScene;


    protected override void Awake()
    {
        base.Awake();
        sceneCamera = GetComponentInChildren<CinemachineVirtualCamera>();
        player = PlayerSingleton.Instance?.GetPlayerScript;

    }

    private void OnEnable()
    {
        //LoadedNewScene();
        cancellationSceneLevel?.Cancel();
        cancellationSceneLevel = new CancellationTokenSource();
    }

    private void OnDisable()
    {
        //UnloadedCurrentScene();
        cancellationSceneLevel?.Cancel();
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
    
    private async void LoadedNewScene()
    {
        Debug.LogWarning("CUSTOM LOADED SCENE FROM " + SceneManager.GetActiveScene().name);
        //player = PlayerSingleton.Instance.gameObject;
        //var gameUI = GameUI.Instance.gameObject;

        await UI_Manager.Instance.InitializeGetAllMenus();
        UI_Manager.Instance.ActivateID_OpenMenu("game_ui");
        player.gameObject.SetActive(true);
    }
    private void UnloadedCurrentScene()
    {
        Debug.LogWarning("CUSTOM UNLOADED SCENE FROM " + SceneManager.GetActiveScene().name);

        //var player = PlayerSingleton.Instance.gameObject;
        //var gameUI = GameUI.Instance.gameObject;

        UI_Manager.Instance.ActivateID_CloseMenu("game_ui");
        //UI_Manager.Instance.CloseAllMenu();
        player.gameObject.SetActive(false);
    }























































}










