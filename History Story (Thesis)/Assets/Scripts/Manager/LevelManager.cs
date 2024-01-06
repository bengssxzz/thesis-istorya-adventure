using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;



public enum GameDifficulties
{
    Easy,
    Normal,
    Hard
}
public class LevelManager : Singleton<LevelManager>
{
    public PlayableDirector currentDirector { get; private set; }


    private GameDifficulties gameDifficulties = GameDifficulties.Easy;

    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);
    }


    public void SetDirector(PlayableDirector director)
    {
        currentDirector = director;
    }
    public void PlayDirector()
    {
        currentDirector.Play();
    }
    public void PauseDirector()
    {
        currentDirector.Pause();
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
