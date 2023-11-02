using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting.Antlr3.Runtime.Misc;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public class Entities : MonoBehaviour, IDamageable
{
    public Action<float> OnHealthChanged;
    public Action<float> OnManaChanged;

    [SerializeField] private EntityStatsSO entityStatsSO;
    public EntityStatsSO GetEntityStatsSO { get { return entityStatsSO; } }

    private EntityStatistics myStats;
    public EntityStatistics GetEntityStats { get { return myStats; } }

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


    protected virtual void Start()
    {
        myStats = new EntityStatistics(entityStatsSO);
        abilityHolder = new AbilityHolder(this);

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
        if(myStats.GetCurrentHealth > 0)
        {
            // Take damage if the health is more than zero
            Debug.Log("Ouch! " + damage.ToString());

            myStats.GetCurrentHealth -= Mathf.RoundToInt(damage);
            OnHealthChanged?.Invoke(myStats.GetCurrentHealth / myStats.GetMaxHealth);

            if (myStats.GetCurrentHealth <= 0)
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
        myStats.GetCurrentHealth -= Mathf.RoundToInt(amount);
        OnHealthChanged?.Invoke(myStats.GetCurrentHealth / myStats.GetMaxHealth);
    }
   
    private void ManaGenerate(){
        //If current mana is not max, then generate mana
        if(myStats.GetCurrentMana < myStats.GetMaxMana)
        {
            if (Time.time > _manaGenerateTime)
            {
                _manaGenerateTime = Time.time + 1 / myStats.manaGenerateTime;
                
                myStats.GetCurrentMana += myStats.manaGenerateAmount;
                OnManaChanged?.Invoke(myStats.GetCurrentMana/myStats.GetMaxMana);
            }

        }
    }

    
    protected virtual void Death() // Entity death behaviour
    {
        Debug.Log("Im dead " + gameObject.name);
        gameObject.SetActive(false);
    }

}
