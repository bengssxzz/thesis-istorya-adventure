using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using UnityEngine.InputSystem;
using System.Linq;
using System;
using UnityEngine.SceneManagement;

public class PlayerScript : Entities, IDataPersistenceObject
{
    //[SerializeField] private Transform placeHolder;
    //private GameObject pickedObject;
    //public bool hasAlreadyPickup { get
    //    {
    //        return pickedObject != null;
    //    } }
    //public GameObject PickedObject { 
    //    set {

    //        if(value == null)
    //        {
    //            if (pickedObject != null)
    //            {
    //                Debug.Log("Drop picked item");
    //                var itemObject = Instantiate(pickedObject);
    //                itemObject.name = pickedObject.name;
    //                itemObject.transform.position = transform.position;
    //                Destroy(pickedObject);
    //                pickedObject = null;
    //            }
    //            return;
    //        }

    //        if (hasAlreadyPickup)
    //        {
    //            //drop item
    //            Debug.Log("Swap picked item");
    //            var itemObject = Instantiate(pickedObject);
    //            itemObject.name = value.name;
    //            itemObject.transform.position = value.transform.position;
    //            Destroy(pickedObject);
    //            pickedObject = null;
    //        }

    //        value.transform.SetParent(placeHolder);
    //        value.transform.position = placeHolder.position;
    //        pickedObject = value;

    //    } 
    //}
    //public IInteractable[] test;


    //[SerializeField] private bool canInteract = false;
    //[SerializeField] private float interactRadius = 0.5f;


    //private PlayerInputs playerInput;
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

        ButtonInputEvent_Subscribe();
    }
    protected override void OnDisable()
    {
        base.OnDisable();

        ButtonInputEvent_Unsubscribe();

    }

    public void LoadData(PlayerData data)
    {
        this.GetAbility_Controller.SetListOfUnlockedAbilities(data.unlockedAbilities);
    }

    public void SaveData(ref PlayerData data)
    {
        data.unlockedAbilities = GetAbility_Controller.GetListOfUnlockedAbilities();
    }


    protected override void Start()
    {
        base.Start();



        if (playerr != null)
        {
            Debug.Log("PLAYER CREATED");
            Instantiate(playerr);
        }
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

    private void MovementDirection(Vector2 direction) => GetMoveDirection = direction;
    private void Skill0Trigger() => GetAbility_Controller.UseAbility(0);
    private void Skill1Trigger() => GetAbility_Controller.UseAbility(1);
    private void Skill2Trigger() => GetAbility_Controller.UseAbility(2);
    private void Skill3Trigger() => GetAbility_Controller.UseAbility(3);





   

}
