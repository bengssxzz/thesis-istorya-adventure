using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Ink.Runtime;
using System;

public class DialogManager : Singleton<DialogManager>
{
    private Story currentStory;

    private bool dialogIsPlaying = false;

    public event Action<bool, string> OnDialogContinue;
    public event Action OnDialogFinished;


    protected override void Awake()
    {
        base.Awake();
    }

    public void EnterNewDialog(TextAsset inkJSON, string path)
    {
        currentStory = new Story(inkJSON.text);
        currentStory.ChoosePathString(path);
        ContinueDialogLine();
    }

    public void ContinueDialogLine()
    {
        string dialogLine = "";
        bool isDone = false;

        if(currentStory == null)
        {
            Debug.LogWarning("Current Dialog is empty");
            return;
        }

        if (currentStory.canContinue)
        {
            //If the dialog still have next line

            dialogLine = currentStory.Continue();
            dialogIsPlaying = true;
            isDone = false;

            //TEMPORARY
            DirectorTimelineManager.Instance.PauseTimeline();
        }
        else
        {
            //Dialog is done
            dialogLine = "";
            dialogIsPlaying = false;
            isDone = true;

            OnDialogFinished?.Invoke();

            //TEMPORARY
            DirectorTimelineManager.Instance.ContinueTimeline();

        }

        OnDialogContinue?.Invoke(isDone, dialogLine);
    }

























    //public static DialogManager instance;

    //private Story currentStory;

    //public event Action OnFinishedDialog;
    //public event Action<string> OnChangeText, OnChangeName;
    //public event Action<Sprite> OnChangeSprite;

    //public float writeTextSpeed { get; private set; } = 0.003f;
    //public bool dialogIsPlaying { get; private set; } = false;
    //public bool canContinueToNextLine { get; private set; } = false;


    //private void Awake()
    //{
    //    if (instance == null)
    //    {
    //        instance = this;
    //    }
    //    else if (instance != this)
    //    {
    //        Destroy(gameObject);
    //    }
    //}


    //public bool SetContinueToNextLine(bool value) => canContinueToNextLine = value;
    //public void EnterNewDialog(TextAsset inkJSON, string path)
    //{
    //    GameManager.instance.IsPlayerCanMove(false);
    //    currentStory = new Story(inkJSON.text);
    //    dialogIsPlaying = true;
    //    HandleChangePath(path);
    //}

    //private void ExitDialogMode()
    //{
    //    GameManager.instance.IsPlayerCanMove(true);
    //    dialogIsPlaying = false;
    //    UIManager.instance.ChangeUIState = UIManager.GUIState.InGame;
    //}

    //public void ContinueStory()
    //{
    //    if (currentStory.canContinue)
    //    {
    //        //The Inky is not yet finish
    //        string dialogLine = currentStory.Continue();
    //        HandleInkTags(currentStory.currentTags);
    //        OnChangeText?.Invoke(dialogLine);
    //    }
    //    else
    //    {
    //        //When the inky JSON is done picking line
    //        OnFinishedDialog?.Invoke();
    //        ExitDialogMode();
    //    }
    //}

    //private void HandleInkTags(List<string> currentTags)
    //{
    //    foreach (var tag in currentTags)
    //    {
    //        string[] splitTag = tag.Split(":");
    //        if(splitTag.Length != 2)
    //        {
    //            Debug.LogError("Tag is not appropriately parsed: " + tag);
    //        }
    //        string tagKey = splitTag[0].Trim();
    //        string tagValue = splitTag[1].Trim();

    //        switch (tagKey)
    //        {
    //            case "speaker":
    //                OnChangeName?.Invoke(tagValue);
    //                break;
    //            default:
    //                break;
    //        }
    //    }


    //}

    //private void HandleChangePath(string path)
    //{
    //    if(path == null)
    //    {
    //        Debug.LogError("Path string dialog is missing");
    //        return;
    //    }

    //    currentStory.ChoosePathString(path);
    //}

















}
