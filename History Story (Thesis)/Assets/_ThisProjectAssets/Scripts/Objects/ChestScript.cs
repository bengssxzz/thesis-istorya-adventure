using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using PixelCrushers.DialogueSystem;
using MoreMountains.Feedbacks;
using System;

public class ChestScript : MonoBehaviour
{
    private DropLoot dropLoot;

    [SerializeField] private MMF_Player openFeedback;
    [SerializeField] private MMF_Player closeFeedback;
    [SerializeField] private VisualSelector selector;

    public UnityEvent OnOpened;
    public UnityEvent OnNearToChest;

    private bool isLocked = false;
    private bool isOpened = false;


    private void Awake()
    {
        dropLoot = GetComponent<DropLoot>();
    }

    private void OnEnable()
    {
        selector.OnEventUseObject += UseObject;
        selector.OnTriggerEnterSelectorRange += NearToChest;
    }

    private void OnDisable()
    {
        selector.OnEventUseObject -= UseObject;
        selector.OnTriggerEnterSelectorRange -= NearToChest;
    }

    private void NearToChest(Collider2D obj) //When player is close to chest
    {
        if (isOpened || isLocked) 
        {
            return; 
        }

        OnNearToChest?.Invoke();
    }

    private void UseObject() //When the player use this object
    {
        if (isOpened || isLocked)
        {
            return; 
        }

        openFeedback?.PlayFeedbacks();
        isOpened = true;
        selector.gameObject.SetActive(false);

        OnOpened?.Invoke();
    }

    public void DropTheLoot()
    {
        if(dropLoot == null) { return; }

        dropLoot.LootDrop();
    }

    //TODO: TIMER

}
