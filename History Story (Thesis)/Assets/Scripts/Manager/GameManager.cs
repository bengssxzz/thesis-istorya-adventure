using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;



public class GameManager : Singleton<GameManager>
{
    private PlayerScript entity;
    public PlayerScript PlayerEntity { get; private set; }

    private bool playerCanMove = true;

    [SerializeField] private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all available abilities

    public List<AbilityScript> GetAllListOfAbility => listOfAllAbilities;

    public bool IsPause { get; set; } = false;

    protected override void Awake()
    {
        base.Awake();


        PlayerEntity = GameObject.FindGameObjectWithTag("Player")?.GetComponent<PlayerScript>();
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
