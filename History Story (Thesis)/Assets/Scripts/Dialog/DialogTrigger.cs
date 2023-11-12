using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class DialogTrigger : MonoBehaviour
{
    [SerializeField] private TextAsset inkyJSON;
    [SerializeField] private string choosePathString;

    [SerializeField] private UnityEvent OnFinishedDialog;

    private bool canTalk = false;

    private void OnEnable()
    {
        DialogManager.instance.OnFinishedDialog += FinishedDialog;
    }
    private void OnDisable()
    {
        DialogManager.instance.OnFinishedDialog -= FinishedDialog;
    }

    private void Start()
    {
        DialogManager.instance.OnFinishedDialog += FinishedDialog;
    }

    private void Update()
    {
        if (!canTalk || DialogManager.instance.dialogIsPlaying) { return; }

        if (!DialogManager.instance.dialogIsPlaying  && Input.GetKeyDown(KeyCode.E))
        {
            if(inkyJSON == null)
            {
                Debug.LogWarning(gameObject.name + " has no inky JSON file");
                return;
            }

            StartConversation();
        }
        else if (DialogManager.instance.dialogIsPlaying && DialogManager.instance.canContinueToNextLine && Input.GetKeyDown(KeyCode.E))
        {
            Debug.Log("Second");
            DialogManager.instance.ContinueStory();
        }
    }

    public void StartConversation()
    {
        UIManager.instance.SetUIState = UIManager.GUIState.DialogMode;
        DialogManager.instance.EnterDialogMode(inkyJSON, choosePathString);
        DialogManager.instance.ContinueStory();
    }

    private void FinishedDialog()
    {
        OnFinishedDialog?.Invoke();
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
}
