using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;
using System.Linq;
using MoreMountains.Tools;

public class QuestionaireUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI questionText;

    [SerializeField] private Animator QandAAnimator;

    private QandAChoicesBtnUI[] buttonChoices;


    private int qandaId = -1;
    private string tableName = "";


    private void Awake()
    {
        buttonChoices = GetComponentsInChildren<QandAChoicesBtnUI>();
    }

    private void OnEnable()
    {
        SubscribeBtn();
        ResetQuestionPanel();
    }
    private void OnDisable()
    {
        UnsubscribeBtn();

    }

    private void SubscribeBtn()
    {
        QuestionsManager.Instance.OnQuestionUITrigger += QuestionTrigger;

        foreach (var item in buttonChoices)
        {
            item.OnButtonPressed += ChoicePressed;
        }
    }
    private void UnsubscribeBtn()
    {
        QuestionsManager.Instance.OnQuestionUITrigger -= QuestionTrigger;

        foreach (var item in buttonChoices)
        {
            item.OnButtonPressed -= ChoicePressed;
        }
    }

    private void ResetQuestionPanel() //Reset the panel
    {
        questionText.text = "";

        //Change the button text
        for (int i = 0; i < buttonChoices.Length; i++)
        {
            buttonChoices[i].UpdateBtn("");
        }
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
        var checkedAnswer = QuestionsManager.Instance.CheckQuestionAnswer(selectedAnswer);

        if (checkedAnswer)
        {
            //Correct answer
            Debug.Log("Correct Answer");
        }
        else
        {
            //Wrong answer
            Debug.Log("Wrong Answer");
        }

        UI_Manager.Instance.CloseMenu("Question UI");

        //StartCoroutine(CheckStatus(checkedAnswer));
    }




    
}
