using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;


public enum EntityStats
{
    Health,
    Mana,
    Defense,
    MoveSpeed,
    AttackSpeed,
    CriticalChance,
    CriticalDamage,
    Dodging,
    LifeSteal
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
    private Entities entity;

    public Action<float, float> OnCurrentHealthChange;


    //Main Stats
    public float maxHealth { get; private set; }
    public float currentHealth { get; private set; }
    public float damage { get; private set; }
    public float defense { get; private set; }

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

    //Regeneration
    public float lifeSteal { get; private set; } //Every kill absorb health


#region Temporary Saved Data for temporary modification

    private float saved_curr_health;
    private float saved_curr_mana;
    private float saved_curr_damage;
    private float saved_curr_defense;
    private float saved_curr_movementSpeed;
    private float saved_curr_attackSpeed;
    private float saved_curr_criticalDamage;
    private float saved_curr_criticalChance;
    private float saved_curr_dodgeChance;
    private float saved_curr_lifeSteal;

    private bool is_already_modified_health;
    private bool is_already_modified_mana;
    private bool is_already_modified_damage;
    private bool is_already_modified_defense;
    private bool is_already_modified_movementSpeed;
    private bool is_already_modified_attackSpeed;
    private bool is_already_modified_criticalDamage;
    private bool is_already_modified_criticalChance;
    private bool is_already_modified_dodgeChance;
    private bool is_already_modified_lifeSteal;

#endregion


    public EntityStatistics(EntityStatsSO entityStatsSO, Entities entity){
        maxHealth = entityStatsSO.maxHealth;
        currentHealth = maxHealth;

        damage = entityStatsSO.damage;
        defense = entityStatsSO.defense;

        maxAttackSpeed = entityStatsSO.attackSpeed;
        currentAttackSpeed = maxAttackSpeed;
        maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        currentMoveSpeed = maxMoveSpeed;

        criticalDamage = entityStatsSO.criticalDamage;
        dodgeChance = entityStatsSO.dodgingChance;

        criticalChance = entityStatsSO.criticalChance;



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
                defense += 0.01f;
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
        defense += amount;
    }


    public void TemporaryStatsModification(EntityStats modifyStats, float addModifyValue)
    {
        switch (modifyStats)
        {
            case EntityStats.Health:
                break;
            case EntityStats.Mana:
                break;
            case EntityStats.Defense:
                if (is_already_modified_defense)
                {
                    defense = saved_curr_defense; //Revert the original stats first
                }
                else
                {
                    is_already_modified_defense = true;
                }

                saved_curr_defense = defense;  //Save the current stats
                defense += addModifyValue; //Modify the stats

                break;

            case EntityStats.MoveSpeed:
                if (is_already_modified_movementSpeed)
                {
                    currentMoveSpeed = saved_curr_movementSpeed; //Revert the original stats first
                }
                else
                {
                    is_already_modified_movementSpeed = true;
                }

                saved_curr_movementSpeed = currentMoveSpeed;  //Save the current stats
                currentMoveSpeed += addModifyValue; //Modify the stats

                break;

            case EntityStats.AttackSpeed:
                if (is_already_modified_attackSpeed)
                {
                    currentAttackSpeed = saved_curr_attackSpeed; //Revert the original stats first
                }
                else
                {
                    is_already_modified_attackSpeed = true;
                }

                saved_curr_attackSpeed = currentAttackSpeed;  //Save the current stats
                currentAttackSpeed += addModifyValue; //Modify the stats

                break;

            case EntityStats.CriticalChance:
                if (is_already_modified_criticalChance)
                {
                    criticalChance = saved_curr_criticalChance; //Revert the original stats first
                }
                else
                {
                    is_already_modified_criticalChance = true;
                }

                saved_curr_criticalChance = criticalChance;  //Save the current stats
                criticalChance += addModifyValue; //Modify the stats

                break;

            case EntityStats.CriticalDamage:
                if (is_already_modified_criticalDamage)
                {
                    criticalDamage = saved_curr_criticalDamage; //Revert the original stats first
                }
                else
                {
                    is_already_modified_criticalDamage = true;
                }

                saved_curr_criticalDamage = criticalDamage;  //Save the current stats
                criticalDamage += addModifyValue; //Modify the stats

                break;

            case EntityStats.Dodging:
                if (is_already_modified_dodgeChance)
                {
                    dodgeChance = saved_curr_dodgeChance; //Revert the original stats first
                }
                else
                {
                    is_already_modified_dodgeChance = true;
                }

                saved_curr_dodgeChance = dodgeChance;  //Save the current stats
                dodgeChance += addModifyValue; //Modify the stats

                break;

            case EntityStats.LifeSteal:
                if (is_already_modified_lifeSteal)
                {
                    lifeSteal = saved_curr_lifeSteal; //Revert the original stats first
                }
                else
                {
                    is_already_modified_lifeSteal = true;
                }

                saved_curr_lifeSteal = lifeSteal;  //Save the current stats
                lifeSteal += addModifyValue; //Modify the stats

                break;
        }
    }
    public void RevertCurrentStats(EntityStats modifyStats)
    {
        switch (modifyStats)
        {
            case EntityStats.Health:
                //Do not modify health
                break;
            case EntityStats.Mana:
                //Do not modify mana
                break;
            case EntityStats.Defense:
                defense = saved_curr_defense;
                is_already_modified_defense = false;
                break;
            case EntityStats.MoveSpeed:
                currentMoveSpeed = saved_curr_movementSpeed;
                is_already_modified_movementSpeed = false;
                break;
            case EntityStats.AttackSpeed:
                currentAttackSpeed = saved_curr_attackSpeed;
                is_already_modified_attackSpeed = false;
                break;
            case EntityStats.CriticalChance:
                criticalChance = saved_curr_criticalChance;
                is_already_modified_criticalChance = false;
                break;
            case EntityStats.CriticalDamage:
                criticalDamage = saved_curr_criticalDamage;
                is_already_modified_criticalDamage = false;
                break;
            case EntityStats.Dodging:
                dodgeChance = saved_curr_dodgeChance;
                is_already_modified_dodgeChance = false;
                break;
            case EntityStats.LifeSteal:
                lifeSteal = saved_curr_lifeSteal;
                is_already_modified_lifeSteal = false;
                break;
        }
    }


}
