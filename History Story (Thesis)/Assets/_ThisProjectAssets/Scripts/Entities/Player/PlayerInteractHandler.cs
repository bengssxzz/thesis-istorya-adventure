using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;
#endif


public class PlayerInteractHandler : MonoBehaviour
{
    //[SerializeField] private Transform placeHolder;
    //private GameObject pickedObject;
    //public bool hasAlreadyPickup
    //{
    //    get
    //    {
    //        return pickedObject != null;
    //    }
    //}
    //public GameObject PickedObject
    //{
    //    set
    //    {

    //        if (value == null)
    //        {
    //            if (pickedObject != null)
    //            {
    //                Debug.Log("Drop picked item");
    //                var itemObject = Instantiate(pickedObject);
    //                itemObject.name = pickedObject.name;
    //                itemObject.transform.position = transform.position;
    //                Destroy(pickedObject);
    //                pickedObject = null;
    //            }
    //            return;
    //        }

    //        if (hasAlreadyPickup)
    //        {
    //            //drop item
    //            Debug.Log("Swap picked item");
    //            var itemObject = Instantiate(pickedObject);
    //            itemObject.name = value.name;
    //            itemObject.transform.position = value.transform.position;
    //            Destroy(pickedObject);
    //            pickedObject = null;
    //        }

    //        value.transform.SetParent(placeHolder);
    //        value.transform.position = placeHolder.position;
    //        pickedObject = value;

    //    }
    //}
    //public IInteractable[] test;


    //[SerializeField] private bool canInteract = false;
    //[SerializeField] private float interactRadius = 0.5f;

    ////Testing
    //public IInteractable nearestInteractable;

    [SerializeField] private bool debugMode = false;
    [SerializeField] private float interactArea;
    [SerializeField] private Vector2 offsetArea;

    private Vector2 GetTransformPosition { get { return (Vector2)transform.position + offsetArea; } }
    private IInteractable currentInteract;

    [SerializeField] private GameObject nearest; //Debug only


    private void OnEnable()
    {
        InputManager.Instance.PlayerActionInput.actions["Interact"].started += InteractObject;

    }



    private void OnDisable()
    {
        InputManager.Instance.PlayerActionInput.actions["Interact"].started -= InteractObject;

    }

    private void Update()
    {
        Collider2D[] objectsInArea = Physics2D.OverlapCircleAll(GetTransformPosition, interactArea);
        IInteractable[] sortInteractables = objectsInArea
            .Select(col => col.GetComponent<IInteractable>()) //Select the object with IInteractable component only
            .Where(interactable => interactable != null)
            .OrderBy(interactable => Vector2.Distance(GetTransformPosition, ((MonoBehaviour)interactable).transform.position)) //Sort the array nearest to player to farthest
            .ToArray();


        if (sortInteractables.Length > 0)
        {
            currentInteract?.HideIndicator();
            currentInteract = sortInteractables[0];
            currentInteract?.ShowIndicator();
        }
        else
        {
            currentInteract?.HideIndicator();
            currentInteract = null;
        }

        nearest = ((MonoBehaviour)currentInteract)?.gameObject; //For debuging only


    }
    private void InteractObject(UnityEngine.InputSystem.InputAction.CallbackContext obj)
    {
        currentInteract?.TriggerInteract();
    }





    private void OnDrawGizmosSelected()
    {
#if UNITY_EDITOR
        Handles.color = Color.green;
        Handles.DrawWireDisc(GetTransformPosition, transform.forward, interactArea);
#endif
    }


}
