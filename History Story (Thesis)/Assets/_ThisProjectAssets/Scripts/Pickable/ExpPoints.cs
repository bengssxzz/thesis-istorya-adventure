using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class ExpPoints : BasePoints
{
    [SerializeField] private int minHealth = 10;
    [SerializeField] private int maxHealth = 20;

    private int healthPoint;



    protected override void OnAwakeBehaviour()
    {
        base.OnAwakeBehaviour();
        healthPoint = ThesisUtility.RandomGetAmount(minHealth, maxHealth);

    }


    protected override void CollectPoints(PlayerScript player, int points)
    {
        //Regen health
        player?.RegenHealth(healthPoint);

        //Add points
        GameManager.Instance.AddCurrentChapterScore(points);
    }
}
