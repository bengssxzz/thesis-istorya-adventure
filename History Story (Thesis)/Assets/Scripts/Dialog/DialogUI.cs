using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.InputSystem;

public class DialogUI : UIPages
{
    [SerializeField] private Image characterImage;
    [SerializeField] private TextMeshProUGUI characterNameTxt, dialogTxt;

    private Coroutine currentCoroutine;

    public InputActionReference continueAction;

    private void Awake()
    {
        SubscribeEvent();
    }

    private void SubscribeEvent()
    {
        DialogManager.instance.OnChangeText += ChangeDialogText;
        DialogManager.instance.OnChangeName += ChangeCharacterName;
        DialogManager.instance.OnChangeSprite += ChangeCharacterImage;

        //InputManager.instance.PlayerActionInputs.DialogUI.Continue.started += ContinueDialog;
        continueAction.action.started += ContinueDialog;
    }
    private void UnsubscribeEvent()
    {
        DialogManager.instance.OnChangeText -= ChangeDialogText;
        DialogManager.instance.OnChangeName -= ChangeCharacterName;
        DialogManager.instance.OnChangeSprite -= ChangeCharacterImage;

        //InputManager.instance.PlayerActionInputs.DialogUI.Continue.started -= ContinueDialog;

    }

    private void ContinueDialog(InputAction.CallbackContext obj)
    {
        Debug.Log("Dialog Continue");
    }

    private void ChangeCharacterName(string dialogLineName)
    {
        Debug.Log("setting");
        characterNameTxt.text = dialogLineName;
    }
    private void ChangeCharacterImage(Sprite _characterSprite)
    {
        characterImage.sprite = _characterSprite;
    }
    private void ChangeDialogText(string dialogLine)
    {
        dialogTxt.text = dialogLine;
        DialogManager.instance.SetContinueToNextLine(true);

        //if(currentCoroutine != null)
        //{
        //    Debug.Log("Stoping the coroutine");
        //    StopCoroutine(WriteTextEffect(dialogLine));
        //}
        //Debug.Log("setting");
        //currentCoroutine = StartCoroutine(WriteTextEffect(dialogLine));
    }

    private void ResetText()
    {
        dialogTxt.text = "";
    }
    private IEnumerator WriteTextEffect(string textLine)
    {
        ResetText();

        DialogManager.instance.SetContinueToNextLine(false);

        foreach (char letter in textLine.ToCharArray())
        {
            dialogTxt.text += letter;
            yield return new WaitForSeconds(DialogManager.instance.writeTextSpeed);
        }
        DialogManager.instance.SetContinueToNextLine(true);
    }

    public override void ShowBehavior()
    {
        SubscribeEvent();
    }

    public override void HideBehavior()
    {
        UnsubscribeEvent();
    }
}
