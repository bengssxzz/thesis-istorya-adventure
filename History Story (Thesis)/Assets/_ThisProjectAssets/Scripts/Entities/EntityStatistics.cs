using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Mathematics;
using UnityEngine;


public enum EntityStats
{
    Health,
    Mana,
    Damage,
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

    public float maxDamage { get; private set; }
    public float currentDamage { get; private set; }

    public float maxDefense { get; private set; }
    public float currentDefense { get; private set; }

    //About Speed
    public float maxMoveSpeed { get; private set; }
    public float currentMoveSpeed { get; private set; }

    public float maxAttackSpeed { get; private set; }
    public float currentAttackSpeed { get; private set; }

    //Accuracy
    public float maxCriticalDamage { get; private set; }
    public float currentCriticalDamage { get; private set; }

    public float maxDodgeChance { get; private set; }
    public float currentDodgeChance { get; private set; }

    //Sight
    public float maxCriticalChance { get; private set; }
    public float currentCriticalChance { get; private set; }

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

        maxDamage = entityStatsSO.damage;
        currentDamage = maxDamage;

        maxDefense = entityStatsSO.defense;
        currentDefense = maxDefense;

        maxAttackSpeed = entityStatsSO.attackSpeed;
        currentAttackSpeed = maxAttackSpeed;

        maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        currentMoveSpeed = maxMoveSpeed;

        maxCriticalDamage = entityStatsSO.criticalDamage;
        currentCriticalDamage = maxCriticalDamage;

        maxDodgeChance = entityStatsSO.dodgingChance;
        currentDodgeChance = maxDodgeChance;

        maxCriticalChance = entityStatsSO.criticalChance;
        currentCriticalChance = maxCriticalChance;


        lifeSteal = entityStatsSO.lifeSteal;



    }

    #region MODIFICATION (OLD)
    public void ModifiedMoveSpeed(float amount)
    {
        currentMoveSpeed = amount;
    }

    // method to modify the defense value
    public void ModifiedDefense(float newDefense)
    {
        maxDefense = Mathf.Clamp(newDefense, 0f, 1f);
    }

    // method to modify the attackspeed value
    public void ModifiedAttackSpeed(float newAttackSpeed)
    {
        currentAttackSpeed = newAttackSpeed;
    }

    // method to modify the damage value
    public void ModifiedDamage(float newDamage)
    {
        maxDamage = newDamage;
    }

    // !Added by different person.
    // method to modify the damage value
    public void ModifiedLifesteal(float newLifesteal)
    {
        lifeSteal = newLifesteal;
    }

    public void ModifiedCriticalChance(float newCriticalChance)
    {
        maxCriticalChance = newCriticalChance;
    }

    public void ModifiedCriticalDamage(float newCriticalDamage)
    {
        maxCriticalDamage = newCriticalDamage;
    }

    // !Addition of different person ends.
    #endregion

    /* To use this in other script. For example:
     * public async void Activate(){
     *      await playerstats.TempModifiedDamage(3,3) <-- wait to finish before continue
     *      //Do some code
     * }
     * 
     * OR
     * 
     * public void Activate(){
     *       playerstats.TempModifiedDamage(3,3).ConfigureAwait(false); <-- dont wait to finish before continue
     *       //Do some code
     * }
     */
    public async Task TempModifiedDamage(float tempValue, float duration) //Damage
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            currentDamage = Mathf.Clamp(tempValue, 0, float.MaxValue); // Apply temporary value
            await Task.Yield();
        }

        // Back to the original
        currentDamage = maxDamage;
    }
    public async Task TempModifiedDefense(float tempValue, float duration) //Defense
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            currentDefense = Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value
            await Task.Yield();
        }

        // Back to the original 
        currentDefense = maxDefense;
    }
    public async Task TempModifiedMoveSpeed(float tempValue, float duration) //Movement Speed
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            currentMoveSpeed = Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value
            await Task.Yield();
        }

        // Back to the original 
        currentMoveSpeed = maxMoveSpeed;
    }
    public async Task TempModifiedAttackSpeed(float tempValue, float duration) //Attack Speed
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            maxAttackSpeed = Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value
            await Task.Yield();
        }

        // Back to the original 
        currentAttackSpeed = maxAttackSpeed;
    }
    public async Task TempModifiedCriticalDamage(float tempValue, float duration) //Critical Damage
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            currentCriticalDamage = Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value
            await Task.Yield();
        }

        // Back to the original 
        currentCriticalDamage = maxCriticalDamage;
    }
    public async Task TempModifiedCriticalChance(float tempValue, float duration) //Critical Chance
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            currentCriticalChance = Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value
            await Task.Yield();
        }

        // Back to the original 
        currentCriticalChance = maxCriticalChance;
    }
    public async Task TempModifiedDodgeChance(float tempValue, float duration) //Dodge Chance
    {
        float startTime = Time.time;
        float endTime = startTime + duration;

        while (Time.time < endTime) // Wait until the specified duration has passed
        {
            currentDodgeChance = Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value
            await Task.Yield();
        }

        // Back to the original 
        currentDodgeChance = maxDodgeChance;
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
                maxDefense += 0.01f;
                break;
            case CategoryStats.Speed:
                maxMoveSpeed += 0.2f;
                maxAttackSpeed += 0.01f;
                break;
            case CategoryStats.Accuracy:
                maxCriticalDamage += 0.002f;
                maxDodgeChance += 0.002f;
                break;
            case CategoryStats.Sight:
                maxCriticalChance += 0.002f;
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
        maxDefense += amount;

    }



}
