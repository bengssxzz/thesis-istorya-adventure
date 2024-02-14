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
    [SerializeField] private MMF_Player correctFeedback;

    private QandAChoicesBtnUI[] buttonChoices;


    private int qandaId = -1;
    private string tableName = "";

    private string selectedAnswer = "";
    private string correctAnswer = "";


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
        selectedAnswer = "";
        correctAnswer = "";
        UnsubscribeBtn();

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


        //var checkedAnswer = QuestionsManager.Instance.CheckQuestionAnswer(selectedAnswer);

        //if (checkedAnswer)
        //{
        //    //Correct answer
        //    Debug.Log("Correct Answer");
        //    UI_Manager.Instance.CloseMenu("Question UI");

        //    //Open the upgrade stats
        //    int amountUpgrade = ThesisUtility.RandomGetAmount(3, 7);
        //    int amountPoints = ThesisUtility.RandomGetAmount(500, 1000);

        //    UI_Manager.Instance.OpenMenu("UpgradeStats UI");
        //    UI_Manager.Instance.FindComponentInUIMenu<UpgradeStatsSystem>("UpgradeStats UI").SetPowerPoints(amountUpgrade);

        //    GameManager.Instance.AddCurrentChapterScore(amountPoints);
        //}
        //else
        //{
        //    //Wrong answer
        //    Debug.Log("Wrong Answer");
        //    qandAAnimator?.SetTrigger("Wrong");

        //}
        
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
            var questionUIMenu = UI_Manager.Instance.GetMenu("Question UI"); //Menu

            //Modifying mmf scale
            MMF_Scale mmfScale = correctFeedback?.GetFeedbackOfType<MMF_Scale>("UpgradeStats");
            mmfScale.AnimateScaleTarget = upgradeMenu;

            //Modifying mmf setactive upgrade
            MMF_SetActive mmfsetActiveUpgrade = correctFeedback?.GetFeedbackOfType<MMF_SetActive>("SetActiveUpgrade");
            mmfsetActiveUpgrade.TargetGameObject = upgradeMenu.gameObject;

            //Modifying mmf setactive question ui
            MMF_SetActive mmfsetActiveQuestionUI = correctFeedback?.GetFeedbackOfType<MMF_SetActive>("SetActiveUpgrade");
            mmfsetActiveQuestionUI.TargetGameObject = questionUIMenu.gameObject;

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
            qandAAnimator?.SetTrigger("Wrong");

        }
    }


    public void CloseQandA()
    {
        Debug.Log("Animation has finished");
        UI_Manager.Instance.CloseMenu("Question UI");
    }


}
