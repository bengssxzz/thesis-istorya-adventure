using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using MoreMountains.Feedbacks;
using System.Linq;
using System.Threading;



[RequireComponent(typeof(AbilityController))]
public class Entities : MonoBehaviour, IDamageable, IRegenHealth
{
    protected Rigidbody2D rb;
    private DropLoot dropLoot;
    private AttackHandler attackHandler;

    private EntityStatistics entityStatistics;
    private AbilityController abilityController;
    private CancellationTokenSource entityCancellation;

    [Header("Entity Base")]
    [SerializeField] protected bool debugMode = false;

    [SerializeField] protected EntityStatsSO entityStatsSO;
    [SerializeField] private Transform actorTransform;
    [SerializeField] private Animator animator_controller;

    [Space(15)]
    [Header("Entity Feedback")]
    [SerializeField] private ParticleSystem diedParticle;
    [SerializeField] private MMF_Player hurtFeedback;
    [SerializeField] private MMF_Player diedFeedback;

    //Events
    public event Action<bool> OnAttackInRange;
    public event Action OnHit;


    //Getter & Setter
    public CancellationToken GetEntityCancellationToken { get { return entityCancellation.Token; } }
    public Rigidbody2D GetRigidbody2D { get { return rb; } } //Get Rigidbody2D
    public Transform GetActorTransform { get { return actorTransform; } }
    public AttackHandler GetAttackHandler { get { return attackHandler; } }
    public DropLoot GetDropLoot { get { return dropLoot; } set { dropLoot = value; } }
    //public AttackController GetAttack_Controller { get; private set; } //Get attack controller
    public AbilityController GetAbility_Controller { get { return abilityController; } } //Get ability controller
    public EntityStatistics GetEntityStats { get { return entityStatistics; } set { entityStatistics = value;  } } //Get entity stats handler
    //public bool IsCanAttack { get { return _canAttack; } set { _canAttack = value; } }
    public Vector2 GetMoveDirection { get; protected set; }
    public bool IsCanMove { get; set; } = true;

    //Private variables
    private bool facingLeft = false;



    private void OnDestroy()
    {
        entityCancellation?.Cancel();
        entityCancellation?.Dispose();
    }
    protected virtual void Awake()
    {
        rb = GetComponent<Rigidbody2D>();

        entityStatistics = new EntityStatistics(entityStatsSO);

        //GetAttack_Controller = GetComponent<AttackController>();
        abilityController = GetComponent<AbilityController>();
        //GetAbility_Controller.InitializedDefaultAbilities(entityStatsSO.abilities);


        TryGetComponent<DropLoot>(out dropLoot);
        TryGetComponent<AttackHandler>(out attackHandler);
        
    }
    protected virtual void OnEnable()
    {
        entityCancellation = new CancellationTokenSource();

        entityStatistics.InvokeCurrentHealthEvent();
        entityStatistics.InitializeCancellationToken(entityCancellation.Token);
    }
    protected virtual void OnDisable()
    {
        entityCancellation?.Cancel();
    }




    protected virtual void Start()
    {
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
        IsCanMove = !canMove;
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
    //public float GetCalculatedDamage(out bool isCritical, float overwriteCritical = 0f)
    //{
    //    var plainDamage = GetEntityStats.currentDamage; //Current damage

    //    //Calculate if this is critical damage
    //    if(overwriteCritical > 0)
    //    {
    //        isCritical = ThesisUtility.RandomGetChanceBool(overwriteCritical);
    //    }
    //    else
    //    {
    //        isCritical = ThesisUtility.RandomGetChanceBool(GetEntityStats.currentCriticalChance);
    //    }

    //    if (isCritical)
    //    {
    //        //Critical Damage
    //        //float criticalDamage = damage * sourceDamage.GetEntityStats.maxCriticalDamage / 100f;
    //        //damage += criticalDamage;
    //        plainDamage += GetEntityStats.currentCriticalDamage;
    //    }


    //    return plainDamage;
    //}

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
        var computedDamage = ThesisUtility.ComputeAddedValueWithPercentage(damage, -GetEntityStats.currentDefense);

        GetEntityStats.SetCurrentHealth(-computedDamage);
        OnHit?.Invoke();

        if (debugMode)
            Debug.Log($"{this.name} Taking Damage from {sourceDamage?.name} || Critical: {isCritical}" +
                $"Original: {damage};  Defense: {GetEntityStats.currentDefense.ConvertNumberToPercent()}; Computed: {computedDamage}");

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
    public void RegenHealth(float healthAmount)
    {
        var calculateRegen = healthAmount * (GetEntityStats.lifeSteal / 100);
        GetEntityStats.SetCurrentHealth(calculateRegen);    
    }

    private void Died(Entities sourceDamage) // Entity died
    {
        if (sourceDamage != null)
        {
            if (debugMode)
                Debug.Log(String.Format("Died|| Victim Name: {0}, Killer Name: {1}", this.name, sourceDamage.name));

            sourceDamage.KillerReward(sourceDamage, this);
        }



        if (diedParticle != null)
        {
            var centerPosition = attackHandler.GetBaseAttackPosition.position;
            var particle = ObjectPooling.Instance.GetObjectInPool("particle", diedParticle.gameObject, centerPosition, true);
            particle.GetComponent<ParticleSystem>().Play();
        }

        diedFeedback?.PlayFeedbacks();


        DeathBehaviour();
        DiedEffects();
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
