using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PickableObject : MonoBehaviour
{
    [SerializeField] private LayerMask whoCanPickUp;

    private void OnTriggerEnter2D(Collider2D other)
    {
        Entities entity = other.GetComponent<Entities>();
        if(entity == null) { return; }

        // Check if the collision object's layer is in the specified LayerMask
        if (((1 << other.gameObject.layer) & whoCanPickUp) != 0)
        {
            PickUpLogic(entity);
            gameObject.SetActive(false);
        }
    }

    protected abstract void PickUpLogic(Entities entity);
}
