using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using MoreMountains.Feedbacks; 

[RequireComponent(typeof(AttackController))]
[RequireComponent(typeof(AbilityController))]

public class Entities : MonoBehaviour, IDamageable
{
    protected Rigidbody2D rb;
    protected Animator animator_controller;

    [Header("Entity Base")]
    [SerializeField] protected bool debugMode = false;

    [SerializeField] private EntityStatsSO entityStatsSO;
    [SerializeField] private SpriteRenderer entitySpriteRenderer;

    [SerializeField] private bool _canAttack = true;

    [Space(15)]
    [Header("Entity Feedback")]
    [SerializeField] private MMF_Player hurtFeedback;
    [SerializeField] private MMF_Player diedFeedback;

    //Events
    public event Action<bool> OnAttackInRange;
    public event Action OnHit;


    //Getter & Setter
    public Rigidbody2D GetRigidbody2D { get { return rb; } } //Get Rigidbody2D
    public AttackController GetAttack_Controller { get; private set; } //Get attack controller
    public AbilityController GetAbility_Controller { get; set; } //Get ability controller
    public EntityStatistics GetEntityStats { get; private set; } //Get entity stats handler
    public bool IsCanAttack { get { return _canAttack; } set { _canAttack = value; } }
    public Vector2 GetMoveDirection { get; protected set; }
    public bool IsCanMove { get; set; } = true;

    //Private variables
    private bool facingLeft = false;



    protected virtual void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        animator_controller = GetComponent<Animator>();

        GetAttack_Controller = GetComponent<AttackController>();
        GetAbility_Controller = GetComponent<AbilityController>();
        GetAbility_Controller?.InitializedComponent(this, entityStatsSO.abilities);

        GetEntityStats = new EntityStatistics(entityStatsSO, this);
    }
    protected virtual void OnEnable()
    {
        GetAbility_Controller.InitializedComponent(this, entityStatsSO.abilities);

        GetEntityStats = new EntityStatistics(entityStatsSO, this);
    }
    protected virtual void OnDisable()
    {

    }
    protected virtual void Start()
    {
        GetAttack_Controller.EnableAttacking = _canAttack;

        //abilityHolder.OnChangeListAbilities(entityStatsSO.defaultAbilities);
    }
    protected virtual void Update()
    {
        GetAttack_Controller.EnableAttacking = _canAttack;
        FlipEntity();
    }
    protected virtual void FixedUpdate()
    {
        Movement();
    }


    private void FlipEntity()
    {
        if (entitySpriteRenderer == null) { return; }

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

    public virtual void StopMovement(bool canMove)
    {
        IsCanMove = canMove;
        rb.velocity = Vector2.zero;
    }
    private void Movement() //Movement handler
    {
        if (IsCanMove == false) {
            //rb.velocity = Vector2.zero;
            return; } //If can move is false, the code will not run

        //Animation
        if(animator_controller != null)
        {
            animator_controller.SetFloat("move_speed", rb.velocity.magnitude);
        }

        MovementBehaviour();
    }
    protected virtual void MovementBehaviour()
    {
        //Movement behaviour
    }

    public void GenerateHealth(float healthAmount)// Generating health
    {
        GetEntityStats.SetCurrentHealth(healthAmount);
    }

    public IEnumerator KnockBack(Transform damagePosition, float knockBackPower) //Knockback
    {
        Debug.Log("KNOCKING BACK");
        IsCanMove = false;
        Vector2 knockDirection = (transform.position - damagePosition.position).normalized;
        Vector2 calculatedKnock = knockDirection * knockBackPower * rb.mass;
        rb.AddForce(calculatedKnock, ForceMode2D.Impulse);

        yield return new WaitForSeconds(0.1f);
        rb.velocity = Vector2.zero;
        IsCanMove = true;
    }
    
    protected virtual void KillerReward(Entities killerEntity, Entities victimEntity)
    {
        //Debug.Log("Victim: " + victimEntity.name + " :: Killer: " + killerEntity.name);
    }
    
    public void TakeDamage(float damage, Entities sourceDamage = null, bool canDodge = false, bool canCritical = true) //Taking damage
    {
        float computedDamage = 0;

        //Dodge
        if (canDodge == true)
            if (ThesisUtility.RandomGetChanceBool(GetEntityStats.maxDodgeChance.ConvertNumberToPercent())) { return; } //if dodge is true, dont take damage

        //Critical Computation
        if (canCritical == true)
        {
            bool isCritical;

            if (sourceDamage != null)
            {
                //Critical damage if the sourceDamage is not null

                isCritical = ThesisUtility.RandomGetChanceBool(sourceDamage.GetEntityStats.maxCriticalChance.ConvertNumberToPercent());
                if (isCritical)
                {
                    //float criticalDamage = damage * sourceDamage.GetEntityStats.maxCriticalDamage / 100f;
                    //damage += criticalDamage;
                    damage += ThesisUtility.ComputeAddedValueWithPercentage(damage, sourceDamage.GetEntityStats.maxCriticalDamage);
                }
            }
            else
            {
                //Critical damage if the sourceDamage is null

                isCritical = ThesisUtility.RandomGetChanceBool(0.5f); //Critical chance is 50%
                if (isCritical)
                {
                    float criticalDamage = damage * ThesisUtility.RandomGetFloat(0.01f, 0.5f); //Min critical damage is 1% and Max critical damage is 50%
                    damage += criticalDamage;
                }
            }

        }

        //Compute the total damage
        //Formula: Damage - defense %
        //computedDamage = (damage - (damage * GetEntityStats.maxDefense / 100f));
        computedDamage = ThesisUtility.ComputeAddedValueWithPercentage(damage, -GetEntityStats.maxDefense); 

        GetEntityStats.SetCurrentHealth(-computedDamage);
        OnHit?.Invoke();

        if (debugMode)
            Debug.Log(String.Format("{3} Taking Damage || Original: {0};  Defense: {1}; Computed: {2};", damage, GetEntityStats.maxDefense.ConvertNumberToPercent(), computedDamage, this.name));

        if (GetEntityStats.currentHealth <= 0)
        {
            Died(sourceDamage);
            return;
        }

        //Do this behaviour if the entity is not yet died
        hurtFeedback?.PlayFeedbacks();
        TakingDamageBehaviour();
    }
    protected virtual void TakingDamageBehaviour() //Do this behaviour when taking damage
    {
        //Taking damage behaviour
    }


    private void Died(Entities sourceDamage) // Entity died
    {
        if (sourceDamage != null)
        {
            if (debugMode)
                Debug.Log(String.Format("Died|| Victim Name: {0}, Killer Name: {1}", this.name, sourceDamage.name));

            sourceDamage.KillerReward(sourceDamage, this);
        }

        diedFeedback?.PlayFeedbacks();
        gameObject.SetActive(false);
        DeathBehaviour();
    }
    protected virtual void DeathBehaviour() // Entity death behaviour
    {
        
    }







    //[SerializeField] protected bool debugMode = false;

    //public event Action<bool> OnAttackInRange;

    //[SerializeField] private EntityStatsSO entityStatsSO;
    //[SerializeField] private SpriteRenderer entitySpriteRenderer;
    //private bool facingLeft = false;

    //protected Rigidbody2D rb;
    //protected AttackController attackController;


    //[SerializeField] private bool _canAttack = true;
    //public bool IsCanAttack { get { return _canAttack; } set { _canAttack = value; } }

    //public AbilityHolder abilityHolder { get; set; }
    //public AbilityController Ability_Controller { get; set; }
    //public EntityStatistics GetEntityStats { get; private set; }
    //public Vector2 GetMoveDirection { get; protected set; }
    //public bool IsCanMove { get; set; } = true;




    //protected virtual void Awake()
    //{
    //    rb = GetComponent<Rigidbody2D>();
    //    attackController = GetComponent<AttackController>();
    //    Ability_Controller = GetComponent<AbilityController>();

    //    GetEntityStats = new EntityStatistics(entityStatsSO, this);
    //    abilityHolder = new AbilityHolder(this, entityStatsSO.abilities);
    //}
    //protected virtual void OnEnable()
    //{
    //    GetEntityStats = new EntityStatistics(entityStatsSO, this);
    //    abilityHolder = new AbilityHolder(this, entityStatsSO.abilities);
    //}
    //protected virtual void OnDisable()
    //{

    //}
    //protected virtual void Start()
    //{
    //    attackController.EnableAttacking = _canAttack;
    //    //abilityHolder.OnChangeListAbilities(entityStatsSO.defaultAbilities);
    //}
    //protected virtual void Update()
    //{
    //    attackController.EnableAttacking = _canAttack;
    //    FlipEntity();
    //}
    //protected virtual void FixedUpdate()
    //{
    //    Movement();
    //}


    //private void FlipEntity()
    //{
    //    if(entitySpriteRenderer == null) { return; }

    //    if (rb.velocity.x > 0 && facingLeft)
    //    {
    //        facingLeft = !facingLeft;
    //        entitySpriteRenderer.flipX = facingLeft;
    //    }
    //    else if (rb.velocity.x < 0 && !facingLeft)
    //    {
    //        facingLeft = !facingLeft;
    //        entitySpriteRenderer.flipX = facingLeft;
    //    }
    //}
    //private void Movement() //Movement handler
    //{
    //    if(IsCanMove == false){ return; } //If can move is false, the code will not run

    //    //TODO: Move animation

    //    MovementBehaviour();
    //}
    //protected virtual void MovementBehaviour(){
    //    //Movement behaviour
    //}

    //public void GenerateHealth(float healthAmount)// Generating health
    //{
    //    GetEntityStats.SetCurrentHealth(healthAmount);
    //}

    //public IEnumerator KnockBack(Transform damagePosition, float knockBackPower) //Knockback
    //{
    //    Debug.Log("KNOCKING BACK");
    //    IsCanMove = false;
    //    Vector2 knockDirection = (transform.position - damagePosition.position).normalized;
    //    Vector2 calculatedKnock = knockDirection * knockBackPower * rb.mass;
    //    rb.AddForce(calculatedKnock, ForceMode2D.Impulse);

    //    yield return new WaitForSeconds(0.1f);
    //    rb.velocity = Vector2.zero;
    //    IsCanMove = true;
    //}
    //public void TakeDamage(float damage, Entities sourceDamage = null, bool canDodge = false, bool canCritical = true) //Taking damage
    //{
    //    float computedDamage = 0;

    //    //Dodge
    //    if(canDodge == true) 
    //        if (ThesisUtility.RandomGetChanceBool(GetEntityStats.dodgeChance)) { return; } //if dodge is true, dont take damage

    //    //Critical Computation
    //    if (canCritical == true) 
    //    {
    //        bool isCritical;

    //        if (sourceDamage != null)
    //        {
    //            //Critical damage if the sourceDamage is not null

    //            isCritical = ThesisUtility.RandomGetChanceBool(sourceDamage.GetEntityStats.criticalChance);
    //            if (isCritical)
    //            {
    //                float criticalDamage = damage * sourceDamage.GetEntityStats.criticalDamage;
    //                damage += criticalDamage;
    //            }
    //        }
    //        else
    //        {
    //            //Critical damage if the sourceDamage is null

    //            isCritical = ThesisUtility.RandomGetChanceBool(0.5f); //Critical chance is 50%
    //            if (isCritical)
    //            {
    //                float criticalDamage = damage * ThesisUtility.RandomGetFloat(0.01f ,0.6f); //Min critical damage is 1% and Max critical damage is 60%
    //                damage += criticalDamage;
    //            }
    //        }

    //    }

    //    //Compute the total damage
    //    //Formula: Damage - defense %
    //    computedDamage = (damage - (damage * GetEntityStats.defence)) * -1;

    //    GetEntityStats.SetCurrentHealth(computedDamage);

    //    if(debugMode)
    //        Debug.Log(String.Format("{3} Taking Damage || Original: {0};  Defense: {1}; Computed: {2};", damage, GetEntityStats.defence, computedDamage, this.name));

    //    if (GetEntityStats.currentHealth <= 0)
    //    {
    //        Died(sourceDamage);
    //        return;
    //    }

    //    //Do this behaviour if the entity is not yet died
    //    TakingDamageBehaviour();
    //}
    //protected virtual void TakingDamageBehaviour() //Do this behaviour when taking damage
    //{
    //    //Taking damage behaviour
    //}

    //protected virtual void KillerReward(Entities killerEntity, Entities victimEntity)
    //{
    //    //Debug.Log("Victim: " + victimEntity.name + " :: Killer: " + killerEntity.name);
    //}

    //private void Died(Entities sourceDamage) // Entity died
    //{
    //    if (sourceDamage != null)
    //    {
    //        if(debugMode)
    //            Debug.Log(String.Format("Died|| Victim Name: {0}, Killer Name: {1}", this.name, sourceDamage.name));

    //        sourceDamage.KillerReward(sourceDamage, this);
    //    }

    //    DeathBehaviour();
    //}
    //protected virtual void DeathBehaviour() // Entity death behaviour
    //{
    //    gameObject.SetActive(false);
    //}
}
