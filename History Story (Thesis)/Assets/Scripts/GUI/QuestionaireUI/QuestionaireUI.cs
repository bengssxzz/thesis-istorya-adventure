using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;
using System.Linq;

public class QuestionaireUI : UIPages
{
    [SerializeField] private TextMeshProUGUI questionText;
    [SerializeField] private GameObject correctPanel;
    [SerializeField] private GameObject wrongPanel;

    [SerializeField] private UpgradeStatsSystem upgradeSystemUI;

    private QandAChoicesBtnUI[] buttonChoices;
    

    private int questionIndex;
    private int pointsToGive = 0;

    private void Awake()
    {
        buttonChoices = GetComponentsInChildren<QandAChoicesBtnUI>();
    }

    

    private void SubscribeBtn()
    {
        foreach (var item in buttonChoices)
        {
            item.OnButtonPressed += ChoicePressed;
        }
    }
    private void UnsubscribeBtn()
    {
        foreach (var item in buttonChoices)
        {
            item.OnButtonPressed -= ChoicePressed;
        }
    }


    private void ChoicePressed(string selectedAnswer)
    {
        var checkedAnswer = QuestionsManager.Instance.CheckAnswer(questionIndex, selectedAnswer);
        StartCoroutine(CheckStatus(checkedAnswer));
    }

    private IEnumerator CheckStatus(bool checkedStatus)
    {
        var panel = checkedStatus ? correctPanel : wrongPanel; //If the answer is correct select the correct panel, otherwise select wrong panel
        panel.SetActive(true); //Activate the panel
        yield return new WaitForSeconds(1f);

        //TESTING UPGRADE
        if (checkedStatus) { 
            CorrectUpgrade(); 
        } 
        else{
            UIManager.instance.ChangeUIState = UIManager.GUIState.InGame;
        }

    }

    private void ResetStatusPanel()
    {
        correctPanel.SetActive(false);
        wrongPanel.SetActive(false);
    }

    private void UpdateQuestion()
    {
        var selectedQuestion = QuestionsManager.Instance.GenerateQandA(QuestionsManager.QuestionType.Question1);

        questionIndex = selectedQuestion.Item1;
        string question = selectedQuestion.Item2;
        string correctAns = selectedQuestion.Item3;
        string[] wrongAns = selectedQuestion.Item4;

        var choices = RandomizeChoices(correctAns, wrongAns, buttonChoices.Length);

        questionText.text = question;

        for (int i = 0; i < buttonChoices.Length; i++)
        {
            buttonChoices[i].UpdateBtn(choices[i]);
        }
    }

    private string[] RandomizeChoices(string correctAnswer, string[] wrongAnswers, int capacity)
    {
        var newChoices = new List<string>();

        newChoices.Add(correctAnswer);

        wrongAnswers = wrongAnswers.OrderBy(x => UnityEngine.Random.value).ToArray(); //Randomize the wrong answer array

        for (int i = 0; i < capacity - 1; i++)
        {
            newChoices.Add(wrongAnswers[i]); //Add wrong answer
        }

        newChoices = newChoices.OrderBy(x => UnityEngine.Random.value).ToList(); //Randomize the list
        return newChoices.ToArray();
    }

    private void CorrectUpgrade()
    {
        upgradeSystemUI.AddPoints();
        UIManager.instance.ChangeUIState = UIManager.GUIState.Upgradable;
    }

    public override void ShowBehavior()
    {
        SubscribeBtn();
        UpdateQuestion();
    }

    public override void HideBehavior()
    {
        UnsubscribeBtn();
        ResetStatusPanel();
    }
}
