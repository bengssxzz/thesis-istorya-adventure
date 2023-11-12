using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Entity Stats", menuName = "New Entity Stats")]
public class EntityStatsSO : ScriptableObject
{
    public int defaultLevel = 1;
    public int maxHealth = 100;
    public int maxMana = 100;
    public float damage = 10;
    public int defence= 1;
    public float maxMoveSpeed= 30;
    public float attackSpeed = 1;
    public float criticalChance = 0;
    public int criticalDamage= 0;
    public float dodgingChance = 0;
    public float attackField = 0;
    public float lifeSteal = 0;
    public float manaRegenAmount = 0;
    public float manaRegenTime = 0.15f;

    //public AbilityScript[] defaultAbilities;
    public List<AbilityScript> abilities;
}
