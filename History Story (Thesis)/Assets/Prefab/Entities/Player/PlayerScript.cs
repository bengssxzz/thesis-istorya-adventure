using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using UnityEngine.InputSystem;
using System.Linq;

public class PlayerScript : Entities
{
    [SerializeField] private Transform holder;


    [SerializeField] private bool canInteract = false;
    [SerializeField] private float interactRadius = 0.5f;


    //private PlayerInputs playerInput;
    private InputAction move;

    //Testing
    public IInteractable nearestObject;


    protected override void Awake()
    {
        base.Awake();
        move = InputManager.instance.PlayerActionInput.actions["Move"];

        //playerInput = new PlayerInputs();
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        ButtonInputEvent_Subscribe();


        //playerInput.Player.Enable();
        //InputManager.instance.PlayerActionInputs.Player.Enable();
        //move = playerInput.Player.Move;
        //move = InputManager.instance.PlayerActionInputs.Player.Move;

        //move = InputManager.instance.PlayerActionInput.actions["Move"];
    }
    protected override void OnDisable()
    {
        base.OnDisable();

        ButtonInputEvent_Unsubscribe();

        //playerInput.Player.Disable();
        //InputManager.instance.PlayerActionInputs.Player.Disable();

    }

    protected override void Start()
    {
        base.Start();

    }

    private void ButtonInputEvent_Subscribe()
    {
        InputManager.instance.PlayerActionInput.actions["Skill Bag"].started += AbilityInventoryController;

        InputManager.instance.PlayerActionInput.actions["Skill 0"].canceled += Skill0Trigger;
        InputManager.instance.PlayerActionInput.actions["Skill 1"].canceled += Skill1Trigger;
        InputManager.instance.PlayerActionInput.actions["Skill 2"].canceled += Skill2Trigger;
        InputManager.instance.PlayerActionInput.actions["Skill 3"].canceled += Skill3Trigger;

        InputManager.instance.PlayerActionInput.actions["Interact"].started += InteractTrigger;



        //InputManager.instance.PlayerActionInputs.Player.SkillBag.started += AbilityInventoryController;

        //InputManager.instance.PlayerActionInputs.Player.Skill0.canceled += Skill0Trigger;
        //InputManager.instance.PlayerActionInputs.Player.Skill1.canceled += Skill1Trigger;
        //InputManager.instance.PlayerActionInputs.Player.Skill2.canceled += Skill2Trigger;
        //InputManager.instance.PlayerActionInputs.Player.Skill3.canceled += Skill3Trigger;

        //InputManager.instance.PlayerActionInputs.Player.Interact.started += InteractTrigger;


        //playerInput.Player.SkillBag.started += AbilityInventoryController;
        //playerInput.Player.Skill0.canceled += Skill0Trigger;
        //playerInput.Player.Skill1.canceled += Skill1Trigger;
        //playerInput.Player.Skill2.canceled += Skill2Trigger;
        //playerInput.Player.Skill3.canceled += Skill3Trigger;

        //playerInput.Player.Interact.started += InteractTrigger;
    }
    private void ButtonInputEvent_Unsubscribe()
    {
        InputManager.instance.PlayerActionInput.actions["Skill Bag"].started -= AbilityInventoryController;

        InputManager.instance.PlayerActionInput.actions["Skill 0"].canceled -= Skill0Trigger;
        InputManager.instance.PlayerActionInput.actions["Skill 1"].canceled -= Skill1Trigger;
        InputManager.instance.PlayerActionInput.actions["Skill 2"].canceled -= Skill2Trigger;
        InputManager.instance.PlayerActionInput.actions["Skill 3"].canceled -= Skill3Trigger;

        InputManager.instance.PlayerActionInput.actions["Interact"].started -= InteractTrigger;


        //InputManager.instance.PlayerActionInputs.Player.SkillBag.started -= AbilityInventoryController;

        //InputManager.instance.PlayerActionInputs.Player.Skill0.canceled -= Skill0Trigger;
        //InputManager.instance.PlayerActionInputs.Player.Skill1.canceled -= Skill1Trigger;
        //InputManager.instance.PlayerActionInputs.Player.Skill2.canceled -= Skill2Trigger;
        //InputManager.instance.PlayerActionInputs.Player.Skill3.canceled -= Skill3Trigger;

        //InputManager.instance.PlayerActionInputs.Player.Interact.started -= InteractTrigger;

        //playerInput.Player.SkillBag.started -= AbilityInventoryController;
        //playerInput.Player.Skill0.canceled -= Skill0Trigger;
        //playerInput.Player.Skill1.canceled -= Skill1Trigger;
        //playerInput.Player.Skill2.canceled -= Skill2Trigger;
        //playerInput.Player.Skill3.canceled -= Skill3Trigger;

        //playerInput.Player.Interact.started -= InteractTrigger;
    }

    protected override void MovementBehaviour()
    {
        GetMoveDirection = move.ReadValue<Vector2>().normalized;
        rb.velocity = GetMoveDirection * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    }

    protected override void KillerReward(Entities killerEntity, Entities victimEntity) //When I killed the enemy
    {
        
        GenerateHealth(GetEntityStats.lifeSteal);

        //TODO: Invoke some achievement
    }


    private void InteractTrigger(InputAction.CallbackContext obj) //Trigger the interactable object
    {
        //Get all the object inside the radius
        Collider2D[] interactable = Physics2D.OverlapCircleAll(transform.position, interactRadius);

        // Find objects with the "IInteractable" script in the array
        IInteractable[] dialogTriggers = interactable.Select(collider => collider.GetComponent<IInteractable>()).Where(dialogTrigger => dialogTrigger != null).ToArray();

        // Sort the array based on distance to the current position
        dialogTriggers = dialogTriggers.OrderBy(dialogTrigger => Vector2.Distance(transform.position, ((MonoBehaviour)dialogTrigger).transform.position)).ToArray();
        nearestObject = dialogTriggers.FirstOrDefault();


        //Call the Interactable function of the object closest.
        nearestObject?.Intereractable();
    }
    private void AbilityInventoryController(InputAction.CallbackContext obj) //Show/Hide ability inventory
    {
        //Toggle
        var uiState = UIManager.instance.ChangeUIState;
        if (uiState == UIManager.GUIState.InGame)
            UIManager.instance.ChangeUIState = UIManager.GUIState.Inventory;
        else if (uiState == UIManager.GUIState.Inventory)
            UIManager.instance.ChangeUIState = UIManager.GUIState.InGame;

    }

    private void Skill0Trigger(InputAction.CallbackContext obj) => Ability_Controller.UseAbility(0);
    private void Skill1Trigger(InputAction.CallbackContext obj) => Ability_Controller.UseAbility(1);
    private void Skill2Trigger(InputAction.CallbackContext obj) => Ability_Controller.UseAbility(2);
    private void Skill3Trigger(InputAction.CallbackContext obj) => Ability_Controller.UseAbility(3);








    private void OnDrawGizmosSelected()
    {
        if (debugMode == false) { return; }

        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, interactRadius);
    }

    
}
