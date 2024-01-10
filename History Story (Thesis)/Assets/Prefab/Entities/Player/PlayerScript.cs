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
        move = InputManager.Instance.PlayerActionInput.actions["Move"];
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

    protected override void Start()
    {
        base.Start();

    }

    private void ButtonInputEvent_Subscribe()
    {
        InputManager.Instance.PlayerActionInput.actions["Skill Bag"].started += AbilityInventoryController;

        InputManager.Instance.PlayerActionInput.actions["Skill 0"].canceled += Skill0Trigger;
        InputManager.Instance.PlayerActionInput.actions["Skill 1"].canceled += Skill1Trigger;
        InputManager.Instance.PlayerActionInput.actions["Skill 2"].canceled += Skill2Trigger;
        InputManager.Instance.PlayerActionInput.actions["Skill 3"].canceled += Skill3Trigger;

        InputManager.Instance.PlayerActionInput.actions["Interact"].started += InteractTrigger;
    }
    private void ButtonInputEvent_Unsubscribe()
    {
        InputManager.Instance.PlayerActionInput.actions["Skill Bag"].started -= AbilityInventoryController;

        InputManager.Instance.PlayerActionInput.actions["Skill 0"].canceled -= Skill0Trigger;
        InputManager.Instance.PlayerActionInput.actions["Skill 1"].canceled -= Skill1Trigger;
        InputManager.Instance.PlayerActionInput.actions["Skill 2"].canceled -= Skill2Trigger;
        InputManager.Instance.PlayerActionInput.actions["Skill 3"].canceled -= Skill3Trigger;

        InputManager.Instance.PlayerActionInput.actions["Interact"].started -= InteractTrigger;
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
        var uiState = UIManager.Instance.ChangeUIState;
        if (uiState == UIManager.GUIState.InGame)
            UIManager.Instance.ChangeUIState = UIManager.GUIState.Inventory;
        else if (uiState == UIManager.GUIState.Inventory)
            UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;

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
