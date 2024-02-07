using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.IO;
using System;
using System.Linq;

public class GameManager : Singleton<GameManager>
{
    private PlayerData playerData;

    private string characterName;

    private List<ArtifactsSO> listOfArtifactsCollected = new List<ArtifactsSO>();
    private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all available abilities

    //private List<AbilityScript> TESTlistOfAllAbilities = new List<AbilityScript>(); //List of all available abilities
    
    private Dictionary<Chapter_LevelSO, bool> dictChapterUnlocked; //List of all chapters
    private Dictionary<string, int> dictChapterScores = new Dictionary<string, int>(); //List of all chapters


    [SerializeField] private List<Chapter_LevelSO> listOfChapters = new List<Chapter_LevelSO>();


    public event Action<int> OnChangeChapterPoints;

    #region Getters and Setters
    public PlayerData GetPlayerData { get { return playerData; } set { playerData = value; } }
    public string GetCharacterName { get { return characterName; } }
    public List<Chapter_LevelSO> GetListOfChapters { get { return listOfChapters; } }
    public List<AbilityScript> GetAllListOfAbility { get { return listOfAllAbilities; } }
    public List<ArtifactsSO> GetListOfCollectedArtifacts { get { return listOfArtifactsCollected; } }
    public Dictionary<Chapter_LevelSO, bool> GetChapterUnlocked { get { return dictChapterUnlocked; } }
    public Dictionary<string, int> GetChapterScores { get { return dictChapterScores; } }
    #endregion



    protected override void Awake()
    {
        base.Awake();
        //Load all the ability from the asset folder
        playerData = new PlayerData();
        
        LoadAbilitiesInFolder("Assets/_ThisProjectAssets/Scriptable Object/Abilities");

        SetUpUnlockedChapters();
    }


    private void Start()
    {
    }

    /* THIS THE ONE
    private void TESTINGLOADING() // Get all abilities (Scriptable Objects) inside the folder
    {
        //string[] files = Directory.GetFiles(folderPath, "*.asset");
        AbilityScript[] abilityObjects = Resources.LoadAll<AbilityScript>("Abilities");

        foreach (var filePath in abilityObjects)
        {
            TESTlistOfAllAbilities.Add(filePath);
        }
    }*/

    private void LoadAbilitiesInFolder(string folderPath) // Get all abilities (Scriptable Objects) inside the folder
    {
        string[] files = Directory.GetFiles(folderPath, "*.asset");

        foreach (string filePath in files)
        {
            // Load the Scriptable Object from the file
            AbilityScript ability = UnityEditor.AssetDatabase.LoadAssetAtPath<AbilityScript>(filePath);
            //AbilityScript ability = Resources.Load<AbilityScript>(filePath);


            if (ability != null)
            {
                listOfAllAbilities.Add(ability);
                //listOfAllAbilities.Add(ability);
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


    private void SetUpUnlockedChapters() //Set up the chapters
    {
        if(listOfChapters.Count == 0 || listOfChapters == null)
        {
            Debug.LogError("THERE ARE NO CHAPTER LEVEL REGISTERED IN THE GAME MANAGER");
            return;
        }


        dictChapterUnlocked = new Dictionary<Chapter_LevelSO, bool>();

        foreach (var chapters in listOfChapters)
        {
            dictChapterUnlocked.Add(chapters, false);
        }
        dictChapterUnlocked[listOfChapters[0]] = true; //Set the first chapter to unlock

    }

    public void CollectArtifacts(ArtifactsSO artifacts)
    {
        listOfArtifactsCollected.Add(artifacts);
    }
    public void LoadCollectedArtifacts(List<ArtifactsSO> _listOfArtifacts)
    {
        if(_listOfArtifacts != null)
        {
            listOfArtifactsCollected = _listOfArtifacts;
        }
    }

    public PlayerData SavePlayerData()
    {
        var data = new PlayerData()
        {
            characterName = characterName,
            unlockedChapters = dictChapterUnlocked,
            playerStats = PlayerSingleton.Instance.GetPlayerScript.GetEntityStats,

            unlockedAbilities = PlayerSingleton.Instance.GetPlayerScript.GetAbility_Controller.GetListOfUnlockedAbilities(),
            usedCurrentAbilities = PlayerSingleton.Instance.GetPlayerScript.GetAbility_Controller.ListOfCurrentAbilities
        };

        return data;
    }

    
    public void AddCurrentChapterScore(int scoreToAdd) //Adding scores to current chapter
    {
        var currentFolder = GetCurrentFolderName();
        Debug.Log($"YOU ARE ADDING POINT TO CURRENT FOLDER: {currentFolder}");

        if (dictChapterScores.ContainsKey(currentFolder))
        {
            //If key exist in the dictionary
            dictChapterScores[currentFolder] += scoreToAdd;
        }
        else
        {
            //If not, then add the key and the value
            dictChapterScores.Add(currentFolder, scoreToAdd);
        }

        OnChangeChapterPoints?.Invoke(dictChapterScores[currentFolder]);
    }
    public int GetTotalScoreInChapterLevels()
    {
         return dictChapterScores.Values.Sum();
    }





    private string GetCurrentFolderName() //Get the current scene folder
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
