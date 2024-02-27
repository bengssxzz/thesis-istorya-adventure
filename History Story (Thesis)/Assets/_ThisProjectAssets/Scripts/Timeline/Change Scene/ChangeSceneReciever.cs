using Cysharp.Threading.Tasks;
using System;
using UnityEngine;
using UnityEngine.Playables;

public class ChangeSceneReciever : MonoBehaviour, INotificationReceiver
{
    const string MENU_SCENE = "MainMenu";

    private string sceneName;
    private string transitionID;
    private bool resetFile;
    private SceneLoadingMethod loadingSceneMethod;
   

    public void OnNotify(Playable origin, INotification notification, object context)
    {
        Debug.Log(notification);
        if (notification is ChangeSceneMarker marker)
        {
            sceneName = marker.sceneName;
            transitionID = marker.transitionID;

            resetFile = marker.resetSceneFile;
            loadingSceneMethod = marker.loadingMethod;


            ChangeScene();
        }
    }

    private async void ChangeScene()
    {
        _ = SaveGameDataManager.Instance.SavePlayerStatsData();


        try
        {
            if (resetFile)
            {
                if (ES3.DirectoryExists(SaveGameDataManager.Instance.GetCurrentFolderName()))
                {
                    ES3.DeleteDirectory(SaveGameDataManager.Instance.GetCurrentFolderName());
                }
            }
            await UniTask.Delay(100, cancellationToken: GameManager.Instance.GetMainMenuCancellationToken);

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
                case SceneLoadingMethod.None:
                    break;
            }

        }
        catch(Exception ex)
        {
            Debug.LogError("ERROR MESSAGE: " + ex.Message);
        }


        
    }


}
