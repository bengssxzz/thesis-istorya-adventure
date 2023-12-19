using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Dodge", menuName = "Abilities/Dodge")]
public class DodgeAbility : AbilityScript
{
    private Entities entity;
    private Rigidbody2D rb;

    private Vector2 previousDir;
    public float dodgePower;

    protected override void Activate(GameObject entity)
    {
        var weaponDir = entity.GetComponent<WeaponHolder>();
        rb = entity.GetComponent<Rigidbody2D>();
        this.entity = entity.GetComponent<Entities>();

        if (previousDir == Vector2.zero)
        {
            previousDir = Vector2.left;
        }
        if (this.entity.GetMoveDirection != Vector2.zero)
        {
            previousDir = this.entity.GetMoveDirection;
        }


        this.entity.IsCanMove = false;

        rb.AddForce(previousDir * dodgePower * Time.fixedDeltaTime, ForceMode2D.Impulse);
    }

    protected override void Deactivate(GameObject entity)
    {
        this.entity.IsCanMove = true;
    }
}
