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


    private PlayerInputs playerInput;
    private InputAction move;

    private WeaponHolder holderData;

    //Testing
    public IInteractable nearestObject;


    protected override void Awake()
    {
        base.Awake();

        playerInput = new PlayerInputs();
    }

    private void OnEnable()
    {
        ButtonInputEvent_Subscribe();
        move = playerInput.Player.Move;

        playerInput.Player.Enable();
    }
    private void OnDisable()
    {
        ButtonInputEvent_Unsubscribe();
        playerInput.Player.Disable();
    }

    private void ButtonInputEvent_Subscribe()
    {
        playerInput.Player.SkillBag.started += AbilityInventoryController;
        playerInput.Player.Skill0.canceled += Skill0Trigger;
        playerInput.Player.Skill1.canceled += Skill1Trigger;
        playerInput.Player.Skill2.canceled += Skill2Trigger;
        playerInput.Player.Skill3.canceled += Skill3Trigger;

        playerInput.Player.Interact.canceled += InteractTrigger;
    }
    private void ButtonInputEvent_Unsubscribe()
    {
        playerInput.Player.Skill0.canceled -= Skill0Trigger;
        playerInput.Player.Skill1.canceled -= Skill1Trigger;
        playerInput.Player.Skill2.canceled -= Skill2Trigger;
        playerInput.Player.Skill3.canceled -= Skill3Trigger;

        playerInput.Player.Interact.canceled -= InteractTrigger;
    }


    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();

        
        holderData = GetComponent<WeaponHolder>();
    }

    protected override void MovementBehaviour()
    {
        if (GameManager.instance.IsPlayerCanMove() == false) { return; }

        move_dir = move.ReadValue<Vector2>().normalized;
        rb.velocity = move_dir.normalized * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    }

    //protected override void AttackBehaviour(float damage, float attackSpeed)
    //{
    //    base.AttackBehaviour(damage, attackSpeed);

    //    //Trigger autofire
    //    var canSeeEnemy = collectedEnemy?.GetNearestEnemy != null;

        

    //    if (canSeeEnemy && timer.TimerNode(GetEntityStats.currentAttackSpeed))
    //    {
    //        if (Vector2.Distance(transform.position, collectedEnemy.GetNearestEnemy.position) > GetEntityStats.rangedAttackField) { return; }

    //        //Creating bullet
    //        var bullet = Create.CreateProjectile("player_bullet", holderData.GetProjectilePrefab, holder.position, holder.rotation,
    //            holderData.GetProjectileSpeed, GetEntityStats.damage, LayerMask.GetMask("Enemy"));

    //        var bullet_script = bullet.GetComponent<Bullet>();
    //        bullet_script.SetDistanceLimit(transform.position, GetEntityStats.rangedAttackField);
    //    }
    //}


    private void InteractTrigger(InputAction.CallbackContext obj)
    {
        //throw new System.NotImplementedException();
        Debug.Log("Player");

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


    private void AbilityInventoryController(InputAction.CallbackContext obj)
    {
        //Toggle
        var uiState = UIManager.instance.SetUIState;
        if (uiState == UIManager.GUIState.InGame)
            UIManager.instance.SetGUIState(UIManager.GUIState.Inventory);
        else if (uiState == UIManager.GUIState.Inventory)
            UIManager.instance.SetGUIState(UIManager.GUIState.InGame);

    }
    private void Skill0Trigger(InputAction.CallbackContext obj) => abilityHolder.UseAbility(0);
    private void Skill1Trigger(InputAction.CallbackContext obj) => abilityHolder.UseAbility(1);
    private void Skill2Trigger(InputAction.CallbackContext obj) => abilityHolder.UseAbility(2);
    private void Skill3Trigger(InputAction.CallbackContext obj) => abilityHolder.UseAbility(3);


    private void OnDrawGizmosSelected()
    {
        if (debugMode == false) { return; }

        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, interactRadius);

        Gizmos.color = Color.white;
        Gizmos.DrawWireSphere(transform.position, GetEntityStats.rangedAttackField);
    }
}
