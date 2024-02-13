using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using UnityEngine.InputSystem;
using System.Linq;
using System;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using PixelCrushers.DialogueSystem;

public class PlayerScript : Entities
{
    public PlayerInteractHandler GetInteractHandler { get; private set; }

    //private InputAction move;
    GameObject playerr;



    protected override void Awake()
    {
        base.Awake();
        //move = InputManager.Instance.PlayerActionInput.actions["Move"];

        GetInteractHandler = GetComponent<PlayerInteractHandler>();

    }

    protected override void OnEnable()
    {
        base.OnEnable();

        LUASubscribe();
        ButtonInputEvent_Subscribe();
    }
    protected override void OnDisable()
    {
        base.OnDisable();

        LUAUnsubscribe();
        ButtonInputEvent_Unsubscribe();

    }

    protected override void Start()
    {
        base.Start();

        var playerData = SaveGameDataManager.Instance.LoadPlayerData();
        if(playerData != null)
        {
            Debug.Log("SET CURRENT ABILITY FROM LOCAL SAVED FILE");
            GetAbility_Controller.ListOfCurrentAbilities = playerData.usedCurrentAbilities;
        }
        else
        {
            Debug.LogWarning("THERE ARE NO PLAYER FILE EXIST");
        }



        if (playerr != null)
        {
            Debug.Log("PLAYER CREATED");
            Instantiate(playerr);
        }
    }

    protected override void Update()
    {
        base.Update();
        FlipEntity(rb.velocity);
    }


    private void LUASubscribe()
    {
        Lua.RegisterFunction(nameof(CollectArtifacts), this, SymbolExtensions.GetMethodInfo(() => CollectArtifacts(string.Empty)));
        Lua.RegisterFunction(nameof(CollectAbilities), this, SymbolExtensions.GetMethodInfo(() => CollectAbilities(string.Empty)));
    }
    private void LUAUnsubscribe()
    {
        Lua.UnregisterFunction(nameof(CollectArtifacts));
        Lua.UnregisterFunction(nameof(CollectAbilities));
    }

    private void ButtonInputEvent_Subscribe()
    {
        InputManager.Instance.OnPlayerMove += MovementDirection;
        InputManager.Instance.OnSkill0_Released += Skill0Trigger;
        InputManager.Instance.OnSkill1_Released += Skill1Trigger;
        InputManager.Instance.OnSkill2_Released += Skill2Trigger;
        InputManager.Instance.OnSkill3_Released += Skill3Trigger;

    }


    private void ButtonInputEvent_Unsubscribe()
    {
        InputManager.Instance.OnPlayerMove -= MovementDirection;
        InputManager.Instance.OnSkill0_Released -= Skill0Trigger;
        InputManager.Instance.OnSkill1_Released -= Skill1Trigger;
        InputManager.Instance.OnSkill2_Released -= Skill2Trigger;
        InputManager.Instance.OnSkill3_Released -= Skill3Trigger;
    }

    private void CollectArtifacts(string artifactsName)
    {
        Debug.Log($"ARTIFACT COLLECTED {artifactsName}");
        GameManager.Instance.CollectArtifacts(artifactsName);
    }
    private void CollectAbilities(string abilityName)
    {
        Debug.Log($"ABILITY COLLECTED {abilityName}");
        GameManager.Instance.CollectedAbilities(abilityName);
    }

    protected override void MovementBehaviour()
    {

        //GetMoveDirection = move.ReadValue<Vector2>().normalized;
        rb.velocity = GetMoveDirection * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    }

    protected override void KillerReward(Entities killerEntity, Entities victimEntity) //When I killed the enemy
    {
        
        GenerateHealth(GetEntityStats.lifeSteal);

        //TODO: Invoke some achievement
    }


    private void AbilityInventoryController(InputAction.CallbackContext obj) //Show/Hide ability inventory
    {
        //Toggle
        var uiState = UIManager.Instance.ChangeUIState;
        if (uiState == UIManager.GUIState.InGame)
            UIManager.Instance.ChangeUIState = UIManager.GUIState.Inventory;
        else if (uiState == UIManager.GUIState.Inventory)
            UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;

    }

    protected override void DeathBehaviour()
    {
        //Open deathscreen

        UI_Manager.Instance.OpenMenu("Died UI");

    }

    private void MovementDirection(Vector2 direction) => GetMoveDirection = direction;
    private void Skill0Trigger() => GetAbility_Controller.UseAbility(0);
    private void Skill1Trigger() => GetAbility_Controller.UseAbility(1);
    private void Skill2Trigger() => GetAbility_Controller.UseAbility(2);
    private void Skill3Trigger() => GetAbility_Controller.UseAbility(3);





   

}
