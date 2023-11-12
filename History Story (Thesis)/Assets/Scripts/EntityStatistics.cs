using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;


public enum Stats
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
    Luck,
    Sight,
    Regeneration
}

[System.Serializable]
public class EntityStatistics
{
    //Main Stats
    public float maxHealth { get; private set; }
    public float currentHealth { get; set; }
    public float maxMana { get; private set; }
    public float currentMana { get; set; }
    public float damage { get; private set; }
    public int defence { get; private set; }

    //About Speed
    public float maxMoveSpeed { get; private set; }
    public float currentMoveSpeed { get; set; }
    public float maxAttackSpeed { get; private set; }
    public float currentAttackSpeed { get; set; }

    //Luck
    public int criticalDamage { get; private set; }
    public float dodgeChance { get; private set; }


    //Sight
    public float criticalChance { get; private set; }
    public float attackField { get; private set; }

    //Regeneration
    public float lifeSteal { get; private set; }
    public float manaAmountRegen { get; private set; }
    public float manaRegenSpeed { get; private set; } //0.5 lowest



    public EntityStatistics(EntityStatsSO entityStatsSO){
        maxHealth = entityStatsSO.maxHealth;
        currentHealth = maxHealth;
        maxMana = entityStatsSO.maxMana;
        currentMana = maxMana;
        damage = entityStatsSO.damage;
        defence = entityStatsSO.defence;

        maxAttackSpeed = entityStatsSO.attackSpeed;
        currentAttackSpeed = maxAttackSpeed;
        maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        currentMoveSpeed = maxMoveSpeed;

        criticalDamage += entityStatsSO.criticalDamage;
        dodgeChance += entityStatsSO.dodgingChance;

        criticalChance += entityStatsSO.criticalChance;
        attackField += entityStatsSO.attackField;

        lifeSteal += entityStatsSO.lifeSteal;
        manaAmountRegen += entityStatsSO.manaRegenAmount;
        manaRegenSpeed += entityStatsSO.manaRegenTime;



    }

    public void ModifiedMoveSpeed(float amount)
    {
        currentMoveSpeed = amount;
    }
    public void UpgradeCategoryStats(CategoryStats categoryStats)
    {
        switch (categoryStats)
        {
            case CategoryStats.MainStats:
                maxHealth += 10;
                maxMana += 10;
                defence += 1;
                break;
            case CategoryStats.Speed:
                maxMoveSpeed += 0.5f;
                maxAttackSpeed += 0.01f;
                break;
            case CategoryStats.Luck:
                criticalDamage += 2;
                dodgeChance += 0.02f;
                break;
            case CategoryStats.Sight:
                criticalChance += 0.05f;
                attackField += 0.05f;
                break;
            case CategoryStats.Regeneration:
                lifeSteal += 5;
                manaAmountRegen += 0.15f;
                manaRegenSpeed += 0.02f;
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
    public void UpgradeMaxMana(int amount)
    {
        maxMana += amount;
        currentMana = maxMana;
    }
    public void UpgradeDefence(int amount)
    {
        defence += amount;
    }




}
