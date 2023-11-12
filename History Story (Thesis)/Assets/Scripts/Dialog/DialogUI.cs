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

    private Coroutine currentCoroutine;

    private void OnEnable()
    {
        SubscripteEvent();
    }
    private void OnDisable()
    {
        UnsubscripteEvent();
    }

    private void Awake()
    {
        SubscripteEvent();
    }

    private void SubscripteEvent()
    {
        DialogManager.instance.OnChangeText += ChangeDialogText;
        DialogManager.instance.OnChangeName += ChangeCharacterName;
        DialogManager.instance.OnChangeSprite += ChangeCharacterImage;
    }
    private void UnsubscripteEvent()
    {
        DialogManager.instance.OnChangeText -= ChangeDialogText;
        DialogManager.instance.OnChangeName -= ChangeCharacterName;
        DialogManager.instance.OnChangeSprite -= ChangeCharacterImage;
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



    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }

    
}
