using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class DialogUI : MonoBehaviour
{
    [SerializeField] private Image characterImage;
    [SerializeField] private TextMeshProUGUI characterNameTxt, dialogTxt;


    public void WriteTextEffect(char character)
    {
        dialogTxt.text += character;
    }
    public void SetDialogText(string dialogLine)
    {
        dialogTxt.text = dialogLine;
    }
    public void ResetText()
    {
        dialogTxt.text = "";
    }

    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }

    
}
