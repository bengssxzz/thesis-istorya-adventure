using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using System;

public class DiedScreenUI : MonoBehaviour
{
    [SerializeField] private MMTouchButton tryAgainBtn;
    [SerializeField] private MMTouchButton mainMenuBtn;



    private void OnEnable()
    {
        tryAgainBtn?.ButtonReleased.AddListener(TryAgainButton);
        mainMenuBtn?.ButtonReleased.AddListener(BackMainMenu);
    }

    private void BackMainMenu()
    {
        SceneTransitionManager.Instance.SceneTransitionInstant("MainMenu");
    }

    private void TryAgainButton()
    {
        PlayerSceneSaveData playerSavedScene;

        SaveGameDataManager.Instance.GetLatestSavedScene(out playerSavedScene);

        string sceneName = playerSavedScene.sceneName;


        SceneTransitionManager.Instance.SceneTransitionInstant(sceneName);
    }
}
