using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class ExpPoints : BasePoints
{
    [SerializeField] private float addHealthPercent = 1f;




    protected override void CollectedBehaviour(PlayerScript player, int points)
    {
        //Regen health
        var addHealth = player.GetEntityStats.maxHealth * (addHealthPercent / 100);

        player?.RegenHealth(addHealth);

        //Add points
        GameManager.Instance.AddCurrentChapterScore(points);
    }
}
