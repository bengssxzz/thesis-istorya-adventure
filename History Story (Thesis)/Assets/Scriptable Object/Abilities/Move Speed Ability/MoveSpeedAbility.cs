using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Move Speed", menuName ="Abilities/Move Speed")]
public class MoveSpeedAbility : AbilityScript
{
    public float addMoveSpeed;

    private Entities _entity;
    private float normalSpeed;
    protected override void Activate(GameObject entity)
    {
        _entity = entity.GetComponent<Entities>();

        //Save normal speed
        normalSpeed = _entity.GetEntityStats.currentMoveSpeed;

        //Activate movement speed
        _entity.GetEntityStats.ModifiedMoveSpeed(normalSpeed + addMoveSpeed);
    }

    protected override void Deactivate(GameObject entity)
    {
        //Back to normal speed
        _entity.GetEntityStats.ModifiedMoveSpeed(normalSpeed);
    }
}
