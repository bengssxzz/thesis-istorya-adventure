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

    //public InputActionReference continueAction;

    private void Awake()
    {
        SubscribeEvent();
    }

    public override void ShowBehavior()
    {
        SubscribeEvent();
        InitializeDialog();
    }

    public override void HideBehavior()
    {
        UnsubscribeEvent();
    }

    private void SubscribeEvent()
    {
        //DialogManager.instance.OnChangeText += ChangeDialogText;
        //DialogManager.instance.OnChangeName += ChangeCharacterName;
        //DialogManager.instance.OnChangeSprite += ChangeCharacterImage;

        DialogManager.Instance.OnDialogContinue += DialogContinue;

        //InputManager.Instance.PlayerActionInput.actions["Continue"].started += ContinueDialog;
        //InputManager.Instance.PlayerActionInput.actions["Skip"].started += SkipDialog;
        //continueAction.action.started += ContinueDialog;
    }

    

    private void UnsubscribeEvent()
    {
        //DialogManager.instance.OnChangeText -= ChangeDialogText;
        //DialogManager.instance.OnChangeName -= ChangeCharacterName;
        //DialogManager.instance.OnChangeSprite -= ChangeCharacterImage;

        DialogManager.Instance.OnDialogContinue -= DialogContinue;


        //InputManager.Instance.PlayerActionInput.actions["Continue"].started -= ContinueDialog;
        //InputManager.Instance.PlayerActionInput.actions["Skip"].started -= SkipDialog;
    }

    private void InitializeDialog()
    {
        //dialogTxt.text = "";

    }

    private void ContinueDialog(InputAction.CallbackContext obj)
    {
        Debug.Log("Dialog Continue");
        DialogManager.Instance.ContinueDialogLine();
    }
    private void SkipDialog(InputAction.CallbackContext obj)
    {
        Debug.Log("Dialog Skipped");
        UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;
    }

    private void DialogContinue(bool isDialogDone, string dialogLine)
    {
        if (!isDialogDone)
        {
            //If the dialog is not yet done
            dialogTxt.text = dialogLine;
        }
        else
        {
            //The dialog is done

            UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;
        }
    }



    //private void ChangeCharacterName(string dialogLineName)
    //{
    //    Debug.Log("setting");
    //    characterNameTxt.text = dialogLineName;
    //}
    //private void ChangeCharacterImage(Sprite _characterSprite)
    //{
    //    characterImage.sprite = _characterSprite;
    //}
    //private void ChangeDialogText(string dialogLine)
    //{
    //    dialogTxt.text = dialogLine;
    //    DialogManager.instance.SetContinueToNextLine(true);

    //    //if(currentCoroutine != null)
    //    //{
    //    //    Debug.Log("Stoping the coroutine");
    //    //    StopCoroutine(WriteTextEffect(dialogLine));
    //    //}
    //    //Debug.Log("setting");
    //    //currentCoroutine = StartCoroutine(WriteTextEffect(dialogLine));
    //}

    //private void ResetText()
    //{
    //    dialogTxt.text = "";
    //}

    //private IEnumerator WriteTextEffect(string textLine)
    //{
    //    ResetText();

    //    DialogManager.instance.SetContinueToNextLine(false);

    //    foreach (char letter in textLine.ToCharArray())
    //    {
    //        dialogTxt.text += letter;
    //        yield return new WaitForSeconds(DialogManager.instance.writeTextSpeed);
    //    }
    //    DialogManager.instance.SetContinueToNextLine(true);
    //}


   
}
