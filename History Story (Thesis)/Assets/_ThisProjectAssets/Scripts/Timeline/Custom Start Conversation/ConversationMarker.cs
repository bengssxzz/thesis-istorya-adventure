using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;
using PixelCrushers.DialogueSystem;

public class ConversationMarker : Marker, INotification , INotificationOptionProvider
{
    [ConversationPopup(true)]
    public string conversation; //Select a database for conversation

    [DialogueEntryPopup]
    public int dialogueEntry;
    [SerializeField] private bool showChoiceMenu = false;

    [Space(5)]
    [DialogueEntryPopup]
    public int dialogueUntil;

    [Space(5)]

    [Space(10)]
    [SerializeField] private bool retroactive = false;
    [SerializeField] private bool emitOnce = false;


    public PropertyName id => new PropertyName();

    public bool ShowChoiceMenu => showChoiceMenu;

    public NotificationFlags flags =>
        (retroactive ? NotificationFlags.Retroactive : default) | (emitOnce ? NotificationFlags.TriggerOnce : default);
}
