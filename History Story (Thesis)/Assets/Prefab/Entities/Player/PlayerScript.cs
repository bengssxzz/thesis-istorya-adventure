using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using UnityEngine.InputSystem;

public class PlayerScript : Entities
{
    [SerializeField] private SpriteRenderer sprite;
    [SerializeField] private Transform holder;

    [SerializeField] private bool canFire = true;

    private PlayerInputs playerInput;
    private InputAction move;

    private Rigidbody2D rb;
    private CollectingMyEnemy collectedEnemy;
    private WeaponHolder holderData;

    private bool facingLeft = false;


    protected override void Awake()
    {
        base.Awake();

        playerInput = new PlayerInputs();
    }

    private void OnEnable()
    {
        move = playerInput.Player.Move;
        ButtonInputEvent_Subscribe();

        playerInput.Player.Enable();
    }
    private void OnDisable()
    {
        ButtonInputEvent_Unsubscribe();
        playerInput.Player.Disable();
    }

    private void ButtonInputEvent_Subscribe()
    {
        playerInput.Player.Skill0.started += Skill0Trigger;
        playerInput.Player.Skill1.started += Skill1Trigger;
        playerInput.Player.Skill2.started += Skill2Trigger;
        playerInput.Player.Skill3.started += Skill3Trigger;
        playerInput.Player.Interact.started += InteractTrigger;
    }
    private void ButtonInputEvent_Unsubscribe()
    {
        playerInput.Player.Skill0.started -= Skill0Trigger;
        playerInput.Player.Skill1.started -= Skill1Trigger;
        playerInput.Player.Skill2.started -= Skill2Trigger;
        playerInput.Player.Skill3.started -= Skill3Trigger;
        playerInput.Player.Interact.started -= InteractTrigger;
    }

    

   

    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();
        
        rb = GetComponent<Rigidbody2D>();
        collectedEnemy = GetComponent<CollectingMyEnemy>();
        holderData = GetComponent<WeaponHolder>();
    }

    // Update is called once per frame
    protected override void Update()
    {
        base.Update();
        
        //move_dir.x = Input.GetAxisRaw("Horizontal");
        //move_dir.y = Input.GetAxisRaw("Vertical");


        WeaponFiring();


        //if (Input.GetKeyDown(KeyCode.LeftShift))
        //{
        //    abilityHolder.UseAbility(0);
        //}
    }

    protected override void FixedUpdate()
    {
        base.FixedUpdate();

        if(rb.velocity.x > 0 && facingLeft)
        {
            PlayerFlip();
        }
        else if (rb.velocity.x < 0 && !facingLeft)
        {
            PlayerFlip();
        }
    }

    protected override void MovementBehaviour()
    {
        if (GameManager.instance.IsPlayerCanMove() == false) { return; }

        move_dir = move.ReadValue<Vector2>().normalized;
        rb.velocity = move_dir.normalized * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    }
    void PlayerFlip()
    {
        facingLeft = !facingLeft;
        sprite.flipX = facingLeft;
    }

    private void WeaponFiring()
    {
        //Trigger autofire
        var canSeeEnemy = collectedEnemy?.getNearestEnemy != null;

        if (canFire)
        {
            if (canSeeEnemy && timer.TimerNode(GetEntityStats.currentAttackSpeed))
            {
                Create.CreateProjectile("player_bullet", holderData.GetProjectilePrefab, holder.position, holder.rotation,
                    holderData.GetProjectileSpeed, GetEntityStats.damage, LayerMask.GetMask("Enemy"));
            }
        }
        
    }

    

    public void AddExperience(int amount)
    {
        GetLevelSystem.AddExperience(amount);
    }


    private void InteractTrigger(InputAction.CallbackContext obj)
    {
        throw new System.NotImplementedException();
    }
    private void Skill0Trigger(InputAction.CallbackContext obj)
    {
        abilityHolder.UseAbility(0);
    }
    private void Skill1Trigger(InputAction.CallbackContext obj)
    {
        abilityHolder.UseAbility(1);
    }
    private void Skill2Trigger(InputAction.CallbackContext obj)
    {
        abilityHolder.UseAbility(2);
    }
    private void Skill3Trigger(InputAction.CallbackContext obj)
    {
        abilityHolder.UseAbility(3);
    }

    

    

    

    //public void OnMove(InputValue value) => move_dir = value.Get<Vector2>();

    //public void OnSkill0()
    //{
    //    abilityHolder.UseAbility(0);
    //}

    //public void OnSkill1()
    //{
    //    abilityHolder.UseAbility(1);
    //}

    //public void OnSkill2()
    //{
    //    abilityHolder.UseAbility(2);
    //}

    //public void OnSkill3()
    //{
    //    abilityHolder.UseAbility(3);
    //}

    //public void OnPause()
    //{
    //    Debug.Log("Pause");
    //}
}
