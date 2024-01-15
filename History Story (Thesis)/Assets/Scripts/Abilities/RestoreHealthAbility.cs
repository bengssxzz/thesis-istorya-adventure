using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Restore Health", menuName ="Abilities/Restore Health")]
public class RestoreHealthAbility : AbilityScript
{
    [Space(15)]
    [Header("Restore Health Ability")]
    public int healthRestoreAmount;
    public float time;


    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        //no need

    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        //restore health
        if(entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.RestoreHealth(healthRestoreAmount);
        }
        else
        {
            Debug.LogError("RestoreHealthAbility : Unable to restore health");
        }

yield return new WaitForSecondsRealtime(time);
    }

    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        //no need
  
    }


}
