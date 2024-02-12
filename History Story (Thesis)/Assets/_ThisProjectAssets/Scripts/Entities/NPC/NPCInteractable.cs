using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using PixelCrushers.DialogueSystem;
using Pathfinding;

public class NPCInteractable : MonoBehaviour
{
    private AIBase aiBasePath;
    private DialogueSystemTrigger dialogTrigger;


    [SerializeField] private VisualSelector selector;
    [SerializeField] private Collider2D NPCCollider;


    private void Awake()
    {
        dialogTrigger = GetComponent<DialogueSystemTrigger>();

        
    }

    private void OnEnable()
    {
        selector.OnEventUseObject += InteractNPC;

        selector.OnTriggerEnterSelectorRange += OnTriggerEnterSelector;
        selector.OnTriggerExitSelectorRange += OnTriggerExitSelector;
    }
    private void OnDisable()
    {
        selector.OnEventUseObject -= InteractNPC;

        selector.OnTriggerEnterSelectorRange -= OnTriggerEnterSelector;
        selector.OnTriggerExitSelectorRange -= OnTriggerExitSelector;
    }

    private void Update()
    {
        if(aiBasePath == null) { return; }
        if(aiBasePath.velocity.magnitude > 0.1)
        {
            Debug.Log("MOVING");
            NPCCollider.gameObject.SetActive(false);
        }
        else
        {
            Debug.Log("IDLE");
            NPCCollider.gameObject.SetActive(true);
        }
    }



    private void InteractNPC()
    {
        Debug.Log($"{transform.parent.name} INTERACT CONVO BY PLAYER");
        dialogTrigger.OnUse();
    }


    private void OnTriggerExitSelector(Collider2D obj)
    {
        dialogTrigger.OnTriggerExit2D(obj);
    }

    private void OnTriggerEnterSelector(Collider2D obj)
    {
        dialogTrigger.OnTriggerEnter2D(obj);
    }


    public void OnConversationStart(Transform actor) //Broadcast Messages from Dialog Manager
    {
        Debug.Log(string.Format("Starting conversation with {0}", actor.name));
    }


















    //[SerializeField] private TextAsset inkyJSON;
    //[SerializeField] private string path;

    //[SerializeField] private PlayableDirector director; //Play this timeline once the dialog is finished

    //private void Awake()
    //{
    //    DialogManager.Instance.OnDialogFinished += DialogFinished;

    //}
    //private void OnEnable()
    //{
    //    DialogManager.Instance.OnDialogFinished += DialogFinished;
    //}

    //private void OnDisable()
    //{
    //    DialogManager.Instance.OnDialogFinished -= DialogFinished;

    //}

    //private void SetState()
    //{
    //    if (UIManager.Instance.ChangeUIState != UIManager.GUIState.DialogMode)
    //    {
    //        UIManager.Instance.ChangeUIState = UIManager.GUIState.DialogMode;
    //    }
    //}

    //public void Intereractable(PlayerScript player)
    //{
    //    Debug.Log("Player interact " + gameObject.name);
    //    SetState();

    //    DialogManager.Instance.EnterNewDialog(inkyJSON, path);

    //    //DialogManager.instance.ContinueStory();
    //}

    //private void DialogFinished()
    //{
    //    if(director == null) { return; }

    //    Debug.Log("Dialog Finished");
    //    DirectorTimelineManager.Instance.ChangeCurrentTimeline(director);

    //}

    //public void ShowIndicator()
    //{
    //    throw new NotImplementedException();
    //}

    //public void HideIndicator()
    //{
    //    throw new NotImplementedException();
    //}

    //public void TriggerInteract()
    //{
    //    throw new NotImplementedException();
    //}
}
