using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class DialogTrigger : MonoBehaviour, IInteractable
{
    //[SerializeField] private TextAsset inkyJSON;
    //[SerializeField] private string choosePathString;

    //[SerializeField] private UnityEvent OnFinishedDialog;

    //private bool onTriggerEventDialog = false;
    //private bool alreadyTrigger = false;
    ////private bool canTalk = false;
    //private bool isTalking = false;

    ////Testing
    //private bool doneForNow = false;


    //public void Intereractable()
    //{
    //    Debug.Log("I can now be interacted: " + gameObject.name);
    //    if (isTalking || doneForNow == false)
    //    {
    //        if (!DialogManager.instance.dialogIsPlaying)
    //        {
    //            if (inkyJSON == null)
    //            {
    //                Debug.LogError(gameObject.name + " has no inky JSON file");
    //                return;
    //            }
    //            Debug.Log("First");
    //            StartConversation();
    //        }
    //        else if (DialogManager.instance.canContinueToNextLine)
    //        {
    //            Debug.Log("Second");
    //            DialogManager.instance.ContinueStory();

    //        }
    //    }

    //}
    //private void StartConversation()
    //{
    //    isTalking = true;

    //    DialogManager.instance.OnFinishedDialog += FinishedDialog;
    //    UIManager.instance.SetUIState = UIManager.GUIState.DialogMode;
    //    DialogManager.instance.EnterDialogMode(inkyJSON, choosePathString);
    //    DialogManager.instance.ContinueStory();
    //}

    //public void OnEventStartConversation(string pathString)
    //{
    //    //Testing
    //    GameManager.instance.GetPlayer().nearestObject = this;

    //    isTalking = true;
    //    onTriggerEventDialog = true;

    //    if (onTriggerEventDialog && LevelManager.instance.currentDirector != null)
    //        LevelManager.instance.PauseDirector();

    //    DialogManager.instance.OnFinishedDialog += FinishedDialog;
    //    UIManager.instance.SetUIState = UIManager.GUIState.DialogMode;
    //    DialogManager.instance.EnterDialogMode(inkyJSON, pathString);
    //    DialogManager.instance.ContinueStory();
    //}

    //private void FinishedDialog()
    //{
    //    GameManager.instance.GetPlayer().nearestObject = null;
    //    isTalking = false;

    //    if (alreadyTrigger == false && onTriggerEventDialog == false)
    //    {
    //        Debug.Log("Removing");
    //        OnFinishedDialog?.Invoke();
    //        alreadyTrigger = true;
    //    }

    //    if (onTriggerEventDialog && LevelManager.instance.currentDirector != null)
    //    {
    //        LevelManager.instance.PlayDirector();
    //        onTriggerEventDialog = false;
    //    }



    //    DialogManager.instance.OnFinishedDialog -= FinishedDialog;
    //    Debug.Log("Im Done Playing");
    //    doneForNow = true;
    //}

    ////private void OnTriggerEnter2D(Collider2D collision)
    ////{
    ////    if (collision.CompareTag("Player"))
    ////    {
    ////        canTalk = true;
    ////    }
    ////}
    //private void OnTriggerExit2D(Collider2D collision)
    //{
    //    if (collision.CompareTag("Player"))
    //    {
    //        doneForNow = false;
    //    }
    //}








    [SerializeField] private TextAsset inkyJSON;
    [SerializeField] private string choosePathString;

    [SerializeField] private UnityEvent OnFinishedDialog;

    private bool onTriggerEventDialog = false;
    private bool alreadyTrigger = false;
    private bool canTalk = false;
    private bool isTalking = false;


    //private void OnEnable()
    //{
    //    DialogManager.instance.OnFinishedDialog += FinishedDialog;
    //}
    //private void OnDisable()
    //{
    //    DialogManager.instance.OnFinishedDialog -= FinishedDialog;
    //}

    //private void Start()
    //{
    //    DialogManager.instance.OnFinishedDialog += FinishedDialog;
    //}



    private void Update()
    {
        if (!canTalk && isTalking == false && DialogManager.instance.dialogIsPlaying == false) { return; }


        if (canTalk || isTalking)
        {
            if (Input.GetKeyDown(KeyCode.E))
            {
                if (!DialogManager.instance.dialogIsPlaying)
                {
                    if (inkyJSON == null)
                    {
                        Debug.LogWarning(gameObject.name + " has no inky JSON file");
                        return;
                    }
                    Debug.Log("First");
                    StartConversation();
                }
                else if (DialogManager.instance.canContinueToNextLine)
                {
                    Debug.Log("Second");
                    DialogManager.instance.ContinueStory();

                }
            }
        }

    }
    public void Intereractable()
    {
        
    }

    private void StartConversation()
    {
        isTalking = true;

        DialogManager.instance.OnFinishedDialog += FinishedDialog;
        UIManager.instance.SetUIState = UIManager.GUIState.DialogMode;
        DialogManager.instance.EnterDialogMode(inkyJSON, choosePathString);
        DialogManager.instance.ContinueStory();
    }

    public void OnEventStartConversation(string pathString)
    {
        isTalking = true;
        onTriggerEventDialog = true;

        if (onTriggerEventDialog && LevelManager.instance.currentDirector != null)
            LevelManager.instance.PauseDirector();

        DialogManager.instance.OnFinishedDialog += FinishedDialog;
        UIManager.instance.SetUIState = UIManager.GUIState.DialogMode;
        DialogManager.instance.EnterDialogMode(inkyJSON, pathString);
        DialogManager.instance.ContinueStory();
    }

    private void FinishedDialog()
    {
        isTalking = false;

        if (onTriggerEventDialog && LevelManager.instance.currentDirector != null)
        {
            LevelManager.instance.PlayDirector();
            onTriggerEventDialog = false;
        }

        if (canTalk && !alreadyTrigger)
        {
            Debug.Log("Removing");
            OnFinishedDialog?.Invoke();
            alreadyTrigger = true;
        }

        DialogManager.instance.OnFinishedDialog -= FinishedDialog;

    }



    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            canTalk = true;
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            canTalk = false;
        }
    }

    public void Up_Interactable()
    {
        throw new NotImplementedException();
    }
}
