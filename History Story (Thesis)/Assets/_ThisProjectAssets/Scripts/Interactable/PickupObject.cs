using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;
using System;

public class PickupObject : MonoBehaviour
{
    private PlayerScript player;
    [SerializeField] private Usable usableComponents;
    [SerializeField] private GameObject selectorVisual;


    public Usable GetUsablePixelCrushers { get { return usableComponents; } }



    private void OnEnable()
    {

        usableComponents.events.onSelect.AddListener(OnSelectObject);
        usableComponents.events.onUse.AddListener(OnUseObject);
        usableComponents.events.onDeselect.AddListener(OnDeselectObject);
    }

  

    private void OnDisable()
    {
        usableComponents.events.onSelect.RemoveListener(OnSelectObject);
        usableComponents.events.onUse.RemoveListener(OnUseObject);
        usableComponents.events.onDeselect.RemoveListener(OnDeselectObject);
    }

    private void Start()
    {
        player = PlayerSingleton.Instance.playerScript;

        selectorVisual.SetActive(false);
    }


    private void OnUseObject()
    {
        //Pick up the object
        player.GetInteractHandler.PickUpObject(this);
    }
    private void OnDeselectObject()
    {
        Debug.Log("CLOSE THE INTERACT BUTTON");
        selectorVisual.SetActive(false);
        UI_Manager.Instance.CloseMenu("Interact Button");
    }
    private void OnSelectObject()
    {
        Debug.Log("OPEN THE INTERACT BUTTON");
        selectorVisual.SetActive(true);
        UI_Manager.Instance.OpenMenu("Interact Button");
    }











    //private enum PickState { Pickable, Collectible}
    //private PlayerScript player;
    //private Usable itemUsable;

    //[SerializeField] private PickState pickMode = PickState.Pickable;

    //private bool isPickup = false;


    //private void OnEnable()
    //{
    //    isPickup = false;
    //    itemUsable.enabled = !isPickup;

    //}

    //private void Awake()
    //{
    //    player = PlayerSingleton.Instance.playerScript;
    //    itemUsable = transform.GetComponentInChildren<Usable>();
    //}


    //public void OnUse()
    //{
    //    if(pickMode != PickState.Pickable && isPickup == false) { return; }

    //    Debug.Log(this.gameObject.name);
    //    player.GetInteractHandler.PickUpObject(this);

    //    isPickup = true;
    //    itemUsable.enabled = !isPickup;
    //}






}
