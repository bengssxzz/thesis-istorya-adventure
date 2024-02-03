using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;
using System;

public class PickupObject : MonoBehaviour
{
    private PlayerScript player;

    [SerializeField] private string itemID;

    [Space(10)]
    [SerializeField] private SpriteRenderer spriteRender;
    [SerializeField] private VisualSelector selector;

    private bool isPickup = false;

    public Usable GetUsablePixelCrushers { get { return selector.GetVisualUsable; } }
    public string GetItemId { get { return itemID; } set { itemID = value; } }
    public Sprite GetItemSprite { get { return spriteRender.sprite; } set { spriteRender.sprite = value; } }
    public bool IsItemPickup { get { return isPickup; } set { isPickup = value; } }


    private void OnEnable()
    {
        selector.OnEventUseObject += OnUseObject;
        
    }

  

    private void OnDisable()
    {
        selector.OnEventUseObject -= OnUseObject;

    }

    private void Start()
    {
        player = PlayerSingleton.Instance.GetPlayerScript;

    }


    private void OnUseObject()
    {
        //Pick up the object
        player.GetInteractHandler.PickUpObject(this);
    }










}
