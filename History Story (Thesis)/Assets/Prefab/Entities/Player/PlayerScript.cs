using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class PlayerScript : Entities
{
    [SerializeField] private Transform holder;

    [SerializeField] private bool canFire = true;


    private Rigidbody2D rb;
    private CollectingMyEnemy collectedEnemy;
    private SpriteRenderer sprite;
    private WeaponHolder holderData;

    private bool facingLeft = false;

    
    private TriggerFire testFiring = new TriggerFire();



    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();
        
        rb = GetComponent<Rigidbody2D>();
        sprite = GetComponent<SpriteRenderer>();
        collectedEnemy = GetComponent<CollectingMyEnemy>();
        holderData = GetComponent<WeaponHolder>();
    }

    // Update is called once per frame
    protected override void Update()
    {
        base.Update();
        
        move_dir.x = Input.GetAxisRaw("Horizontal");
        move_dir.y = Input.GetAxisRaw("Vertical");


        WeaponFiring();


        if (Input.GetKeyDown(KeyCode.LeftShift))
        {
            abilityHolder.UseAbility(0);
        }
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

    void PlayerFlip()
    {
        facingLeft = !facingLeft;
        sprite.flipX = facingLeft;
    }

    private void WeaponFiring()
    {
        //Trigger autofire
        var canSeeEnemy = collectedEnemy.getNearestEnemy != null;

        if (canFire)
        {
            if (canSeeEnemy && testFiring.isFiring(holderData.GetFireRate))
            {
                Create.CreateProjectile(holderData.GetProjectilePrefab, holder.position, holder.rotation, holderData.GetProjectileSpeed, holderData.GetProjectileDamage, LayerMask.GetMask("Enemy"));
            }
        }
        
    }

    protected override void MovementBehaviour()
    {
        rb.velocity = move_dir.normalized * GetEntityStats.GetCurrentMoveSpeed * Time.deltaTime;
    }
}
