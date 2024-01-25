using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Reduce Damage", menuName ="Abilities/Reduce Damage")]
public class ReduceDamageAbility : AbilityScript
{
    [Space(15)]
    [Header("Reduce Damage Ability")]
    public float damageReductionPercentage;
    public float time;


    private float normalDefense;


    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        //Save the original defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            normalDefense = entity.GetEntityStats.maxDefense;
        }
        else
        {
            Debug.LogError("ReducedDamageAbility : Unable to retrieve entity stats for defense reduction");
        }
    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        //modify defense stat
        if(entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.ModifiedDefense(normalDefense + damageReductionPercentage);
        }
        else
        {
            Debug.LogError("ReducedDamageAbility : Unable to modify entity stats for defense stat");
        }

        yield return new WaitForSeconds(time);
    }

    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        //set to normal defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.ModifiedDefense(normalDefense);
        }
        else
        {
            Debug.LogError("ReduceDamageAbility: Unable to reset defense stat to normal.");
        }
    }




























}
