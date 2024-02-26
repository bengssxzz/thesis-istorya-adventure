using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class QuestionOrb : BasePoints
{
    [SerializeField] private int minPowerPoints = 3;
    [SerializeField] private int maxPowerPoints = 7;

    private int powerPoints;

    protected override void OnAwakeBehaviour()
    {
        base.OnAwakeBehaviour();
        powerPoints = ThesisUtility.RandomGetAmount(minPowerPoints, maxPowerPoints);
    }

    protected override void CollectedBehaviour(PlayerScript player, int points)
    {
        QuestionsManager.Instance.QuestionTriggerUI(powerPoints, points);
    }
}
