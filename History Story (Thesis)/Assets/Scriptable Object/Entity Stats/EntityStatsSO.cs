using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Entity Stats", menuName = "New Entity Stats")]
public class EntityStatsSO : ScriptableObject
{
    public int defaultLevel = 1;

    [Header("Health")]
    public int maxHealth = 100;
    public int maxMana = 100;
    public float lifeSteal = 0;

    [Header("Field")]
    public bool canMeleeAttack = true;
    public float meleeAttackField = 0;
    public bool canRangedAttack = true;
    public float rangedAttackField = 0;

    [Header("Damage")]
    public float damage = 10;
    [Tooltip("Critical Damage in percentage")]
    [Range(0.0f, 1f)] public float criticalDamage = 0.20f;
    [Range(0.0f, 1f)] public float criticalChance = 0f;

    [Header("Defense")]
    [Tooltip("Critical Damage in percentage")]
    [Range(0.0f, 1f)] public float defense = 0f;
    [Range(0.0f, 1f)] public float dodgingChance = 0;
    
    [Header("Speed")]
    public float maxMoveSpeed= 30;
    [Tooltip("Attack speed in percentage")]
    [Range(10, 100)] public float attackSpeed = 10f;
    
    [Space]
    public List<AbilityScript> abilities;
}
