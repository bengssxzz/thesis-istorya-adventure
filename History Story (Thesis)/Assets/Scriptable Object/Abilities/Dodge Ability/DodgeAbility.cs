using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Dodge", menuName = "Abilities/Dodge")]
public class DodgeAbility : AbilityScript
{
    private Entities _entity;
    private Rigidbody2D rb;

    private Vector2 previousDir;
    public float dodgePower;

    protected override void Activate(GameObject entity)
    {
        var weaponDir = entity.GetComponent<WeaponHolder>();
        rb = entity.GetComponent<Rigidbody2D>();
        _entity = entity.GetComponent<Entities>();

        if (previousDir == Vector2.zero)
        {
            previousDir = Vector2.left;
        }
        if (_entity.getMoveDir != Vector2.zero)
        {
            previousDir = _entity.getMoveDir;
        }



        _entity.IsCanMove = false;

        rb.AddForce(previousDir * dodgePower * Time.fixedDeltaTime, ForceMode2D.Impulse);
    }

    protected override void Deactivate(GameObject entity)
    {
        _entity.IsCanMove = true;
    }
}
