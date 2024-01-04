using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Move Speed", menuName ="Abilities/Move Speed")]
public class MoveSpeedAbility : AbilityScript
{
    [Space(15)]
    [Header("Movement Speed Ability")]
    public float addMoveSpeed;
    public float time;


    private float normalSpeed;


    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        //Save the normal speed of the entity
        normalSpeed = entity.GetEntityStats.currentMoveSpeed;
    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        //Modified the speed
        entity.GetEntityStats.ModifiedMoveSpeed(normalSpeed + addMoveSpeed);

        yield return new WaitForSeconds(time);
    }

    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        //Set to normal speed
        entity.GetEntityStats.ModifiedMoveSpeed(normalSpeed);
    }


}
