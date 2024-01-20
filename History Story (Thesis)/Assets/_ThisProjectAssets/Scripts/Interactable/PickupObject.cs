using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickupObject : MonoBehaviour
{
    private enum PickState { Pickable, Collectible}
    private PlayerScript player;

    [SerializeField] private PickState pickMode = PickState.Pickable;


    private void Awake()
    {
        player = PlayerSingleton.Instance.playerScript;
    }


    public void OnUse()
    {
        if(pickMode != PickState.Pickable) { return; }

        Debug.Log(this.gameObject.name);
        player.GetInteractHandler.PickUpObject(this);


    }






}
