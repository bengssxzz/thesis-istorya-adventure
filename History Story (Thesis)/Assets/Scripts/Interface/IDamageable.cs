using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDamageable
{
    void KnockBack(Vector2 knockBackForce);
    void TakeDamage(Entities sourceDamage, float damage);
    void TakeDamage(Entities sourceDamage, bool critical, float damage);
}
