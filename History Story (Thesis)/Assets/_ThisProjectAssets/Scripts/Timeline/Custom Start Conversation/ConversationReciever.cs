using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;
using PixelCrushers.DialogueSystem;
using System;

public class ConversationReciever : MonoBehaviour, INotificationReceiver
{
    private int entryStart = -1;
    private int entryFinal = -1;
    private bool showMenu = false;

    [SerializeField] private Transform conversant;
    [SerializeField] private Transform actor;

    private void OnEnable()
    {
        DialogueManager.instance.conversationEnded += ConversationEnded;
    }
    private void OnDisable()
    {
        DialogueManager.instance.conversationEnded -= ConversationEnded;
    }

    //Call every line ended
    private void OnConversationLineEnd(Subtitle subtitle) //Broadcast reciever from dialogue system
    {
        int lastLineID = DialogueManager.CurrentConversationState.subtitle.dialogueEntry.id;

        Debug.Log("End Panel MY ID: " + entryFinal + " DIALGUE LINE ID:" + lastLineID);
        //DialogueManager.standardDialogueUI.ShowAlert("WORKING", 10);

        if (entryFinal > -1)
        {
            if (lastLineID == entryFinal)
            {
                DialogueManager.StopConversation(); //Stop the current dialogue
            }
        }
    }
    //Call every line started
    private void OnConversationLine(Subtitle subtitle) //Broadcast reciever from dialogue system
    {
        

    }


    private void ConversationEnded(Transform t)
    {
        DirectorTimelineManager.Instance.ContinueTimeline();
    }

    public void OnNotify(Playable origin, INotification notification, object context)
    {
        Debug.Log(notification);
        if(notification is ConversationMarker marker)
        {
            entryStart = marker.dialogueEntry;
            entryFinal = marker.dialogueUntil;
            showMenu = marker.ShowChoiceMenu;

            DialogueManager.StartConversation(marker.conversation, actor, conversant, marker.dialogueEntry); //Start Conversation
            Debug.Log("WHOAH ID: " + DialogueManager.CurrentConversationState.subtitle.dialogueEntry.id);

            //Get the dialogue line
            int dialogueLine = DialogueManager.CurrentConversationState.subtitle.dialogueEntry.id;

            Debug.Log("Start Panel MY ID: " + entryStart + " DIALGUE LINE ID:" + dialogueLine);

            //When the current dialogue line is the same as start entry id
            if (dialogueLine == entryStart) 
            {
                if (showMenu) //If show menu
                {
                    if (DialogueManager.CurrentConversationState.hasPCResponses) //Check if it has player choices
                    {
                        Subtitle currentSub = DialogueManager.CurrentConversationState.subtitle;
                        Response[] response = DialogueManager.currentConversationState.pcResponses;

                        DialogueManager.standardDialogueUI.HideSubtitle(currentSub); //Hide the subtitle
                        DialogueManager.standardDialogueUI.ShowResponses(currentSub, response, 0); //Show the reponses menu
                    } 
                }
            }

            DirectorTimelineManager.Instance.PauseTimeline();

            //Start a timeline
        }
    }
}
