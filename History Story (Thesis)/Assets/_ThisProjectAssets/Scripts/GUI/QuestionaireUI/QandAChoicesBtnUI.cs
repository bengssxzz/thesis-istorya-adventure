using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using MoreMountains.Tools;

public class QandAChoicesBtnUI : MonoBehaviour
{
    private MMTouchButton button;
    [SerializeField] private TextMeshProUGUI choiceText;

    private string choiceValue;

    public event Action<string> OnButtonPressed;

    private void Awake()
    {
        button = GetComponent<MMTouchButton>();
    }

    private void Start()
    {
        button.ButtonReleased.AddListener(ButtonPressed);
    }

    private void ButtonPressed()
    {
        OnButtonPressed?.Invoke(choiceValue);
    }

    public void UpdateBtn(string textValue)
    {
        choiceValue = textValue;

        choiceText.text = textValue;
    }


}
