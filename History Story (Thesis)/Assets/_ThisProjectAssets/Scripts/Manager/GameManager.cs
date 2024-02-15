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

    [SerializeField] private List<Chapter_LevelSO> listOfAllChapters = new List<Chapter_LevelSO>(); //List of all chapter scene

    [SerializeField] private List<ArtifactsSO> listOfArtifacts = new List<ArtifactsSO>(); //List of all artifacts in the game
    [SerializeField] private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all available abilities in the game

    private List<ArtifactsSO> listOfCollectedArtifacts = new List<ArtifactsSO>();
    private List<AbilityScript> listOfCollectedAbilities = new List<AbilityScript>();
    //private List<AbilityScript> TESTlistOfAllAbilities = new List<AbilityScript>(); //List of all available abilities

    private Dictionary<Chapter_LevelSO, bool> dictChapterUnlocked; //List of all chapters
    private Dictionary<string, int> dictChapterScores = new Dictionary<string, int>(); //List of all chapters



    public event Action OnUnlockedScene;
    public event Action<int> OnChangeChapterPoints;


    #region Getters and Setters
    public PlayerData GetPlayerData { get { return playerData; } set { playerData = value; } }
    public string GetCharacterName { get { return characterName; } }

    public List<Chapter_LevelSO> GetListOfChapters { get { return listOfAllChapters; } }

    public List<AbilityScript> GetListOfAllAbility { get { return listOfAllAbilities; } }
    public List<AbilityScript> GetListOfCollectedAbility { get { return listOfCollectedAbilities; } }

    public List<ArtifactsSO> GetListOfAllArtifacts { get { return listOfArtifacts; } }
    public List<ArtifactsSO> GetListOfCollectedArtifacts { get { return listOfCollectedArtifacts; } }

    public Dictionary<Chapter_LevelSO, bool> GetChapterUnlocked { get { return dictChapterUnlocked; } }
    public Dictionary<string, int> GetChapterScores { get { return dictChapterScores; } }
    #endregion



    protected override void Awake()
    {
        base.Awake();
        //Load all the ability from the asset folder
        playerData = new PlayerData();
        
        LoadAbilitiesInFolder("Assets/_ThisProjectAssets/Scriptable Object/Abilities");

        InitializeSceneChapter();
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


    #region FOR SCENE CHAPTERS
    private void InitializeSceneChapter()
    {
        if (listOfAllChapters.Count == 0 || listOfAllChapters == null)
        {
            Debug.LogError("THERE ARE NO CHAPTER LEVEL REGISTERED IN THE GAME MANAGER");
            return;
        }


        dictChapterUnlocked = new Dictionary<Chapter_LevelSO, bool>();

        foreach (var chapter in listOfAllChapters)
        {
            dictChapterUnlocked.Add(chapter, false);
        }

        //Unlock the first chapter
        var firstIndex = dictChapterUnlocked.FirstOrDefault();
        dictChapterUnlocked[firstIndex.Key] = true;


    }
    public bool IsChapterSceneExist(Chapter_LevelSO chapterlevelSO, out bool chapterUnlocked)
    {
        if (dictChapterUnlocked.ContainsKey(chapterlevelSO))
        {
            chapterUnlocked = dictChapterUnlocked[chapterlevelSO];
            return true;
        }
        else
        {
            Debug.LogWarning($"{chapterlevelSO.chapterName} IS NOT REGISTER IN THE GAME");
            chapterUnlocked = false;
            return false;
        }
    }
    public void UnlockSceneChapter(string chapterName) //Unlock the chapter scene
    {
        var selectedScene = dictChapterUnlocked.FirstOrDefault(x => x.Key.chapterName == chapterName);

        if (!EqualityComparer<KeyValuePair<Chapter_LevelSO, bool>>.Default.Equals(selectedScene, default))
        {
            Debug.Log($"{chapterName} EXIST IN THE GAME");
            var dictKey = selectedScene.Key;
            var dictValue = selectedScene.Value;

            dictChapterUnlocked[dictKey] = true;
        }
        else
        {
            Debug.Log($"THERE ARE NO {chapterName} REGISTERED IN THE GAME MANAGER");
        }

        OnUnlockedScene?.Invoke();

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

    #endregion


    #region FOR ARTIFACTS
    public void CollectArtifacts
        (ArtifactsSO artifacts)
    {
        if (GetListOfCollectedArtifacts.Contains(artifacts)){
            Debug.Log($"{artifacts.artifactName} IS ALREADY COLLECTED");
            return; }

        listOfCollectedArtifacts.Add(artifacts);
    }
    public void CollectArtifacts(string artifactName)
    {
        if(GetListOfCollectedArtifacts.Any(x => x.artifactName == artifactName)) {
            Debug.Log($"{artifactName} IS ALREADY COLLECTED");
            return; }

        var artifact = GetListOfAllArtifacts.FirstOrDefault(x => x.artifactName == artifactName);

        if (artifact != null)
        {
            listOfCollectedArtifacts.Add(artifact);
        }
        else
        {
            Debug.LogError($"THERE ARE NO {artifactName} REGISTERED IN THE GAME MANAGER");
        }
    }
    public void LoadCollectedArtifacts(List<ArtifactsSO> _listOfArtifacts)
    {
        if (_listOfArtifacts != null)
        {
            listOfArtifacts = _listOfArtifacts;
        }
    }


    #endregion

    #region FOR ABILITIES
    public void CollectedAbilities(AbilityScript ability)
    {
        if (listOfCollectedAbilities.Contains(ability)) {
            Debug.Log($"{ability.abilityName} IS ALREADY COLLECTED");
            return; }

        listOfCollectedAbilities.Add(ability);
    }
    public void CollectedAbilities(string abilityName)
    {
        if (listOfCollectedAbilities.Any(x => x.abilityName == abilityName))
        {
            Debug.Log($"{abilityName} IS ALREADY COLLECTED");
            return;
        }

        var ability = GetListOfAllAbility.FirstOrDefault(x => x.abilityName == abilityName);

        if (ability != null)
        {
            listOfCollectedAbilities.Add(ability);
        }
    }

    #endregion











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
