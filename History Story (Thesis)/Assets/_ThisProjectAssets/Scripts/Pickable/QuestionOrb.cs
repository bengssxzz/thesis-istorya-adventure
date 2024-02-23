using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class QuestionOrb : BasePoints
{
    [SerializeField] private int minQuestionPoints = 1000;
    [SerializeField] private int maxQuestionPoints = 1000;

    private int questionPoints = 0;


    protected override void OnAwakeBehaviour()
    {
        base.OnAwakeBehaviour();
        questionPoints = ThesisUtility.RandomGetAmount(minQuestionPoints, maxQuestionPoints);
    }

    protected override void CollectPoints(PlayerScript player, int points)
    {
        QuestionsManager.Instance.QuestionTriggerUI(points, questionPoints);
    }

}
