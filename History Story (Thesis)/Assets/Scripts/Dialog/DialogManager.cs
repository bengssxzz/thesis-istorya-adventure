using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Ink.Runtime;
using System;

public class DialogManager : MonoBehaviour
{
    public static DialogManager instance;

    [SerializeField] private DialogUI dialogUI;
    [SerializeField] private float writeTextSpeed = 0.01f;
    private Story currentStory;

    private bool dialogIsPlaying = false;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            ContinueStory();
        }
    }

    public void EnterDialogMode(TextAsset inkJSON)
    {
        currentStory = new Story(inkJSON.text);
        dialogIsPlaying = true;
        dialogUI.Show();

        ContinueStory();
    }

    private void ExitDialogMode()
    {
        dialogIsPlaying = false;
        dialogUI.Hide();
    }

    private void ContinueStory()
    {
        if (currentStory.canContinue)
        {
            //The Inky is not yet finish
            string dialogLine = currentStory.Continue();
            //dialogUI.SetDialogText(dialogLine);
            dialogUI.ResetText();
            StartCoroutine(WriteTextEffect(dialogLine));
        }
        else
        {
            //When the inky JSON is done picking line
            ExitDialogMode();
        }
    }

    private IEnumerator WriteTextEffect(string textLine)
    {
        for (int i = 0; i < textLine.Length; i++)
        {
            dialogUI.WriteTextEffect(textLine[i]);
            yield return new WaitForSeconds(writeTextSpeed);
        }
    }
}
