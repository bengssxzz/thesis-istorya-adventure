using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting.Antlr3.Runtime.Misc;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using ThesisLibrary;

[RequireComponent(typeof(CollectingMyEnemy))]
[RequireComponent(typeof(AbilityController))]
public class Entities : MonoBehaviour, IDamageable
{
    protected Timer timer = new Timer();

    [SerializeField] private EntityStatsSO entityStatsSO;
    public EntityStatsSO GetEntityStatsSO { get { return entityStatsSO; } }

    private EntityStatistics entityStats;
    public EntityStatistics GetEntityStats { get { return entityStats; } }

    public AbilityHolder abilityHolder;

    //Entity direction
    protected Vector2 move_dir;
    public Vector2 getMoveDir
    {
        get { return move_dir.normalized; }
    }
    
    //Effects
    private bool _canMove = true;
    public bool IsCanMove
    {
        set{_canMove = value;}
    }

    protected virtual void Awake()
    {
        entityStats = new EntityStatistics(entityStatsSO);
        abilityHolder = new AbilityHolder(this);
    }

    protected virtual void Start()
    {
        //abilityHolder.OnChangeListAbilities(entityStatsSO.defaultAbilities);
    }

    protected virtual void Update()
    {
        
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
            TakeDamageBehaviour(damage);
            
            entityStats.SetCurrentHealth(-damage);

            if (entityStats.currentHealth <= 0.001)
            {
                // Do this if the health is zero
                Death(); 
            }
        }
        else
        {
            Death();
        }
    }
    public virtual void TakeDamageBehaviour(float damage)
    {
        //Behaviour of the entity when taking damage
        Debug.Log("Ouch! " + damage.ToString());
    }
    public void GenerateHealth(float healthAmount)
    {
        var addHealth = Mathf.RoundToInt(healthAmount);
        entityStats.SetCurrentHealth(healthAmount);
    }
   
    protected virtual void Death() // Entity death behaviour
    {
        Debug.Log("Im dead " + gameObject.name);
        gameObject.SetActive(false);
    }

}
