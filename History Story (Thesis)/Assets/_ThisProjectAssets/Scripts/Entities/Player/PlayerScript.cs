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
using Cysharp.Threading.Tasks;
using MoreMountains.Feedbacks;



public class PlayerScript : Entities
{
    [Space(15)]
    [SerializeField] private Transform playerVisuals;

    [SerializeField] private MMF_Player collectedFeedback;

    public PlayerInteractHandler GetInteractHandler { get; private set; }

    protected override async void Awake()
    {
        base.Awake();

        GetInteractHandler = GetComponent<PlayerInteractHandler>();

        InitializedDefaultAbilities(entityStatsSO.abilities);

        await UniTask.Delay(5);
        var playerData = SaveGameDataManager.Instance.LoadPlayerData();

        if (playerData != null)
        {
            //Load a save stats
            if (playerData.playerStats != null)
            {
                GetEntityStats = playerData.playerStats;
            }

            if (playerData.usedCurrentAbilities != null)
            {
                List<AbilityScript> usedAbility = new List<AbilityScript>(playerData.usedCurrentAbilities);
                GetAbility_Controller.ListOfCurrentAbilities = usedAbility;
            }
        }

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

        GetEntityStats.InvokeCurrentHealthEvent();
    }

    protected override void Update()
    {
        base.Update();
        FlipEntity(rb.velocity);

        if (Input.GetKeyDown(KeyCode.P))
        {
            CollectFeedbackModified("FUCK YOU UNITY");
        }
        if (Input.GetKeyDown(KeyCode.O))
        {
            SetFloatingText("HAHAHAHAH", Color.green);
        }
    }



    #region LUA FUNCTIONS
    private void LUASubscribe()
    {
        Lua.RegisterFunction(nameof(CollectArtifacts), this, SymbolExtensions.GetMethodInfo(() => CollectArtifacts(string.Empty)));
        Lua.RegisterFunction(nameof(CollectAbilities), this, SymbolExtensions.GetMethodInfo(() => CollectAbilities(string.Empty)));
        Lua.RegisterFunction(nameof(ShowAlertUI), this, SymbolExtensions.GetMethodInfo(() => ShowAlertUI(string.Empty, (double)0)));

    }
    private void LUAUnsubscribe()
    {
        Lua.UnregisterFunction(nameof(CollectArtifacts));
        Lua.UnregisterFunction(nameof(CollectAbilities));
        Lua.UnregisterFunction(nameof(ShowAlertUI));

    }
    private void CollectArtifacts(string artifactsName)
    {
        Debug.Log($"ARTIFACT COLLECTED {artifactsName}");
        GameManager.Instance.CollectArtifacts(artifactsName);
        CollectFeedbackModified("Ability Collected: " + artifactsName);
    }
    private void CollectAbilities(string abilityName)
    {
        Debug.Log($"ABILITY COLLECTED {abilityName}");
        GameManager.Instance.CollectedAbilities(abilityName);
        CollectFeedbackModified("Ability Collected: " + abilityName);
    }
    private void ShowAlertUI(string message, double delay)
    {
        DialogueManager.ShowAlert(message, (float)delay);
    }

    public void CollectFeedbackModified(string valueText)
    {
        if(collectedFeedback == null) { return; }


        MMF_FloatingText newFT = collectedFeedback.GetFeedbackOfType<MMF_FloatingText>();
        newFT.Value = valueText;

        collectedFeedback.PlayFeedbacks(transform.position);
    }

    #endregion




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





    private void InitializedDefaultAbilities(List<AbilityScript> defaultAbility)
    {
        Debug.Log("INITIALIZE THE ABILITY COMPONENT");
        var listOfCollectedAbility = GameManager.Instance.GetListOfCollectedAbility;

        //GetAbility_Controller.ListOfCurrentAbilities = new List<AbilityScript>(defaultAbility);
        GetAbility_Controller.ListOfCurrentAbilities = new List<AbilityScript>(new AbilityScript[4]); 

        foreach (AbilityScript ability in defaultAbility)
        {
            if (listOfCollectedAbility.Contains(ability) || ability == null)
                continue;

            GameManager.Instance.CollectedAbilities(ability);
        }
    }


    public void SetPlayerVisual(bool state)
    {
        playerVisuals.gameObject.SetActive(state);
        IsCanMove = state;
        GetAttackHandler.IsCanAttack = state;
        //GetAttack_Controller.EnableAttacking = state;
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
