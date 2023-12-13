using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;


public enum EntityStats
{
    Health,
    Mana,
    Defence,
    MoveSpeed,
    AttackSpeed,
    CriticalChance,
    CriticalDamage,
    Dodging,
    AttackField,
    LifeSteal,
    ManaRegenAmount,
    ManaRegenTime
}
public enum CategoryStats
{
    MainStats,
    Speed,
    Accuracy,
    Sight,
    Regeneration
}

[System.Serializable]
public class EntityStatistics
{
    public Action<float, float> OnCurrentHealthChange;


    //Main Stats
    public float maxHealth { get; private set; }
    public float currentHealth { get; private set; }
    public float damage { get; private set; }
    public float defence { get; private set; }

    //About Speed
    public float maxMoveSpeed { get; private set; }
    public float currentMoveSpeed { get; set; }
    public float maxAttackSpeed { get; private set; }
    public float currentAttackSpeed { get; set; }

    //Accuracy
    public float criticalDamage { get; private set; }
    public float dodgeChance { get; private set; }


    //Sight
    public float criticalChance { get; private set; }

    public bool canRangedAttack { get; private set; }
    public float rangedAttackField { get; private set; }
    public bool canMeleeAttack { get; private set; }
    public float meleeAttackField { get; private set; }
   
    


    //Regeneration
    public float lifeSteal { get; private set; } //Every kill absorb health



    public EntityStatistics(EntityStatsSO entityStatsSO){
        maxHealth = entityStatsSO.maxHealth;
        currentHealth = maxHealth;

        damage = entityStatsSO.damage;
        defence = entityStatsSO.defense;

        maxAttackSpeed = entityStatsSO.attackSpeed;
        currentAttackSpeed = maxAttackSpeed;
        maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        currentMoveSpeed = maxMoveSpeed;

        criticalDamage = entityStatsSO.criticalDamage;
        dodgeChance = entityStatsSO.dodgingChance;

        criticalChance = entityStatsSO.criticalChance;

        canRangedAttack = entityStatsSO.canRangedAttack;
        rangedAttackField = entityStatsSO.rangedAttackField;

        canMeleeAttack = entityStatsSO.canMeleeAttack;
        meleeAttackField = entityStatsSO.meleeAttackField;

        lifeSteal = entityStatsSO.lifeSteal;



    }

    public void ModifiedMoveSpeed(float amount)
    {
        currentMoveSpeed = amount;
    }

    public void SetCurrentHealth(float amount)
    {
        currentHealth = Mathf.Clamp(currentHealth + amount, 0, maxHealth);
        OnCurrentHealthChange?.Invoke(currentHealth, maxHealth);
    }

    public void UpgradeCategoryStats(CategoryStats categoryStats)
    {
        switch (categoryStats)
        {
            case CategoryStats.MainStats:
                maxHealth += 10;
                defence += 0.01f;
                break;
            case CategoryStats.Speed:
                maxMoveSpeed += 0.2f;
                maxAttackSpeed += 0.01f;
                break;
            case CategoryStats.Accuracy:
                criticalDamage += 0.002f;
                dodgeChance += 0.002f;
                break;
            case CategoryStats.Sight:
                criticalChance += 0.002f;
                rangedAttackField += 0.005f;
                break;
            case CategoryStats.Regeneration:
                lifeSteal += 1.5f;
                break;
            default:
                Debug.LogWarning("Upgrade stats is undefined");
                break;
        }
    }



    public void UpgradeMaxHealth(int amount)
    {
        maxHealth += amount;
        currentHealth = maxHealth;
    }
    public void UpgradeDefence(int amount)
    {
        defence += amount;
    }




}
