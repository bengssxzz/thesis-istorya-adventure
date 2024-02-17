using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using Cinemachine;
using MoreMountains.Tools;

public class SceneTransitionManager : Singleton<SceneTransitionManager>
{
    private enum TransitionState { None, ChangeState, SpawnState}

    const string additiveLoadingScreenScene = "IstoryaAdventureAdditiveLoadingScreen";
    const string loadingScreenScene = "IstoryaAdventureLoadingScreen";
    const string antiSpillScene = "AntiSpillScene";

    public string transitionID { get; private set; }
    public string desiredTransSceneName { get; private set; }

    private TransitionState state = TransitionState.None;
    private MMAdditiveSceneLoadingManagerSettings additiveSceneSettings;
    private List<SceneTriggerTrans> sceneTransitionObject = new List<SceneTriggerTrans>();
    
   





    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);

        SceneManager.sceneLoaded += OnSceneLoaded;
    }
    private void OnDestroy()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;

    }

    private void Start()
    {
        additiveSceneSettings = new MMAdditiveSceneLoadingManagerSettings();
        additiveSceneSettings.LoadingSceneName = additiveLoadingScreenScene;
        additiveSceneSettings.AntiSpillSceneName = antiSpillScene;
        additiveSceneSettings.UnloadMethod = MMAdditiveSceneLoadingManagerSettings.UnloadMethods.AllScenes;

        additiveSceneSettings.BeforeEntryFadeDelay = 0f;
        additiveSceneSettings.AfterEntryFadeDelay = 0.5f;
        additiveSceneSettings.BeforeExitFadeDelay = 0.7f;

        additiveSceneSettings.EntryFadeDuration = 0.5f;
        additiveSceneSettings.ExitFadeDuration = 0.8f;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if(scene.name != desiredTransSceneName) { return; }

        InGameTransitionEffect();








        #region ...

        //LevelManager findLevelManager = FindObjectOfType<LevelManager>(); //Find the level manager in the scene


        ///*Check if the scene has level manager to detect that this new scene
        // * is still playable by player character
        //*/
        //if(findLevelManager == null)
        //{
        //    Debug.LogWarning("THERE NO LEVEL MANAGER IN SCENE; SO IT MEANS THIS IS NOT PLAYABLE BY PLAYER");
        //    return;
        //}


        //List<SceneTriggerTrans> sceneTransObject = FindObjectsOfType<SceneTriggerTrans>().ToList(); //Find all the trigger scene

        ////If the scene trigger exist in the new scene with the same transition id
        //if (sceneTransObject.Exists(x => x.GetTransitionID == transitionID))
        //{
        //    //Set the position out
        //    var outPosition = sceneTransObject.FirstOrDefault(x => x.GetTransitionID == transitionID);

        //    if (outPosition != null) //If found something
        //    {
        //        Debug.Log($"THERE ARE {transitionID} IN THE SCENE");

        //        //Set the player position to that out position
        //        PlayerScript player = PlayerSingleton.Instance.GetPlayerScript;
        //        player.transform.position = outPosition.GetPositionOut.position;

        //        //Set the camera to follow the player
        //        findLevelManager.SetCameraToPlayer();

        //        //Update the mobile skill when changing scene
        //        var playerCurrentAbility = player.GetAbility_Controller.ListOfCurrentAbilities.ToArray();
        //        UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI").UpdateAbilityButtons(playerCurrentAbility);
        //    }
        //    else
        //    {
        //        Debug.LogWarning($"THERE ARE NO {transitionID} IN THE SCENE");
        //    }

        //}
        //else
        //{
        //    Debug.LogWarning($"THERE ARE NO SceneTrigger IN THE SCENE");
        //}
        #endregion
    }

    private void InGameTransitionEffect()
    {
        List<SceneTriggerTrans> sceneTransObject = FindTransitionTriggerInScene(); //Find all the trigger scene

        //Find the scene trigger exist in the new scene with the same transition id
        if (sceneTransObject.Exists(x => x.GetTransitionID == transitionID))
        {
            //Set the position out
            var outPosition = sceneTransObject.FirstOrDefault(x => x.GetTransitionID == transitionID);

            //Set the position of the player
            SetPlayerInScene(outPosition.GetPositionOut.position);
        }
        else
        {
            Debug.LogWarning($"THERE ARE NO {transitionID} IN THE SCENE");
        }
    }
    

    private void SetPlayerInScene(Vector2 position) //Set the player and camera
    {
        LevelManager findLevelManager = FindObjectOfType<LevelManager>(); //Find the level manager in the scene

        PlayerScript player = PlayerSingleton.Instance.GetPlayerScript; 
        player.transform.position = position;

        //Set the camera to follow the player
        findLevelManager.SetCameraToPlayer();

        //Update the mobile skill when changing scene
        var playerCurrentAbility = player.GetAbility_Controller.ListOfCurrentAbilities.ToArray();
        UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI").UpdateAbilityButtons(playerCurrentAbility);
    }
    private List<SceneTriggerTrans> FindTransitionTriggerInScene() //Find all the transition trigger in the scene
    {
        IEnumerable<SceneTriggerTrans> sceneTrigger = FindObjectsOfType<SceneTriggerTrans>();
        return new List<SceneTriggerTrans>(sceneTrigger);
    }



    public void SceneTransitionInGame(string sceneName, string transID = null) //In game transition to use the additive loading scene
    {
        transitionID = transID;
        desiredTransSceneName = sceneName;
        state = TransitionState.ChangeState;
        //SceneManager.LoadScene(sceneName);
        //MMSceneLoadingManager.LoadScene(sceneName, "IstoryaAdventureLoadingScreen");
        MMAdditiveSceneLoadingManager.LoadScene(sceneName, additiveSceneSettings);
    }
    public void SceneTransitionInGame(string sceneName, Vector2 spawnPosition) //In game transition to use the additive loading scene
    {
        desiredTransSceneName = sceneName;
        state = TransitionState.ChangeState;
        //SceneManager.LoadScene(sceneName);
        //MMSceneLoadingManager.LoadScene(sceneName, "IstoryaAdventureLoadingScreen");
        MMAdditiveSceneLoadingManager.LoadScene(sceneName, additiveSceneSettings);
    }

    public void SceneTransitionInstant(string sceneName) //Instant transition to use the loading screen
    {
        MMSceneLoadingManager.LoadScene(sceneName, "IstoryaAdventureLoadingScreen");
    }















}
