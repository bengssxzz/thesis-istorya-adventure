using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using MoreMountains.Tools;
using MoreMountains.Feedbacks;

public class QandAChoicesBtnUI : MonoBehaviour
{
    private MMTouchButton button;
    private CanvasGroup canvasGroup;

    [SerializeField] private TextMeshProUGUI choiceText;

    [SerializeField] private MMF_Player pressedFeedback;
    [SerializeField] private MMF_Player fadingFeedback;

    private string choiceValue;

    public event Action<string> OnButtonPressed;


    public string GetChoiceValue { get { return choiceValue; } }



    private void Awake()
    {
        button = GetComponent<MMTouchButton>();
        canvasGroup = GetComponent<CanvasGroup>();
    }

    private void Start()
    {
        button.ButtonReleased.AddListener(ButtonPressed);
    }

    public void ResetChoiceBtn()
    {
        gameObject.SetActive(true);
        canvasGroup.alpha = 1;

        DisableButtonChoice(true);
    }

    public void DisableButtonChoice(bool toggle)
    {
        canvasGroup.interactable = toggle;
        canvasGroup.blocksRaycasts = toggle;
    }
    private void ButtonPressed()
    {
        DisableButtonChoice(false);

        pressedFeedback?.PlayFeedbacks();
        OnButtonPressed?.Invoke(choiceValue);
    }

    public void FadeChoiceButton()
    {
        fadingFeedback?.PlayFeedbacks();
    }

    public void UpdateBtn(string textValue)
    {
        choiceValue = textValue;

        choiceText.text = textValue;
    }


}
