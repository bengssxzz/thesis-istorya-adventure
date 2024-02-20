using Cysharp.Threading.Tasks;
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
    [ES3NonSerializable] public Action<float, float> OnCurrentHealthChange;
    [ES3NonSerializable] public Action OnCurrentStatsChange; //When the current stats changes


    [ES3Serializable] private float _lifeSteal;

    #region Max Value
    //Max Value
    [ES3Serializable] private float _maxHealth;
    [ES3Serializable] private float _maxDamage;
    [ES3Serializable] private float _maxDefense;
    [ES3Serializable] private float _maxMoveSpeed;
    [ES3Serializable] private float _maxAttackSpeed;
    [ES3Serializable] private float _maxCriticalDamage;
    [ES3Serializable] private float _maxDodgeChance;
    [ES3Serializable] private float _maxCriticalChance;
    #endregion

    #region Current Value
    //Current Value
    [ES3Serializable] private float _currentHealth;
    [ES3Serializable] private float _currentDamage;
    [ES3Serializable] private float _currentDefense;
    [ES3Serializable] private float _currentMoveSpeed;
    [ES3Serializable] private float _currentAttackSpeed;
    [ES3Serializable] private float _currentCriticalDamage;
    [ES3Serializable] private float _currentDodgeChance;
    [ES3Serializable] private float _currentCriticalChance;
    #endregion

    #region Bound Value
    //Bound value
    const float maxHealthBoundValue = float.PositiveInfinity; //Bound to infinite
    const float maxDamageBoundValue = float.PositiveInfinity; //Bound to infinite
    const float maxDefenseBoundValue = 75;
    const float maxMoveSpeedBoundValue = 150;
    const float maxAttackSpeedBoundValue = 50;
    const float maxCriticalDamageBoundValue = float.PositiveInfinity; //Bound to infinite
    const float maxDodgeChanceBoundValue = 70;
    const float maxCriticalChanceBoundValue = 70;
    const float lifeStealBoundValue = 40;
    #endregion

    #region Public Getter Setter 
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


    public float maxDodgeChance { get { return _maxDodgeChance; } private set { _maxDodgeChance = value; } }
    public float currentDodgeChance { get { return _currentDodgeChance; } private set { _currentDodgeChance = value; } }


    public float maxCriticalChance { get { return _maxCriticalChance; } private set { _maxCriticalChance = value; } }
    public float currentCriticalChance { get { return _currentCriticalChance; } private set { _currentCriticalChance = value; } }


    public float lifeSteal { get { return _lifeSteal; } private set { _lifeSteal = value; } } //Every kill absorb health
    #endregion


    public EntityStatistics(EntityStatsSO entityStatsSO)
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

    #region MODIFICATION STATS
    public async UniTask TempModifiedDamage(float tempValue, float duration) //Damage
    {
        currentDamage = Mathf.Clamp(tempValue, 0, float.MaxValue); // Apply temporary value

        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original
        currentDamage = maxDamage;
    }
    public async UniTask TempModifiedDefense(float tempValue, float duration) //Defense
    {
        currentDefense = Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value

        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original 
        currentDefense = maxDefense;
    }
    public async UniTask TempModifiedMoveSpeed(float tempValue, float duration) //Movement Speed
    {
        currentMoveSpeed = Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value

        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original 
        currentMoveSpeed = maxMoveSpeed;
    }
    public async UniTask TempModifiedAttackSpeed(float tempValue, float duration) //Attack Speed
    {
        maxAttackSpeed = Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value
        
        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original 
        currentAttackSpeed = maxAttackSpeed;
    }
    public async UniTask TempModifiedCriticalDamage(float tempValue, float duration) //Critical Damage
    {
        currentCriticalDamage = Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value

        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original 
        currentCriticalDamage = maxCriticalDamage;
    }
    public async UniTask TempModifiedCriticalChance(float tempValue, float duration) //Critical Chance
    {
        currentCriticalChance = Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value

        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original 
        currentCriticalChance = maxCriticalChance;
    }
    public async UniTask TempModifiedDodgeChance(float tempValue, float duration) //Dodge Chance
    {
        currentDodgeChance = Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value

        OnCurrentStatsChange?.Invoke();
        await UniTask.Delay(TimeSpan.FromSeconds(duration));
        OnCurrentStatsChange?.Invoke();

        // Back to the original 
        currentDodgeChance = maxDodgeChance;
    }
    #endregion


    public void SetCurrentHealth(float amount)
    {
        currentHealth = Mathf.Clamp(currentHealth + amount, 0, maxHealth);
        OnCurrentHealthChange?.Invoke(currentHealth, maxHealth);
    }

    public void ResetCurrentStats()
    {
        _currentHealth = _maxHealth;

        _currentDamage = _maxDamage;

        _currentDefense = _maxDefense;

        _currentAttackSpeed = _maxAttackSpeed;

        _currentMoveSpeed = _maxMoveSpeed;

        _currentCriticalDamage = _maxCriticalDamage;

        _currentDodgeChance = _maxDodgeChance;

        _currentCriticalChance = _maxCriticalChance;


        lifeSteal = _lifeSteal;
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
