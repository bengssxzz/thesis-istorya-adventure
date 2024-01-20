using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;

public class PickupObject : MonoBehaviour
{
    private enum PickState { Pickable, Collectible}
    private PlayerScript player;
    private Usable itemUsable;

    [SerializeField] private PickState pickMode = PickState.Pickable;

    private bool isPickup = false;


    private void OnEnable()
    {
        isPickup = false;
        itemUsable.enabled = !isPickup;
    }

    private void Awake()
    {
        player = PlayerSingleton.Instance.playerScript;
        itemUsable = transform.GetComponentInChildren<Usable>();
    }


    public void OnUse()
    {
        if(pickMode != PickState.Pickable && isPickup == false) { return; }

        Debug.Log(this.gameObject.name);
        player.GetInteractHandler.PickUpObject(this);

        isPickup = true;
        itemUsable.enabled = !isPickup;
    }






}
