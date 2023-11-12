using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



public enum GameDifficulties
{
    Easy,
    Normal,
    Hard
}
public class LevelManager : MonoBehaviour
{
    public static LevelManager instance;

    private GameDifficulties gameDifficulties = GameDifficulties.Easy;

    void Awake()
    {
        //Singleton
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            DestroyImmediate(gameObject);
        }
    }


    public GameDifficulties GetGameDifficulties()
    {
        return gameDifficulties;
    }
    public void SetGameDifficulties(GameDifficulties difficulties)
    {
        gameDifficulties = difficulties;
    }


    public void ChangeLevel(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
    public void ChangeLevel(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }
}
