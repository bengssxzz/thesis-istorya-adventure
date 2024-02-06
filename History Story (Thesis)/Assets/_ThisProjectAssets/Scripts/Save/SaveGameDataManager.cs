using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;
using System;

[Serializable]
public class TestData
{
    public string name;
    public int number;
}


public class SaveGameDataManager : MonoBehaviour
{



        
        











    private bool IsKeyExist() //To check if this scene is already saved
    {
        return false;
    }


    private string GetIdentifier() 
    {
        // path: FolderName/SceneName.thesis
        return string.Format("{0}/{1}.thesis", GetCurrentFolderName(), GetCurrentSceneName()); 
    }

    private string GetCurrentFolderName() //Get the file name
    {
        // Get the full path of the current scene
        string scenePath = SceneManager.GetActiveScene().path;

        // Get the directory (folder) name from the path
        string folderName = Path.GetDirectoryName(scenePath);

        // Extract just the folder name without the path
        string folderNameOnly = Path.GetFileName(folderName);

        return folderNameOnly;
    }
    private string GetCurrentSceneName() //Get the key
    {
        return SceneManager.GetActiveScene().name;
    }


}
