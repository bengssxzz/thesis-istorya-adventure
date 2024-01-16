using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInteractable : MonoBehaviour, IInteractable
{
    public bool canPickup = true;

    public void HideIndicator()
    {
        throw new System.NotImplementedException();
    }

    public void Intereractable(PlayerScript player)
    {
        Debug.Log("Player pick up this item: " + gameObject.name);
        //player.PickedObject = gameObject;

    }

    public void ShowIndicator()
    {
        throw new System.NotImplementedException();
    }

    public void TriggerInteract()
    {
        throw new System.NotImplementedException();
    }
}
