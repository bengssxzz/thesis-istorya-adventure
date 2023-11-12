using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class QandAChoicesBtnUI : MonoBehaviour
{
    private Button button;
    private TextMeshProUGUI choiceText;

    private string choiceValue;

    public event Action<string> OnButtonPressed;

    private void Awake()
    {
        button = GetComponent<Button>();
        choiceText = GetComponentInChildren<TextMeshProUGUI>();
    }

    private void Start()
    {
        button.onClick.AddListener(ButtonPressed);
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
