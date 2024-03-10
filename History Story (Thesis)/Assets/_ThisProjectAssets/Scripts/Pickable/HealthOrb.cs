using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;


public class HealthOrb : BasePoints
{
    [SerializeField] private float minHealthPercent = 5f;
    [SerializeField] private float maxHealthPercent = 15f;


    protected override void OnAwakeBehaviour()
    {
        base.OnAwakeBehaviour();

    }
    protected override void CollectedBehaviour(PlayerScript player, int points)
    {
        var minHealth = player.GetEntityStats.maxHealth * (minHealthPercent / 100);
        var maxHealth = player.GetEntityStats.maxHealth * (maxHealthPercent / 100);

        float regenHealth = ThesisUtility.RandomGetFloat(minHealth, maxHealth);

        Debug.Log($"REGEN HEALTH ORB: MAX HEALTH: {player.GetEntityStats.maxHealth} || ({minHealth} - {maxHealth}): {regenHealth}");

        player?.RegenHealth(regenHealth);
    }
}
