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
    public static GameManager iGameManager;

    private GameDifficulties gameDifficult;
    public GameDifficulties SetDifficulties{
        set{gameDifficult = value;}
    }
    [SerializeField] private UpgradeStatsUI upgradeStatsUI;

    void Awake()
    {
        //Instance
        if (iGameManager == null)
        {
            iGameManager = this;
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

    void SaveGame(){

    }
    void LoadGame(){
        
    }
}
