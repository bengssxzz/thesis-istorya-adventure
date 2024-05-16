using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Mathematics;
using UnityEngine;
using System.Threading;

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

    [ES3NonSerializable] private CancellationToken entityCancellation;



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
    const float maxDefenseBoundValue = 80;  
    const float maxMoveSpeedBoundValue = 150;
    const float maxAttackSpeedBoundValue = 100;
    const float maxCriticalDamageBoundValue = float.PositiveInfinity; //Bound to infinite
    const float maxDodgeChanceBoundValue = 70;
    const float maxCriticalChanceBoundValue = 80;
    const float lifeStealBoundValue = 100;
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
        _maxHealth = Mathf.Clamp(entityStatsSO.maxHealth, 0, maxHealthBoundValue);
        _currentHealth = maxHealth;

        _maxDamage = Mathf.Clamp(entityStatsSO.damage, 0, maxDamageBoundValue);
        _currentDamage = maxDamage;

        _maxDefense = Mathf.Clamp(entityStatsSO.defense, 0, maxDefenseBoundValue);
        _currentDefense = maxDefense;

        _maxAttackSpeed =Mathf.Clamp(entityStatsSO.attackSpeed, 0, maxAttackSpeedBoundValue);
        _currentAttackSpeed = maxAttackSpeed;

        _maxMoveSpeed = Mathf.Clamp(entityStatsSO.maxMoveSpeed, 0, maxMoveSpeedBoundValue);
        _currentMoveSpeed = maxMoveSpeed;

        _maxCriticalDamage = Mathf.Clamp(entityStatsSO.criticalDamage, 0, maxCriticalDamageBoundValue);
        _currentCriticalDamage = maxCriticalDamage;

        _maxDodgeChance = Mathf.Clamp(entityStatsSO.dodgingChance, 0, maxDodgeChanceBoundValue);
        _currentDodgeChance = maxDodgeChance;

        _maxCriticalChance = Mathf.Clamp(entityStatsSO.criticalChance, 0, maxCriticalChanceBoundValue);
        _currentCriticalChance = maxCriticalChance;


        lifeSteal = Mathf.Clamp(entityStatsSO.lifeSteal, 0, lifeStealBoundValue);
    }
    public void InitializeCancellationToken(CancellationToken token)
    {
        entityCancellation = token;
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
    public async UniTask TempModifiedHealth(float tempValue, float duration) //Damage
    {
        currentHealth = Mathf.Clamp(tempValue, 0, float.MaxValue); // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentHealth = maxHealth;
            OnCurrentStatsChange?.Invoke();
        }


        // Back to the original
        currentHealth = maxHealth;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedDamage(float tempValue, float duration) //Damage
    {
        currentDamage += Mathf.Clamp(tempValue, 0, float.MaxValue); // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentDamage = maxDamage;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original
        currentDamage = maxDamage;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedDefense(float tempValue, float duration) //Defense
    {
        currentDefense += Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentDefense = maxDefense;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original 
        currentDefense = maxDefense;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedMoveSpeed(float tempValue, float duration) //Movement Speed
    {
        currentMoveSpeed += Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentMoveSpeed = maxMoveSpeed;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original 
        currentMoveSpeed = maxMoveSpeed;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedAttackSpeed(float tempValue, float duration) //Attack Speed
    {
        maxAttackSpeed += Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentAttackSpeed = maxAttackSpeed;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original 
        currentAttackSpeed = maxAttackSpeed;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedCriticalDamage(float tempValue, float duration) //Critical Damage
    {
        currentCriticalDamage += Mathf.Clamp(tempValue, 0, float.MaxValue); ; // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentCriticalDamage = maxCriticalDamage;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original 
        currentCriticalDamage = maxCriticalDamage;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedCriticalChance(float tempValue, float duration) //Critical Chance
    {
        currentCriticalChance += Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentCriticalChance = maxCriticalChance;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original 
        currentCriticalChance = maxCriticalChance;
        OnCurrentStatsChange?.Invoke();
    }
    public async UniTask TempModifiedDodgeChance(float tempValue, float duration) //Dodge Chance
    {
        currentDodgeChance += Mathf.Clamp(tempValue, 0f, 100f); ; // Apply temporary value

        try
        {
            OnCurrentStatsChange?.Invoke();
            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: entityCancellation);
            OnCurrentStatsChange?.Invoke();
        }
        catch (OperationCanceledException)
        {
            currentDodgeChance = maxDodgeChance;
            OnCurrentStatsChange?.Invoke();
        }

        // Back to the original 
        currentDodgeChance = maxDodgeChance;
        OnCurrentStatsChange?.Invoke();
    }
    #endregion


    public void InvokeCurrentHealthEvent()
    {
        currentHealth = Mathf.Clamp(currentHealth, 0, maxHealth);
        OnCurrentHealthChange?.Invoke(currentHealth, maxHealth);
    }
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

        OnCurrentStatsChange?.Invoke();
    }





    public void AddStatsPermanent(EntityStats stats, float addAmount) //Upgrade stats permanently
    {
        switch (stats)
        {
            case EntityStats.Health: //Can upgrade many times
                maxHealth = Mathf.Clamp(maxHealth + addAmount, 0, maxHealthBoundValue);
                currentHealth = maxHealth;
                break;
            case EntityStats.Damage: //Can upgrade many times
                maxDamage = Mathf.Clamp(maxDamage + addAmount, 0, maxDamageBoundValue);
                break;
            case EntityStats.Defense:
                maxDefense = Mathf.Clamp(maxDefense + addAmount, 0, maxDefenseBoundValue);
                break;
            case EntityStats.MoveSpeed:
                maxMoveSpeed = Mathf.Clamp(maxMoveSpeed + addAmount, 0, maxMoveSpeedBoundValue);
                break;
            case EntityStats.AttackSpeed:
                maxAttackSpeed = Mathf.Clamp(maxAttackSpeed + addAmount, 0, maxAttackSpeedBoundValue);
                break;
            case EntityStats.CriticalChance:
                maxCriticalChance = Mathf.Clamp(maxCriticalChance + addAmount, 0, maxCriticalChanceBoundValue);
                break;
            case EntityStats.CriticalDamage: //Can upgrade many times
                maxCriticalDamage = Mathf.Clamp(maxCriticalDamage + addAmount, 0, maxCriticalDamageBoundValue);
                break;
            case EntityStats.Dodging:
                maxDodgeChance = Mathf.Clamp(maxDodgeChance + addAmount, 0, maxDodgeChanceBoundValue);
                break;
            case EntityStats.LifeSteal:
                lifeSteal = Mathf.Clamp(lifeSteal + addAmount, 0, lifeStealBoundValue);
                break;
            default:
                Debug.LogError($"THERE ARE NO {stats.ToString()} IN ENTITY STATISTICS");
                break;
        }
        OnCurrentStatsChange?.Invoke();
    }

    public float GetCurrentStatsValue(EntityStats stats) //Get the current stats value
    {
        switch (stats)
        {
            case EntityStats.Health:
                return _currentHealth;
            case EntityStats.Damage:
                return _currentDamage;
            case EntityStats.Defense:
                return _currentDefense;
            case EntityStats.MoveSpeed:
                return _currentMoveSpeed;
            case EntityStats.AttackSpeed:
                return _currentAttackSpeed;
            case EntityStats.CriticalChance:
                return _currentCriticalChance;
            case EntityStats.CriticalDamage:
                return _currentCriticalDamage;
            case EntityStats.Dodging:
                return _currentDodgeChance;
            case EntityStats.LifeSteal:
                return _lifeSteal;
            default:
                Debug.LogError($"There are no {stats} in the Entity Statistic");
                return 0;
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
