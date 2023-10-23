using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Entity Stats", menuName = "New Entity Stats")]
public class EntityStatsSO : ScriptableObject
{
    public int maxHealth = 100;
    public float maxMana = 100;
    public float maxMoveSpeed = 50;
    public float manaGenerateAmount = 5;
    public float manaGenerateTime = 2;
    public float defence;
    public float baseDamage = 10;
    public float cooldownReduction;

    public AbilityScript[] defaultAbilities;
}
