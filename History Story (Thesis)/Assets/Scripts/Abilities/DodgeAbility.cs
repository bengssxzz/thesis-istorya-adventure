using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Dodge Ability", menuName = "Abilities/Dodge")]
public class DodgeAbility : AbilityScript
{
    private Vector2 previousDir;
    public float dodgePower;
    public float dodgeDistance;


    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);


        if (previousDir == Vector2.zero)
        {
            previousDir = Vector2.left;
        }
        if (entity.GetMoveDirection != Vector2.zero)
        {
            previousDir = entity.GetMoveDirection;
        }

        entity.IsCanMove = false;
    }

    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        entity.GetRigidbody2D.AddForce(previousDir * dodgePower * Time.fixedDeltaTime, ForceMode2D.Impulse);
        yield return new WaitForSeconds(dodgeDistance);
        entity.GetRigidbody2D.velocity = Vector2.zero;
    }

    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        entity.IsCanMove = true;
    }
}
