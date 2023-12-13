using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

[RequireComponent(typeof(AttackController))]
public class Entities : MonoBehaviour, IDamageable
{
    [SerializeField] protected bool debugMode = false;

    public event Action<bool> OnAttackInRange;

    protected Rigidbody2D rb;
    protected AttackController attackController;

    protected Timer timer = new Timer();

    [SerializeField] private SpriteRenderer entitySpriteRenderer;
    private bool facingLeft = false;

    [SerializeField] private bool canAttack = true;

    [SerializeField] private EntityStatsSO entityStatsSO;
    
    public AbilityHolder abilityHolder { get; set; }
    public EntityStatsSO GetEntityStatsSO { get => entityStatsSO; }
    public EntityStatistics GetEntityStats { get; private set; }


    protected bool targetInRange = false;


    //Entity direction
    protected Vector2 move_dir;
    public Vector2 getMoveDir  { get => move_dir.normalized; }
    
    //Effects
    private bool _canMove = true;
    public bool IsCanMove
    {
        set{_canMove = value;}
    }


    protected virtual void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        attackController = GetComponent<AttackController>();
        
        GetEntityStats = new EntityStatistics(entityStatsSO);
        abilityHolder = new AbilityHolder(this);
    }
    private void OnEnable()
    {
        GetEntityStats = new EntityStatistics(entityStatsSO);
        abilityHolder = new AbilityHolder(this);
    }
    protected virtual void Start()
    {
        //abilityHolder.OnChangeListAbilities(entityStatsSO.defaultAbilities);
    }
    protected virtual void Update()
    {
        FlipEntity();
        //AttackBehaviour(GetEntityStats.damage, GetEntityStats.currentAttackSpeed);
    }
    protected virtual void FixedUpdate()
    {
        Movement();
    }

    
    private void FlipEntity()
    {
        if(entitySpriteRenderer == null) { return; }

        if (rb.velocity.x > 0 && facingLeft)
        {
            facingLeft = !facingLeft;
            entitySpriteRenderer.flipX = facingLeft;
        }
        else if (rb.velocity.x < 0 && !facingLeft)
        {
            facingLeft = !facingLeft;
            entitySpriteRenderer.flipX = facingLeft;
        }
    }
    private void Movement() //Movement handler
    {
        if(!_canMove){ //If can move is false, the code will not run
            return;
        } 
        MovementBehaviour();
    }
    protected virtual void MovementBehaviour(){
        //Movement behaviour
    }

    private bool DodgeBehaviour() //Dodging the damage
    {
        var dodgeChance = GetEntityStats.dodgeChance * 100;
        var randomNumb = UnityEngine.Random.Range(0f, 100f);

        if(dodgeChance >= randomNumb)
        {
            //Dodge
            Debug.Log("Dodging the damage");
            return true;
        }

        //No Dodge
        return false;
    }

    public void KnockBack(Vector2 knockBackForce)
    {
        // Knockback when hit
        Rigidbody2D temp_rb = gameObject.GetComponent<Rigidbody2D>();

        temp_rb.AddForce(knockBackForce, ForceMode2D.Impulse);   
    }
    public void GenerateHealth(float healthAmount)// Generating health
    {
        var addHealth = Mathf.RoundToInt(healthAmount);
        GetEntityStats.SetCurrentHealth(healthAmount);
    }

    public virtual void TakeDamage(Entities sourceDamage, bool isCriticalDamage, float damage) // Take damage with damage dealer and critical hit
    {
        if (isCriticalDamage)
            Debug.Log("I recieved Critical Damage");

        TakeDamage(sourceDamage, damage);
    }
    public virtual void TakeDamage(Entities sourceDamage, float damage) // Take damage with damage dealer
    {
        if (GetEntityStats.currentHealth > 0)
        {
            // Take damage if the health is more than zero
            TakeDamageBehaviour(damage);

            if (GetEntityStats.currentHealth <= 0)
            {
                // Do this if the health is zero
                DeathBehaviour(sourceDamage); 
            }
        }
        else
        {
            DeathBehaviour(sourceDamage);
        }
    }
    public virtual void TakeDamageBehaviour(float damage, bool canDodgeDamage = true)//Take damage behaviour
    {
        //Behaviour of the entity when taking damage

        if (canDodgeDamage && DodgeBehaviour()) { return; } //if dodge is true, dont take damage

        var computedDamage = damage - (damage * GetEntityStats.defence);


        GetEntityStats.SetCurrentHealth(-computedDamage);
        Debug.Log("Ouch! " + damage.ToString());

        if(GetEntityStats.currentHealth <= 0)
        {
            DeathBehaviour();
        }
    }
    
    protected virtual void DeathBehaviour(Entities sourceDamage) // Entity death behaviour with damage dealer
    {
        Debug.Log("Im dead " + gameObject.name + ": " + sourceDamage.gameObject.name + " killed me!!");
        DeathBehaviour();
    }
    protected virtual void DeathBehaviour() // Entity death behaviour
    {
        Debug.Log("I died ");
        gameObject.SetActive(false);
    }

}
