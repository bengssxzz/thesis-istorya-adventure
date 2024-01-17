using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.IO;

public class GameManager : Singleton<GameManager>
{
    private PlayerScript entity;
    public PlayerScript PlayerEntity { get; private set; }

    private bool playerCanMove = true;

    private List<AbilityScript> listOfAllAbilities; // = new List<AbilityScript>(); //List of all available abilities

    public List<AbilityScript> GetAllListOfAbility => listOfAllAbilities;

    public bool IsPause { get; set; } = false;

    protected override void Awake()
    {
        base.Awake();

        listOfAllAbilities = new List<AbilityScript>();
        LoadAbilitiesInFolder("Assets/_ThisProjectAssets/Scriptable Object/Abilities");

        PlayerEntity = GameObject.FindGameObjectWithTag("Player")?.GetComponent<PlayerScript>();
    }

    private void LoadAbilitiesInFolder(string folderPath) // Get all abilities (Scriptable Objects) inside the folder
    {
        string[] files = Directory.GetFiles(folderPath, "*.asset");

        foreach (string filePath in files)
        {
            // Load the Scriptable Object from the file
            AbilityScript ability = UnityEditor.AssetDatabase.LoadAssetAtPath<AbilityScript>(filePath);

            if (ability != null)
            {
                listOfAllAbilities.Add(ability);
            }
        }

        // Get all subdirectories (subfolders) in the folder
        string[] subfolders = Directory.GetDirectories(folderPath);

        foreach (string subfolder in subfolders)
        {
            // Recursively load abilities from subfolders
            LoadAbilitiesInFolder(subfolder);
        }
    }


    //public PlayerScript GetPlayer() { return entity; }
    public void IsPlayerCanMove(bool value) => playerCanMove = value;
    public bool IsPlayerCanMove() { return playerCanMove; }

    public void SetPauseValue(bool pause)
    {
        if (pause == true)
        {
            Time.timeScale = 0;
            IsPause = true;
        }
        else
        {
            Time.timeScale = 1;
            IsPause = false;
        }
    }

    void SaveGame()
    {

    }
    void LoadGame()
    {
        
    }
}
