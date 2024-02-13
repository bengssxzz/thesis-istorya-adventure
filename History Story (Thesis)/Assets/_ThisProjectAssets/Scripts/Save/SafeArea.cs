using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Collider2D))]
public class SafeArea : MonoBehaviour
{
    [ES3NonSerializable] public string alertMessageEnterRoom = "You enter the safe place";
    [ES3NonSerializable] public string alertMessageExitRoom = "You exit the safe place";

    [SerializeField] private Transform spawnPosition;


    //private void SavePlayerScene() //Saving the player in this chapter level
    //{
    //    var playerData = new PlayerSceneSaveData()
    //    {
    //        sceneName = GetCurrentSceneName(),
    //        spawnPosition = spawnPosition.position
    //    };

    //    var key = GameManager.Instance.GetPlayerKey;
    //    var path = LevelManager.Instance.GetFilePath();

    //    ES3.Save(key, playerData, filePath: path); //Save the player

    //    LevelManager.Instance.SaveSceneLevel(); //Save the changes in the scene
    //}
    //private string GetCurrentSceneName() //Get the name of the current scene
    //{
    //    return SceneManager.GetActiveScene().name;
    //}
    ////private void OnApplicationQuit()
    ////{
    ////    if (canSaveOnQuit) 
    ////    {
    ////        //Save on quit when in the safe zone
    ////        SavePlayerScene();
    ////    }
    ////}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!collision.CompareTag("Player")) { return; }

        Debug.Log("PLAYER ENTER THE SAFE LOCATION");
        DialogueManager.ShowAlert(alertMessageEnterRoom, 2f);

        SaveGameDataManager.Instance.SavePlayerScene(spawnPosition.position);

        //Save player progress
        //SavePlayerScene();
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (!collision.CompareTag("Player")) { return; }

        Debug.Log("PLAYER EXIT THE SAFE LOCATION");
        DialogueManager.ShowAlert(alertMessageExitRoom, 2f);

        SaveGameDataManager.Instance.SavePlayerScene(spawnPosition.position);
        //Save player progress
        //SavePlayerScene();
    }






















}
