using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Mathematics;
using UnityEngine;


public enum EntityStats
{
    Health,
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


    private float _lifeSteal;

    #region Max Value
    //Max Value
    private float _maxHealth;
    private float _maxDamage;
    private float _maxDefense;
    private float _maxMoveSpeed;
    private float _maxAttackSpeed;
    private float _maxCriticalDamage;
    private float _maxDodgeChance;
    private float _maxCriticalChance;
    #endregion

    #region Current Value
    //Current Value
    private float _currentHealth;
    private float _currentDamage;
    private float _currentDefense;
    private float _currentMoveSpeed;
    private float _currentAttackSpeed;
    private float _currentCriticalDamage;
    private float _currentDodgeChance;
    private float _currentCriticalChance;
    #endregion

    #region Bound Value
    //Bound value
    private float maxHealthBoundValue = float.PositiveInfinity; //Bound to infinite
    private float maxDamageBoundValue = float.PositiveInfinity; //Bound to infinite
    private float maxDefenseBoundValue = 75;
    private float maxMoveSpeedBoundValue = 150;
    private float maxAttackSpeedBoundValue = 50;
    private float maxCriticalDamageBoundValue = float.PositiveInfinity; //Bound to infinite
    private float maxDodgeChanceBoundValue = 70;
    private float maxCriticalChanceBoundValue = 70;
    private float lifeStealBoundValue = 40;
    #endregion

    #region Getter Setter 
    public float maxHealth { get { return _maxHealth; } private set { _maxHealth = value; } }
    public float currentHealth { get { return _currentHealth; } private set { _currentHealth = value; } }


    public float maxDamage { get { return _maxDamage; } private set { _maxDamage = value; } }
    public float currentDamage { get { return _currentDamage; } private set { _currentDamage = value; } }
    


    public float maxDefense { get { return _maxDefense; } private set { _maxDefense = value; } }
    public float currentDefense { get { return _currentDefense; } private set { _currentDefense = value; } }
   

    public float maxMoveSpeed { get { return _maxMoveSpeed; } private set { _maxMoveSpeed = value; } }
    public float currentMoveSpeed { get { return _currentMoveSpeed; } private set { _currentMoveSpeed = value; } }
    

    public float maxAttackSpeed { get { return _maxAttackSpeed; } private set { _maxAttackSpeed = value; } }
    public float currentAttackSpeed { get { return _currentAttackSpeed; } private set { _currentAttackSpeed = value; } }
   

    public float maxCriticalDamage { get { return _maxCriticalDamage; } private set { _maxCriticalDamage = value; } }
    public float currentCriticalDamage { get { return _currentCriticalDamage; } private set { _currentCriticalDamage = value; } }
  

    public float maxDodgeChance{ get { return _maxDodgeChance; } private set { _maxDodgeChance = value; } }
    public float currentDodgeChance { get { return _currentDodgeChance; } private set { _currentDodgeChance = value; } }
   

    public float maxCriticalChance { get { return _maxCriticalChance; } private set { _maxCriticalChance = value; } }
    public float currentCriticalChance{ get { return _currentCriticalChance; } private set { _currentCriticalChance = value; } }
   

    public float lifeSteal { get { return _lifeSteal; } private set { _lifeSteal = value; } } //Every kill absorb health
    #endregion





    public EntityStatistics(EntityStatsSO entityStatsSO, Entities entity)
    {
        _maxHealth = entityStatsSO.maxHealth;
        _currentHealth = maxHealth;

        _maxDamage = entityStatsSO.damage;
        _currentDamage = maxDamage;

        _maxDefense = entityStatsSO.defense;
        _currentDefense = maxDefense;

        _maxAttackSpeed = entityStatsSO.attackSpeed;
        _currentAttackSpeed = maxAttackSpeed;

        _maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        _currentMoveSpeed = maxMoveSpeed;

        _maxCriticalDamage = entityStatsSO.criticalDamage;
        _currentCriticalDamage = maxCriticalDamage;

        _maxDodgeChance = entityStatsSO.dodgingChance;
        _currentDodgeChance = maxDodgeChance;

        _maxCriticalChance = entityStatsSO.criticalChance;
        _currentCriticalChance = maxCriticalChance;


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


    public void UpgradeStatsPermanent(EntityStats stats, float amount) //Upgrade stats permanently
    {
        switch (stats)
        {
            case EntityStats.Health: //Can upgrade many times
                maxHealth = Mathf.Clamp(maxHealth + amount, 0, maxHealthBoundValue);
                currentHealth = maxHealth;
                break;
            case EntityStats.Damage: //Can upgrade many times
                maxDamage = Mathf.Clamp(maxDamage + amount, 0, maxDamageBoundValue);
                break;
            case EntityStats.Defense:
                maxDefense = Mathf.Clamp(maxDefense + amount, 0, maxDefenseBoundValue);
                break;
            case EntityStats.MoveSpeed:
                maxMoveSpeed = Mathf.Clamp(maxMoveSpeed + amount, 0, maxMoveSpeedBoundValue);
                break;
            case EntityStats.AttackSpeed:
                maxAttackSpeed = Mathf.Clamp(maxAttackSpeed + amount, 0, maxAttackSpeedBoundValue);
                break;
            case EntityStats.CriticalChance:
                maxCriticalChance = Mathf.Clamp(maxCriticalChance + amount, 0, maxCriticalChanceBoundValue);
                break;
            case EntityStats.CriticalDamage: //Can upgrade many times
                maxCriticalDamage = Mathf.Clamp(maxCriticalDamage + amount, 0, maxCriticalDamageBoundValue);
                break;
            case EntityStats.Dodging:
                maxDodgeChance = Mathf.Clamp(maxDodgeChance + amount, 0, maxDodgeChanceBoundValue);
                break;
            case EntityStats.LifeSteal:
                lifeSteal = Mathf.Clamp(lifeSteal + amount, 0, lifeStealBoundValue);
                break;
            default:
                Debug.LogError($"THERE ARE NO {stats.ToString()} IN ENTITY STATISTICS");
                break;
        }
    }
    public float GetRemainingStatsValue(EntityStats stats) //Get the remaining stats value
    {
        float remainValue = 0;
        switch (stats)
        {
            case EntityStats.Health:
                remainValue = maxHealthBoundValue - maxHealth;
                break;
            case EntityStats.Damage:
                remainValue = maxDamageBoundValue - maxDamage;
                break;
            case EntityStats.Defense:
                remainValue = maxDefenseBoundValue - maxDefense;
                break;
            case EntityStats.MoveSpeed:
                remainValue = maxMoveSpeedBoundValue - maxMoveSpeed;
                break;
            case EntityStats.AttackSpeed:
                remainValue = maxAttackSpeedBoundValue - maxAttackSpeed;
                break;
            case EntityStats.CriticalChance:
                remainValue = maxCriticalChanceBoundValue - maxCriticalChance;
                break;
            case EntityStats.CriticalDamage:
                remainValue = maxCriticalDamageBoundValue - maxCriticalDamage;
                break;
            case EntityStats.Dodging:
                remainValue = maxDodgeChanceBoundValue - maxDodgeChance;
                break;
            case EntityStats.LifeSteal:
                remainValue = lifeStealBoundValue - lifeSteal;
                break;
            default:
                break;
        }

        return remainValue;
    }
    public float GetMaxBoundStats(EntityStats stats)
    {
        switch (stats)
        {
            case EntityStats.Health:
                return maxHealthBoundValue;
            case EntityStats.Damage:
                return maxDamageBoundValue;
            case EntityStats.Defense:
                return maxDefenseBoundValue;
            case EntityStats.MoveSpeed:
                return maxMoveSpeedBoundValue;
            case EntityStats.AttackSpeed:
                return maxAttackSpeedBoundValue;
            case EntityStats.CriticalChance:
                return maxCriticalChanceBoundValue;
            case EntityStats.CriticalDamage:
                return maxCriticalDamageBoundValue;
            case EntityStats.Dodging:
                return maxDodgeChanceBoundValue;
            case EntityStats.LifeSteal:
                return lifeStealBoundValue;
            default:
                Debug.LogError($"There are no {stats} in the Entity Statistic");
                return 0;
        }
    }











}
