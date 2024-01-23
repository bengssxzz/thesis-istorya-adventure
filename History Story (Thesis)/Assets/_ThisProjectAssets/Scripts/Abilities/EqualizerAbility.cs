using Language.Lua;
using PixelCrushers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.EventSystems.EventTrigger;
using Random = System.Random;


// ???
// Copied from template... Why does this not work?
// [CreateAssetMenu(fileName = "The Equalizer", menuName = "Abilities/The Equalizer")]


public class EqualizerAbility : AbilityScript
{
    // ???
    // Still copied from template... Why does this not work?
    // [Header("The Equalizer")]

    // FUNCTION DECLARATIONS
    // ReturnDieFace returns a random face from a die that is an array of integers
    int ReturnDieFace(int[] die)
    {
        Random randomizer = new Random();
        int dieSize = die.Length;
        return die[randomizer.Next(dieSize)];
    }

    // ANYTHING ELSE DECLARATIONS
    // Dice
    int[] diceNormal = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6}; // die is balanced
    int[] diceCritical = {1, 4, 5, 6, 6, 6, 6, 6, 6}; // special case die, die likely benefits player
    int[] chosenDie;
    int dieFace;
    // Baselines
    const float CooldownTime = 5f; // cooldown for this ability.
    const float CriticalHealthPercentage = .25f; // the limit where the player is considered at a "critical" state.
    const float SelfDamage = 15f; // the damage the player can deal to itself.
    const float DamageBoostPercentage = 1.5f; // additional damage the player can deal to enemies.
    const float ShieldPercentage = .5f; // shield the player can receive.
    const float SelfDamagePercentage = .5f; // damage the player inflicts to itself.
    const float AttackSpeedPenalty = SelfDamagePercentage; // Attack speed penalty for die face no. 3.
    const float FirstTriBoostPercentage = .4f; // Boost for die face no. 3.
    const float HugeBoost = 5f; // For die face no. 5, boosts attacks damage, speed, and life steal.
    // Initialize variables that will be reverted after the skill finishes.
    float normalDefense;
    float normalDamage;
    float normalLifesteal;
    float normalAttackSpeed;
    float normalCriticalChance, normalCriticalDamage;
    // ?
    float currentHealthPercentage;
    float lostHealth;

    // Still copied from template...
    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        // Store variables that will be reverted later.
        normalDefense = entity.GetEntityStats.defense;
        normalDamage = entity.GetEntityStats.damage;
        normalLifesteal = entity.GetEntityStats.lifeSteal;
        normalAttackSpeed = entity.GetEntityStats.currentAttackSpeed;
        normalCriticalChance = entity.GetEntityStats.criticalChance;
        normalCriticalDamage = entity.GetEntityStats.criticalDamage;

        // Compute for lost health, which might be needed later.
        lostHealth = entity.GetEntityStats.maxHealth - entity.GetEntityStats.currentHealth;

        // Change chosen die based on critical health percentage
        currentHealthPercentage = entity.GetEntityStats.currentHealth / entity.GetEntityStats.maxHealth;
        if (currentHealthPercentage <= CriticalHealthPercentage)
        {
            chosenDie = diceCritical;
        }
        else
        {
            chosenDie = diceNormal;
        }
    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        // Get a die face.
        dieFace = ReturnDieFace(chosenDie);
        
        // Do ability effects based on face of the die.
        switch (dieFace)
        {
            case 1:
                // Self-damage based on percentage.
                entity.GetEntityStats.SetCurrentHealth(entity.GetEntityStats.currentHealth * SelfDamagePercentage);
                break;
            case 2:
                // Self-damage based on fixed float value.
                entity.GetEntityStats.SetCurrentHealth(entity.GetEntityStats.currentHealth - SelfDamage);
                break;
            case 3:
                // Boost damage, critical damage, and critical chance by FirstTriBoostPercentage.
                entity.GetEntityStats.ModifiedDamage((entity.GetEntityStats.damage) + entity.GetEntityStats.damage * FirstTriBoostPercentage);
                entity.GetEntityStats.ModifiedCriticalDamage((entity.GetEntityStats.criticalDamage) + entity.GetEntityStats.criticalDamage * FirstTriBoostPercentage);
                entity.GetEntityStats.ModifiedCriticalChance((entity.GetEntityStats.criticalChance) + entity.GetEntityStats.criticalChance * FirstTriBoostPercentage);
                // Reduce attack speed by its penalty.
                entity.GetEntityStats.ModifiedAttackSpeed(entity.GetEntityStats.currentAttackSpeed * AttackSpeedPenalty);
                break;
            case 4:
                // Boost projectile damage based on player's lost health.
                entity.GetEntityStats.ModifiedDamage(normalDamage + (DamageBoostPercentage * lostHealth));
                break;
            case 5:
                // Gain shield based on player's lost health.
                entity.GetEntityStats.ModifiedDefense(normalDefense + (ShieldPercentage * lostHealth));
                break;
            case 6:
                // Boost attack damage, attack speed, and lifesteal by HugeBoost.
                entity.GetEntityStats.ModifiedDamage((entity.GetEntityStats.damage) + entity.GetEntityStats.damage * HugeBoost);
                entity.GetEntityStats.ModifiedAttackSpeed((entity.GetEntityStats.currentAttackSpeed) + entity.GetEntityStats.currentAttackSpeed * HugeBoost);
                entity.GetEntityStats.ModifiedLifesteal((entity.GetEntityStats.lifeSteal) + entity.GetEntityStats.lifeSteal * HugeBoost);
                break;
            default:
                Debug.Log("How did you get an integer not 1-6?");
                break;
        }

        // Specify cooldown time of the ability
        yield return new WaitForSeconds(CooldownTime);
    }
    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        // Restore player stats
        entity.GetEntityStats.ModifiedDefense(normalDefense);
        entity.GetEntityStats.ModifiedDamage(normalDamage);
        entity.GetEntityStats.ModifiedLifesteal(normalLifesteal);
        entity.GetEntityStats.ModifiedAttackSpeed(normalAttackSpeed);
        entity.GetEntityStats.ModifiedCriticalChance(normalCriticalChance);
        entity.GetEntityStats.ModifiedCriticalDamage(normalCriticalDamage);
    }
}

/* New Die explanation
1 Take x% self-damage. 
2 Take x points of self-damage.
3 Boost attack damage, critcial chance, and critical damage by x%, while decrease attack speed by x%.
4 Deal damage to enemies based on x% of lost health. 
5 Gain shield based on x% of lost health.
6 Boost attack damage, attack speed, and life steal by x%.
*/