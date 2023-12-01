using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDamageable
{
    void KnockBack(Vector2 knockBackForce);
    void TakeDamage(float damage);
}
