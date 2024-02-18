using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;
using MoreMountains.Tools;

[CreateAssetMenu(fileName ="Boost Attack", menuName ="Abilities/Boost Attack")]
public class BoostAttackAbility : AbilityScript
{
    [Space(15)]
    [Header("Boost Attack Ability")]
    public float attackSpeedIncrease;
    public float damageIncrease;
    public float time;

    private float normalAttackSpeed;
    private float normalDamage;

    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        //Save the original defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            normalAttackSpeed = entity.GetEntityStats.currentAttackSpeed;
            normalDamage = entity.GetEntityStats.maxDamage;
        }
        else
        {
            Debug.LogError("BoostAttackAbility : Unable to retrieve entity stats for boost attack");
        }
    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        //modify defense stat
        if(entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.ModifiedAttackSpeed(normalAttackSpeed * (1 + attackSpeedIncrease));
            entity.GetEntityStats.ModifiedDamage(normalDamage * (1 + damageIncrease));
        }
        else
        {
            Debug.LogError("BoostAttackAbility : Unable to modify entity stats for dboost attack");
        }

        yield return new WaitForSeconds(time);
    }

    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        //set to normal defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.ModifiedAttackSpeed(normalAttackSpeed);
            entity.GetEntityStats.ModifiedDamage(normalDamage);
        }
        else
        {
            Debug.LogError("BoostAttackAbility: Unable to reset attack speed and damage to normal.");
        }
    }

    protected override void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback)
    {
        MMF_Particles toPlay = castingFeedback.GetFeedbackOfType<MMF_Particles>();
        toPlay.BoundParticleSystem = entity.transform.MMFindDeepChildDepthFirst("BoostAttackParticle").GetComponent<ParticleSystem>();
    }

}
