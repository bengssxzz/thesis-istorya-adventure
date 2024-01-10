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

    private void Awake()
    {
        buttonChoices = GetComponentsInChildren<QandAChoicesBtnUI>();
    }

    public override void ShowBehavior()
    {
        SubscribeBtn();
        ResetPanel(); 
    }

    public override void HideBehavior()
    {
        UnsubscribeBtn();
    }

    private void SubscribeBtn()
    {
        QuestionsManager.Instance.OnQuestionTrigger += QuestionTrigger;

        foreach (var item in buttonChoices)
        {
            item.OnButtonPressed += ChoicePressed;
        }
    }
    private void UnsubscribeBtn()
    {
        QuestionsManager.Instance.OnQuestionTrigger -= QuestionTrigger;

        foreach (var item in buttonChoices)
        {
            item.OnButtonPressed -= ChoicePressed;
        }
    }

    private void ResetPanel() //Reset the panel
    {
        questionText.text = "";

        //Change the button text
        for (int i = 0; i < buttonChoices.Length; i++)
        {
            buttonChoices[i].UpdateBtn("");
        }

        correctPanel.SetActive(false);
        wrongPanel.SetActive(false);
    }

    private void QuestionTrigger(int id, string question, string[] choices) //Reciever from QuestionsManager
    {
        //Change the question
        questionText.text = question;

        //Change the button text
        for (int i = 0; i < buttonChoices.Length; i++)
        {
            buttonChoices[i].UpdateBtn(choices[i]);
        }
    }
    private void ChoicePressed(string selectedAnswer) //Reciever from each buttons
    {
        //Check the answer on button press
        var currentTableName = QuestionsManager.Instance.CurrentQuestionTable;
        var currentIDQuestion = QuestionsManager.Instance.CurrentIDQuestion;

        var checkedAnswer = QuestionsManager.Instance.CheckQuestionAnswer(currentIDQuestion, currentTableName, selectedAnswer);

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
            UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;
        }

    }

    private void CorrectUpgrade()
    {
        //TODO: Add points to leaderboard
        upgradeSystemUI.AddPoints();
        UIManager.Instance.ChangeUIState = UIManager.GUIState.Upgradable;
    }

    
}
