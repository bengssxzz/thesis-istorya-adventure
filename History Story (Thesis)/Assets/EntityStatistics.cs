using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;

[System.Serializable]
public class EntityStatistics
{
    //Health stats
    [SerializeField] private int maxHealth;
    private int currentHealth;
    public int UpgradeHealth { set { maxHealth += value; } }
    public int GetMaxHealth { get { return maxHealth; } }
    public int GetCurrentHealth
    {
        get { return currentHealth; }
        set
        {
            currentHealth = Mathf.Clamp(value, 0, maxHealth);
        }
    }

    //Mana stats
    [SerializeField] private float maxMana;
    private float currentMana;
    public int UpgradeMana { set { maxMana += value; } }
    public float GetMaxMana { get { return maxMana; } }
    public float GetCurrentMana
    {
        get { return currentMana; }
        set
        {
            currentMana = Mathf.Clamp(value, 0, maxMana);
        }
    }

    //Move speed stats
    [SerializeField] private float maxMoveSpeed;
    private float currentMoveSpeed;
    public float GetMaxMoveSpeed { get { return maxMoveSpeed; } }
    public float GetCurrentMoveSpeed { get { return currentMoveSpeed; } }
    public float ModifiedMoveSpeed { set { currentMoveSpeed = value; } }


    public float manaGenerateAmount;
    public int UpgradeManaGenerateAmount { set { manaGenerateAmount += value; } }
    public float manaGenerateTime;
    public int UpgradeManaGenerateTime { set { manaGenerateTime += value; } }
    public float defence;
    public int UpgradeDefence { set { defence += value; } }
    public float baseDamage;
    public int UpgradeBaseDamage { set { baseDamage += value; } }
    public float cooldownReduction;
    public int UpgradeCooldownReduction{ set { cooldownReduction += value; } }

    public EntityStatistics(EntityStatsSO entityStatsSO){
        maxHealth = entityStatsSO.maxHealth;
        currentHealth = maxHealth;
        maxMana = entityStatsSO.maxMana;
        currentMana = maxMana;
        maxMoveSpeed = entityStatsSO.maxMoveSpeed;
        currentMoveSpeed = maxMoveSpeed;

        manaGenerateAmount = entityStatsSO.manaGenerateAmount;
        manaGenerateTime = entityStatsSO.manaGenerateTime;
        defence = entityStatsSO.defence;
        baseDamage = entityStatsSO.baseDamage;
        cooldownReduction = entityStatsSO.cooldownReduction;

    }
}
