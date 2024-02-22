using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.IO;
using System;
using System.Linq;
using Cysharp.Threading.Tasks;

public class GameManager : Singleton<GameManager>
{
    [SerializeField] private List<Chapter_LevelSO> listOfAllChapters = new List<Chapter_LevelSO>(); //List of all chapter scene

    [SerializeField] private List<ArtifactsSO> listOfAllArtifacts = new List<ArtifactsSO>(); //List of all artifacts in the game
    [SerializeField] private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all available abilities in the game

    private List<ArtifactsSO> listOfCollectedArtifacts = new List<ArtifactsSO>();
    [SerializeField] private List<AbilityScript> listOfCollectedAbilities = new List<AbilityScript>(); //FOR TESTING PURPOSES
    //private List<AbilityScript> TESTlistOfAllAbilities = new List<AbilityScript>(); //List of all available abilities

    private Dictionary<Chapter_LevelSO, bool> dictChapterUnlocked; //List of all chapters
    private Dictionary<string, int> dictChapterScores = new Dictionary<string, int>(); //List of all chapters



    public event Action OnUnlockedScene;
    public event Action<int> OnChangeChapterPoints;


    #region Getters and Setters

    public List<Chapter_LevelSO> GetListOfChapters { get { return listOfAllChapters; } }

    public List<AbilityScript> GetListOfAllAbility { get 
        {
            // Get unique elements using HashSet
            HashSet<AbilityScript> newList = new HashSet<AbilityScript>(listOfAllAbilities);

            return new List<AbilityScript>(newList);
        } }
    public List<AbilityScript> GetListOfCollectedAbility { get 
        {
            // Get unique elements using HashSet
            HashSet<AbilityScript> newList = new HashSet<AbilityScript>(listOfCollectedAbilities);

            return new List<AbilityScript>(newList);
        } }

    public List<ArtifactsSO> GetListOfAllArtifacts { get 
        {
            // Get unique elements using HashSet
            HashSet<ArtifactsSO> newList = new HashSet<ArtifactsSO>(listOfAllArtifacts);

            return new List<ArtifactsSO>(newList);
        } }
    public List<ArtifactsSO> GetListOfCollectedArtifacts { get 
        {
            // Get unique elements using HashSet
            HashSet<ArtifactsSO> newList = new HashSet<ArtifactsSO>(listOfCollectedArtifacts);

            return new List<ArtifactsSO>(newList);
        } }

    public Dictionary<Chapter_LevelSO, bool> GetDictUnlockedChapters { get { return dictChapterUnlocked; } }
    public Dictionary<string, int> GetDictEachChapterScores { get { return dictChapterScores; } }
    #endregion



    protected override void Awake()
    {
        base.Awake();

        InitializeSceneChapter();
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += SceneLoaded;
        SceneManager.sceneUnloaded += SceneUnloaded;
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= SceneLoaded;
        SceneManager.sceneUnloaded -= SceneUnloaded;
    }

    private void SceneUnloaded(Scene scene)
    {
        throw new NotImplementedException();
    }

    private async void SceneLoaded(Scene scene, LoadSceneMode load)
    {
        await UniTask.Delay(150);
        if (dictChapterScores.ContainsKey(GetCurrentFolderName()))
        {
            OnChangeChapterPoints?.Invoke(dictChapterScores[GetCurrentFolderName()]);
        }
    }

    private void Start()
    {
        RetrievePlayerData();
    }


    private void RetrievePlayerData()
    {
        var loadedData = SaveGameDataManager.Instance.LoadPlayerData();

        if (loadedData != null)
        {
            //Load Artifacts
            if(loadedData.artifactsCollected != null)
            {
                List<ArtifactsSO> collectedArtifacts = new List<ArtifactsSO>(loadedData.artifactsCollected);
                listOfCollectedArtifacts = collectedArtifacts;
            }

            if(loadedData.abilitiesCollected != null)
            {
                List<AbilityScript> collectedAbilities = new List<AbilityScript>(loadedData.abilitiesCollected);
                listOfCollectedAbilities = collectedAbilities;
            }

            if(loadedData.unlockedChapters != null)
            {
                Dictionary<Chapter_LevelSO, bool> unlockedChapters = new Dictionary<Chapter_LevelSO, bool>(loadedData.unlockedChapters);
                dictChapterUnlocked = unlockedChapters;
            }

            if(loadedData.chapterScores != null)
            {
                Dictionary<string, int> chapterScores = new Dictionary<string, int>(loadedData.chapterScores);
                dictChapterScores = chapterScores;
            }

        }
    }






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
    public void UnlockSceneChapter(string chapterName) //Unlock the chapter
                                                       //scene
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


    public void AddScore_CurrentChapter(string chapterFolder, int scoreToAdd) //Adding scores to current chapter
    {
        Debug.Log($"YOU ARE ADDING POINT TO CURRENT FOLDER: {chapterFolder}");

        if (dictChapterScores.ContainsKey(chapterFolder))
        {
            //If key exist in the dictionary
            dictChapterScores[chapterFolder] += scoreToAdd;
        }
        else
        {
            //If not, then add the key and the value
            dictChapterScores.Add(chapterFolder, scoreToAdd);
        }

        OnChangeChapterPoints?.Invoke(dictChapterScores[chapterFolder]);
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
            listOfAllArtifacts = _listOfArtifacts;
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











    //private void LoadAbilitiesInFolder(string folderPath) // Get all abilities (Scriptable Objects) inside the folder
    //{
    //    string[] files = Directory.GetFiles(folderPath, "*.asset");

    //    foreach (string filePath in files)
    //    {
    //        // Load the Scriptable Object from the file
    //        AbilityScript ability = UnityEditor.AssetDatabase.LoadAssetAtPath<AbilityScript>(filePath);
    //        //AbilityScript ability = Resources.Load<AbilityScript>(filePath);


    //        if (ability != null)
    //        {
    //            listOfAllAbilities.Add(ability);
    //            //listOfAllAbilities.Add(ability);
    //        }
    //    }

    //    // Get all subdirectories (subfolders) in the folder
    //    string[] subfolders = Directory.GetDirectories(folderPath);

    //    foreach (string subfolder in subfolders)
    //    {
    //        // Recursively load abilities from subfolders
    //        LoadAbilitiesInFolder(subfolder);
    //    }
    //}


    

    
    
    




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
