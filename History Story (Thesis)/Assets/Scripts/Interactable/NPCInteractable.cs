using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class NPCInteractable : MonoBehaviour, IInteractable
{
    [SerializeField] private TextAsset inkyJSON;
    [SerializeField] private string path;

    [SerializeField] private PlayableDirector director; //Play this timeline once the dialog is finished

    private void Awake()
    {
        DialogManager.Instance.OnDialogFinished += DialogFinished;

    }
    private void OnEnable()
    {
    }

    private void OnDisable()
    {
        DialogManager.Instance.OnDialogFinished -= DialogFinished;

    }

    private void SetState()
    {
        if (UIManager.Instance.ChangeUIState != UIManager.GUIState.DialogMode)
        {
            UIManager.Instance.ChangeUIState = UIManager.GUIState.DialogMode;
        }
    }

    public void Intereractable()
    {
        Debug.Log("Player interact " + gameObject.name);
        SetState();

        DialogManager.Instance.EnterNewDialog(inkyJSON, path);

        //DialogManager.instance.ContinueStory();
    }

    private void DialogFinished()
    {
        if(director == null) { return; }

        Debug.Log("Dialog Finished");
        DirectorTimelineManager.Instance.ChangeCurrentTimeline(director);

    }


}
