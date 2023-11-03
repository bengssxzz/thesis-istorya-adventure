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
    public int defence { get; private set; }

    //About Speed
    public float maxMoveSpeed { get; private set; }
    public float currentMoveSpeed { get; set; }
    public float maxAttackSpeed { get; private set; }

    //Luck
    public int criticalDamage { get; private set; }
    public int dodgeChance { get; private set; }


    //Sight
    public int criticalChance { get; private set; }
    public int attackField { get; private set; }

    //Regeneration
    public int lifeSteal { get; private set; }
    public int manaAmountRegen { get; private set; }
    public float manaRegenSpeed { get; private set; }



    public EntityStatistics(EntityStatsSO entityStatsSO){
        maxHealth = entityStatsSO.maxHealth;
        currentHealth = maxHealth;
        maxMana = entityStatsSO.maxMana;
        currentMana = maxMana;
        maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        currentMoveSpeed = maxMoveSpeed;

        //manaGenerateAmount = entityStatsSO.manaGenerateAmount;
        //manaGenerateTime = entityStatsSO.manaGenerateTime;
        //defence = entityStatsSO.defence;
        //baseDamage = entityStatsSO.baseDamage;
        //cooldownReduction = entityStatsSO.cooldownReduction;

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
                defence += 2;
                break;
            case CategoryStats.Speed:
                maxMoveSpeed += 2;
                maxAttackSpeed += 2;
                break;
            case CategoryStats.Luck:
                criticalDamage += 2;
                dodgeChance += 10;
                break;
            case CategoryStats.Sight:
                criticalChance += 10;
                attackField += 5;
                break;
            case CategoryStats.Regeneration:
                lifeSteal += 5;
                manaAmountRegen += 10;
                manaRegenSpeed -= 0.2f;
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
    public void UpgradeLuck(int amount)
    {

    }
    public void UpgradeMoveSpeed(int amount)
    {

    }
    public void UpgradeAttackSpeed(int amount)
    {

    }
    public void UpgradeSight(int amount)
    {

    }
    public void UpgradeGenerate(int amount)
    {

    }
    public void UpgradeSkillCooldown(int amount)
    {

    }




}
