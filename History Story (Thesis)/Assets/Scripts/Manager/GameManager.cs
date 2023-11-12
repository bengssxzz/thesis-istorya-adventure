using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;



public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    private PlayerScript entity;

    public GameDifficulties gameDifficulties { get; private set; }


    private bool isPause = false;
    public bool IsPause { get { return isPause; } }

    void Awake()
    {
        //Instance
        if (instance == null)
        {
            instance = this;
        }
        else { DestroyImmediate(gameObject); }

        gameDifficulties = LevelManager.instance.GetGameDifficulties();
        entity = GameObject.FindGameObjectWithTag("Player")?.GetComponent<PlayerScript>();
    }

    public PlayerScript GetPlayer() { return entity; }

    public void SetPauseValue(bool pause)
    {
        if (pause == true)
        {
            Time.timeScale = 0;
            isPause = true;
        }
        else
        {
            Time.timeScale = 1;
            isPause = false;
        }
    }

    void SaveGame()
    {

    }
    void LoadGame()
    {
        
    }
}
