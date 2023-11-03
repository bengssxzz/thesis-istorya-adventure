using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting.Antlr3.Runtime.Misc;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using ThesisLibrary;

public class Entities : MonoBehaviour, IDamageable
{
    public Action<float> OnHealthChanged;
    public Action<float> OnManaChanged;

    protected Timer timer = new Timer();

    [SerializeField] private EntityStatsSO entityStatsSO;
    public EntityStatsSO GetEntityStatsSO { get { return entityStatsSO; } }

    private LevelSystem levelSystem;
    public LevelSystem GetLevelSystem { get { return levelSystem; } }

    private EntityStatistics entityStats;
    public EntityStatistics GetEntityStats { get { return entityStats; } }

    public AbilityHolder abilityHolder;

    private float _manaGenerateTime;

    //Entity direction
    protected Vector2 move_dir;
    public Vector2 getMoveDir
    {
        get { return move_dir.normalized; }
    }
    
    //Effects
    private bool _canMove = true;
    public bool canMove
    {
        set{_canMove = value;}
    }

    private void Awake()
    {
        levelSystem = new LevelSystem(entityStatsSO);
        entityStats = new EntityStatistics(entityStatsSO);
        abilityHolder = new AbilityHolder(this);
    }

    protected virtual void Start()
    {
        abilityHolder.OnChangeListAbilities(entityStatsSO.defaultAbilities);
    }

    protected virtual void Update()
    {
        ManaGenerate();
    }

    protected virtual void FixedUpdate()
    {
        Movement();
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

    

    public void KnockBack(Vector2 knockBackForce)
    {
        // Knockback when hit
        Rigidbody2D temp_rb = gameObject.GetComponent<Rigidbody2D>();

        temp_rb.AddForce(knockBackForce, ForceMode2D.Impulse);   
    }
    public virtual void TakeDamage(float damage) // Entity take damage behaviour
    {
        if(entityStats.currentHealth > 0)
        {
            // Take damage if the health is more than zero
            Debug.Log("Ouch! " + damage.ToString());

            entityStats.currentHealth -= Mathf.RoundToInt(damage);
            OnHealthChanged?.Invoke(entityStats.currentHealth / entityStats.currentHealth);

            if (entityStats.currentHealth <= 0)
            {
                // Do this is the health is zero
                Death(); 
            }
        }
        else
        {
            Death();
        }
    }
    public void GenerateHealth(float amount)
    {
        entityStats.currentHealth -= Mathf.RoundToInt(amount);
        OnHealthChanged?.Invoke(entityStats.currentHealth / entityStats.currentHealth);
    }
   
    private void ManaGenerate(){
        //If current mana is not max, then generate mana

        if(entityStats.currentMana < entityStats.maxMana)
        {
            if (timer.TimerNode(entityStats.manaRegenSpeed)) //Timer node
            {
                entityStats.currentMana += entityStats.manaAmountRegen;
                OnManaChanged?.Invoke(entityStats.currentMana / entityStats.maxMana);
                Debug.Log("Generate Mana");
            }
            //if (Time.time > _manaGenerateTime)
            //{
            //    _manaGenerateTime = Time.time + 1 / entityStats.manaRegenSpeed;
                
            //    entityStats.currentMana += entityStats.manaAmountRegen;
            //    OnManaChanged?.Invoke(entityStats.currentMana / entityStats.maxMana);
            //}

        }
    }

    
    protected virtual void Death() // Entity death behaviour
    {
        Debug.Log("Im dead " + gameObject.name);
        gameObject.SetActive(false);
    }

}
