using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;


public enum GameDifficulties{
    Easy,
    Normal,
    Hard
}
public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    private GameDifficulties gameDifficult;
    public GameDifficulties SetDifficulties{
        set{gameDifficult = value;}
    }

    [SerializeField] private UpgradeStatsSystem upgradeStatsUI;

    private bool isPause = false;
    public bool IsPause { get { return isPause; } }

    void Awake()
    {
        //Instance
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else { DestroyImmediate(gameObject); }
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Tab)){
            upgradeStatsUI.ToggleVisible();
        }

        
    }

    public void ChangeScene(int index){
        SceneManager.LoadScene(index);
    }

    public void Pause(bool pause)
    {
        if (pause)
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

    void SaveGame(){

    }
    void LoadGame(){
        
    }
}
