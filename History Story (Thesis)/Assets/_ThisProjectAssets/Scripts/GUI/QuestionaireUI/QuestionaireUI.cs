using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;
using System.Linq;
using MoreMountains.Tools;
using MoreMountains.Feedbacks;
using ThesisLibrary;

public class QuestionaireUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI questionText;

    [SerializeField] private Animator qandAAnimator;
    [SerializeField] private MMF_Player openingFeedback;
    [SerializeField] private MMF_Player correctFeedback;
    [SerializeField] private MMF_Player wrongFeedback;

    private QandAChoicesBtnUI[] buttonChoices;

    private CanvasGroup canvasGroup;

    private int qandaId = -1;
    private string tableName = "";

    private string selectedAnswer = "";
    private string correctAnswer = "";


    private void Awake()
    {
        buttonChoices = GetComponentsInChildren<QandAChoicesBtnUI>();
        canvasGroup = GetComponent<CanvasGroup>();
    }

    private void OnEnable()
    {
        openingFeedback?.PlayFeedbacks();

        SubscribeBtn();
        ResetQuestionPanel();
    }
    private void OnDisable()
    {

        selectedAnswer = "";
        correctAnswer = "";
        UnsubscribeBtn();
        canvasGroup.alpha = 1;
        foreach (var btn in buttonChoices)
        {
            btn.ResetChoiceBtn();
        }
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

        var info = QuestionsManager.Instance.GetQandAInfo(id);
        correctAnswer = info.c_answer;
        Debug.Log($"THIS QUESTION's ID IS {id}, AND THE ANSWER IS {info.c_answer}");

    }

    private void ChoicePressed(string selectedAnswer) //Reciever from each buttons
    {
        //Check the answer on button press
        Debug.Log("PRESSING " + selectedAnswer + " CHOICE BTN");
        this.selectedAnswer = selectedAnswer;
    }

    public void FadeOutChoices()
    {
        QandAChoicesBtnUI[] fadeOtherBtn;

        fadeOtherBtn = buttonChoices.Where(choices => choices.GetChoiceValue != selectedAnswer && choices.GetChoiceValue != correctAnswer).ToArray();

        foreach (var btn in fadeOtherBtn)
        {
            btn.FadeChoiceButton();
        }

    }
    public void CheckAnswer()
    {
        var checkedAnswer = QuestionsManager.Instance.CheckQuestionAnswer(selectedAnswer);

        if (checkedAnswer)
        {
            //Correct answer
            Debug.Log("Correct Answer");
            //UI_Manager.Instance.CloseMenu("Question UI");

            //Open the upgrade stats
            int amountUpgrade = ThesisUtility.RandomGetAmount(3, 7);
            int amountPoints = ThesisUtility.RandomGetAmount(500, 1000);

            //UI_Manager.Instance.OpenMenu("UpgradeStats UI");
            var upgradeMenu = UI_Manager.Instance.GetMenu("UpgradeStats UI"); //Menu
            
            //Modifying mmf canvas group
            MMF_CanvasGroup mmfScale = correctFeedback?.GetFeedbackOfType<MMF_CanvasGroup>("SetUpgradeCanvas");
            mmfScale.TargetCanvasGroup = upgradeMenu.GetComponent<CanvasGroup>();

            //Rewards
            UI_Manager.Instance.FindComponentInUIMenu<UpgradeStatsSystem>("UpgradeStats UI").SetPowerPoints(amountUpgrade);
            GameManager.Instance.AddCurrentChapterScore(amountPoints);

            //Play the correct feedback
            correctFeedback?.PlayFeedbacks();

        }
        else
        {
            //Wrong answer
            Debug.Log("Wrong Answer");
            //qandAAnimator?.SetTrigger("Wrong");
            MMF_Animation animator = wrongFeedback?.GetFeedbackOfType<MMF_Animation>("QandA_Anim");
            animator.BoundAnimator = qandAAnimator;
            animator.TriggerParameterName = "Wrong";
            wrongFeedback?.PlayFeedbacks();
        }
    }


    public void CloseQandA()
    {
        Debug.Log("Animation has finished");
        UI_Manager.Instance.CloseMenu("Question UI");
    }


}
