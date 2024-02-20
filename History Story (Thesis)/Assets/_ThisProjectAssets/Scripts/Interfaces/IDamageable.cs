using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDamageable
{
    public IEnumerator KnockBack(Transform damagePosition, float knockBackPower);
    public void TakeDamage(float damage, Entities sourceDamage = null, bool isCritical = false);
}
