using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using MoreMountains.Feedbacks;
using System.Linq;

[RequireComponent(typeof(AttackController))]
[RequireComponent(typeof(AbilityController))]

public class Entities : MonoBehaviour, IDamageable, IRegenHealth
{
    protected Rigidbody2D rb;
    //protected Animator animator_controller;
    private DropLoot dropLoot;

    [Header("Entity Base")]
    [SerializeField] protected bool debugMode = false;

    [SerializeField] private EntityStatsSO entityStatsSO;
    //[SerializeField] private SpriteRenderer entitySpriteRenderer;
    [SerializeField] private Transform actorTransform;
    [SerializeField] private Animator animator_controller;

    [Space(15)]
    [Header("Entity Feedback")]
    [SerializeField] private MMF_Player hurtFeedback;
    [SerializeField] private MMF_Player diedFeedback;

    //Events
    public event Action<bool> OnAttackInRange;
    public event Action OnHit;


    //Getter & Setter
    public Rigidbody2D GetRigidbody2D { get { return rb; } } //Get Rigidbody2D
    public Transform GetActorTransform { get { return actorTransform; } }
    public AttackController GetAttack_Controller { get; private set; } //Get attack controller
    public AbilityController GetAbility_Controller { get; private set; } //Get ability controller
    public EntityStatistics GetEntityStats { get; private set; } //Get entity stats handler
    //public bool IsCanAttack { get { return _canAttack; } set { _canAttack = value; } }
    public Vector2 GetMoveDirection { get; protected set; }
    public bool IsCanMove { get; set; } = true;

    //Private variables
    private bool facingLeft = false;



    protected virtual void Awake()
    {
        rb = GetComponent<Rigidbody2D>();

        GetEntityStats = new EntityStatistics(entityStatsSO);

        GetAttack_Controller = GetComponent<AttackController>();
        GetAbility_Controller = GetComponent<AbilityController>();


        TryGetComponent<DropLoot>(out dropLoot);
    }
    protected virtual void OnEnable()
    {
    }
    protected virtual void OnDisable()
    {
    }



    protected virtual void Start()
    {
        GetAbility_Controller.InitializedDefaultAbilities(entityStatsSO.abilities);
    }
    protected virtual void Update()
    {
        //GetAttack_Controller.EnableAttacking = _canAttack;
        //FlipEntity(rb.velocity);
    }
    protected virtual void FixedUpdate()
    {
        Movement();
    }


    protected void FlipEntity(Vector2 velocity)
    {
        //if (entitySpriteRenderer == null) { return; }

        //if (direction.x > 0 && facingLeft)
        //{
        //    facingLeft = !facingLeft;
        //    entitySpriteRenderer.flipX = facingLeft;
        //}
        //else if (direction.x < 0 && !facingLeft)
        //{
        //    facingLeft = !facingLeft;
        //    entitySpriteRenderer.flipX = facingLeft;
        //}

        //if (entitySpriteRenderer == null) { return; }

        if(actorTransform == null)
        {
            Debug.LogWarning($"IT WONT FLIP BECAUSE THERE ARE NO ACTOR TRANSFORM ATTACH IN {gameObject.name}'s ENTITY SCRIPT");
            return;
        }

        if (velocity.x > 0 && facingLeft)
        {
            //Facing Left
            var localScale = actorTransform.localScale;
            localScale.x *= -1;
            actorTransform.localScale = localScale;

            facingLeft = !facingLeft;
            //entitySpriteRenderer.flipX = facingLeft;
        }
        else if (velocity.x < 0 && !facingLeft)
        {
            //Facing Right
            var localScale = actorTransform.localScale;
            localScale.x *= -1;
            actorTransform.localScale = localScale;

            facingLeft = !facingLeft;
            //entitySpriteRenderer.flipX = facingLeft;
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
            return; } //If can move is false, the code will not run

        //Animation
        PlayMoveAnimation(rb.velocity);

        MovementBehaviour();
    }
    protected virtual void MovementBehaviour()
    {
        //Movement behaviour
    }
    protected  void PlayMoveAnimation(Vector3 velocity)
    {
        var magnitude = velocity.magnitude;
        if (animator_controller != null)
        {
            animator_controller.SetFloat("move_speed", magnitude);
        }
    }
    public float GetCalculatedDamage(out bool isCritical)
    {
        var plainDamage = GetEntityStats.currentDamage; //Current damage

        //Calculate if this is critical damage
        isCritical = ThesisUtility.RandomGetChanceBool(GetEntityStats.currentCriticalChance);

        if (isCritical)
        {
            //Critical Damage
            //float criticalDamage = damage * sourceDamage.GetEntityStats.maxCriticalDamage / 100f;
            //damage += criticalDamage;
            plainDamage += GetEntityStats.currentCriticalDamage;
        }


        return plainDamage;
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
    public void TakeDamage(float damage, Entities sourceDamage = null, bool isCritical = false)
    {
        if (ThesisUtility.RandomGetChanceBool(GetEntityStats.maxDodgeChance.ConvertNumberToPercent())) { return; } //if dodge is true, dont take damage

        //Compute the total damage
        //Formula: Damage - defense %
        //computedDamage = (damage - (damage * GetEntityStats.maxDefense / 100f));
        var computedDamage = ThesisUtility.ComputeAddedValueWithPercentage(damage, -GetEntityStats.maxDefense);

        GetEntityStats.SetCurrentHealth(-computedDamage);
        OnHit?.Invoke();

        if (debugMode)
            Debug.Log($"{this.name} Taking Damage from {sourceDamage.name} || Critical: {isCritical}" +
                $"Original: {damage};  Defense: {GetEntityStats.maxDefense.ConvertNumberToPercent()}; Computed: {computedDamage}");

        if (GetEntityStats.currentHealth <= 0)
        {
            Died(sourceDamage);
            return;
        }

        //Do this behaviour if the entity is not yet died
        hurtFeedback?.PlayFeedbacks();
        TakingDamageBehaviour();
    }
    //public void TakeDamage(float damage, Entities sourceDamage = null, bool canDodge = false, bool canCritical = true) //Taking damage
    //{
    //    float computedDamage = 0;

    //    //Dodge
    //    if (canDodge == true)
    //        if (ThesisUtility.RandomGetChanceBool(GetEntityStats.maxDodgeChance.ConvertNumberToPercent())) { return; } //if dodge is true, dont take damage

    //    //Critical Computation
    //    if (canCritical == true)
    //    {
    //        bool isCritical;

    //        if (sourceDamage != null)
    //        {
    //            //Critical damage if the sourceDamage is not null

    //            isCritical = ThesisUtility.RandomGetChanceBool(sourceDamage.GetEntityStats.maxCriticalChance.ConvertNumberToPercent());
    //            if (isCritical)
    //            {
    //                //float criticalDamage = damage * sourceDamage.GetEntityStats.maxCriticalDamage / 100f;
    //                //damage += criticalDamage;
    //                damage += ThesisUtility.ComputeAddedValueWithPercentage(damage, sourceDamage.GetEntityStats.maxCriticalDamage);
    //            }
    //        }
    //        else
    //        {
    //            //Critical damage if the sourceDamage is null

    //            isCritical = ThesisUtility.RandomGetChanceBool(0.5f); //Critical chance is 50%
    //            if (isCritical)
    //            {
    //                float criticalDamage = damage * ThesisUtility.RandomGetFloat(0.01f, 0.5f); //Min critical damage is 1% and Max critical damage is 50%
    //                damage += criticalDamage;
    //            }
    //        }

    //    }

    //    //Compute the total damage
    //    //Formula: Damage - defense %
    //    //computedDamage = (damage - (damage * GetEntityStats.maxDefense / 100f));
    //    computedDamage = ThesisUtility.ComputeAddedValueWithPercentage(damage, -GetEntityStats.maxDefense); 

    //    GetEntityStats.SetCurrentHealth(-computedDamage);
    //    OnHit?.Invoke();

    //    if (debugMode)
    //        Debug.Log(String.Format("{3} Taking Damage || Original: {0};  Defense: {1}; Computed: {2};", damage, GetEntityStats.maxDefense.ConvertNumberToPercent(), computedDamage, this.name));

    //    if (GetEntityStats.currentHealth <= 0)
    //    {
    //        Died(sourceDamage);
    //        return;
    //    }

    //    //Do this behaviour if the entity is not yet died
    //    hurtFeedback?.PlayFeedbacks();
    //    TakingDamageBehaviour();
    //}

    protected virtual void TakingDamageBehaviour() //Do this behaviour when taking damage
    {
        //Taking damage behaviour
    }
    public void RegenHealth(float healthAmount)
    {
        GetEntityStats.SetCurrentHealth(healthAmount);
    }

    private void Died(Entities sourceDamage) // Entity died
    {
        if (sourceDamage != null)
        {
            if (debugMode)
                Debug.Log(String.Format("Died|| Victim Name: {0}, Killer Name: {1}", this.name, sourceDamage.name));

            sourceDamage.KillerReward(sourceDamage, this);
        }


        if(diedFeedback != null)
        {
            diedFeedback?.PlayFeedbacks();
        }
        else
        {
            DiedEffects();
        }

        DeathBehaviour();
    }
    protected virtual void DiedEffects()
    {
        gameObject.SetActive(false);
    }
    protected virtual void DeathBehaviour() // Entity death behaviour
    {
        if(dropLoot != null)
        {
            dropLoot.LootDrop();
        }
    }

    
}
