using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;
using System;
using MoreMountains.Tools;

public class ChangeSceneReciever : MonoBehaviour, INotificationReceiver
{
    const string MENU_SCENE = "MainMenu";

    private string sceneName;
    private string transitionID;
    private SceneLoadingMethod loadingSceneMethod;
   

    public void OnNotify(Playable origin, INotification notification, object context)
    {
        Debug.Log(notification);
        if (notification is ChangeSceneMarker marker)
        {
            sceneName = marker.sceneName;
            loadingSceneMethod = marker.loadingMethod;


            ChangeScene();
        }
    }

    private void ChangeScene()
    {
        switch (loadingSceneMethod)
        {
            case SceneLoadingMethod.LoadingToGameScene:
                Debug.Log($"TIMELINE CHANGE SCENE: Method: {loadingSceneMethod} | SceneName: {sceneName} | TransID: {transitionID} ");
                SceneTransitionManager.Instance.SceneTransitionInGame(sceneName, transitionID);
                break;
            case SceneLoadingMethod.LoadingToMenu:
                Debug.Log("TIMELINE CHANGE SCENE TO MAIN MENU");
                SceneTransitionManager.Instance.SceneTransitionInstant(MENU_SCENE);
                break;
        }
    }


}
