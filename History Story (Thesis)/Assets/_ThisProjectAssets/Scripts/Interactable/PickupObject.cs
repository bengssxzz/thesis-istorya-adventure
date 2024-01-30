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
    [SerializeField] private VisualSelector selector;
    public Usable GetUsablePixelCrushers { get { return selector.GetVisualUsable; } }



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
        player = PlayerSingleton.Instance.playerScript;

    }


    private void OnUseObject()
    {
        //Pick up the object
        player.GetInteractHandler.PickUpObject(this);
    }










}
