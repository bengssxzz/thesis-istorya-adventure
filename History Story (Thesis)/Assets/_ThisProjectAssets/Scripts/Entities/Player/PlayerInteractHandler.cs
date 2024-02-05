using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using PixelCrushers.DialogueSystem;


#if UNITY_EDITOR
using UnityEditor;
#endif


public class PlayerInteractHandler : MonoBehaviour
{
    private PlayerScript player;

    [SerializeField] ProximitySelector proximitySelector;
    [SerializeField] private Transform itemHolder;

    private PickupObject pickupObject;

    public bool isHoldingSomething { get { return pickupObject != null; } }
    public GameObject objectHolding { get { return pickupObject.gameObject; } }


    private void Awake()
    {
        player = GetComponent<PlayerScript>();
    }
    private void OnEnable()
    {
        InputManager.Instance.OnInteractObject += InteractObject;

        //Register a function for quest system
        Lua.RegisterFunction(nameof(GetHoldingSomething), this, SymbolExtensions.GetMethodInfo(() => GetHoldingSomething(string.Empty)));
        Lua.RegisterFunction(nameof(GetTheItemHolding), this, SymbolExtensions.GetMethodInfo(() => GetTheItemHolding()));
    }
    private void OnDisable()
    {
        InputManager.Instance.OnInteractObject -= InteractObject;

        Lua.UnregisterFunction(nameof(GetHoldingSomething));
        Lua.UnregisterFunction(nameof(GetTheItemHolding));
    }

    private void Start()
    {
        //InvokeRepeating("UpdateInteractButton", 0.1f, 0.2f); //Invoke repeat the UpdateInteractButton()
        StartCoroutine(UpdateInteractButton1());
    }

    #region LUA Functions
    public bool GetHoldingSomething(string requiredItemId) //Check the id of the item
    {
        //var getItemId = pickupObject.GetItemSo.itemID;
        var getItemId = "";

        if(pickupObject != null)
        {
            getItemId = pickupObject.GetItemId;
        }

        return getItemId == requiredItemId;
    }
    public void GetTheItemHolding() //Remove the pickup item
    {
        if(isHoldingSomething && pickupObject != null)
        {
            Destroy(pickupObject.gameObject);
            pickupObject = null;
        }
    }
    #endregion
    private void InteractObject()
    {
        Debug.Log("SELECTING USABLE OBJECT");

        if (isHoldingSomething && proximitySelector.usablesInRange.Count == 0)
        {
            DropItem();
        }
        else
        {
            proximitySelector.UseCurrentSelection();

        }
    }

    private void PickUpTheItem(PickupObject pickObject) //Pick up the item
    {
        this.pickupObject = pickObject;
        pickObject.GetUsablePixelCrushers.enabled = false;
        pickObject.IsItemPickup = true;
        pickObject.transform.SetParent(itemHolder);
        pickObject.transform.localPosition = Vector3.zero;
    }

    public void DropItem() //Drop the item
    {
        var pickObject = Instantiate(pickupObject, transform.position, Quaternion.identity); //Drop the object in player position
        pickObject.name = pickupObject.name;
        pickObject.GetUsablePixelCrushers.enabled = true;
        pickObject.IsItemPickup = false;
        Destroy(pickupObject.gameObject);
        pickupObject = null;

        player.GetAttack_Controller.EnableAttacking = !isHoldingSomething;
    }
    public void PickUpObject(PickupObject pickObject) //Trigger interact
    {
        if (pickupObject == null) //Pick up the object
        {
            PickUpTheItem(pickObject);
        }
        else //Swap the object
        {
            var itemObject = Instantiate(pickupObject, pickObject.transform.position, Quaternion.identity);
            itemObject.name = pickupObject.name;
            itemObject.GetUsablePixelCrushers.enabled = true;
            Destroy(pickupObject.gameObject);
            pickupObject = null;

            PickUpTheItem(pickObject);

        }

        player.GetAttack_Controller.EnableAttacking = !isHoldingSomething; //Stop attacking when holding something
    }


    private void UpdateInteractButton() //Handle the update of the interact button
    {
        //Debug.Log("UPDATE VISUAL OF INTERACTION");
        if(proximitySelector.usablesInRange.Count > 0) //Check if usable object is in range
        {
            UI_Manager.Instance.OpenMenu("Interact Button");
        }
        else
        {
            //Check if holding something
            if (isHoldingSomething) 
            {
                UI_Manager.Instance.FindComponentInUIMenu<MobileInteractButton>("Interact Button").UpdateInteractImage(MobileInteractButtonState.Drop); //Update the interact button
                return; 
            } 
            else
            {
                UI_Manager.Instance.CloseMenu("Interact Button");
            }
        }
    }

    private IEnumerator UpdateInteractButton1()
    {
        while (true)
        {
            if (proximitySelector.usablesInRange.Count > 0) //Check if usable object is in range
            {
                UI_Manager.Instance.OpenMenu("Interact Button");
            }
            else
            {
                //Check if holding something
                if (isHoldingSomething)
                {
                    UI_Manager.Instance.FindComponentInUIMenu<MobileInteractButton>("Interact Button").UpdateInteractImage(MobileInteractButtonState.Drop); //Update the interact button
                }
                else
                {
                    UI_Manager.Instance.CloseMenu("Interact Button");
                }
            }

            yield return new WaitForEndOfFrame();
        }



        
        
    }
























    //[SerializeField] private Transform itemHolder;

    //public bool IsHoldingSomething { get { return itemHolder.childCount > 0; } } //Player is holding something


    //private void OnEnable()
    //{
    //    //InputManager.Instance.PlayerActionInput.actions["Interact"].started += InteractObject;
    //}
    //private void OnDisable()
    //{
    //    //InputManager.Instance.PlayerActionInput.actions["Interact"].started -= InteractObject;

    //}

    //private void InteractObject(UnityEngine.InputSystem.InputAction.CallbackContext obj)
    //{
    //    DropObject();
    //}

    //private void DropObject(PickupObject _object = null) //Drop item to new object
    //{
    //    //PickupObject holdItem = itemHolder.GetComponentInChildren<PickupObject>(true);
    //    //PickupObject holdItem = itemHolder.GetChild(0).GetComponent<PickupObject>();
    //    PickupObject holdItem = itemHolder.GetComponentsInChildren<PickupObject>().FirstOrDefault();
    //    GameObject dropItem = ObjectPooling.Instance.GetObjectInPool("item", holdItem.gameObject);

    //    if (_object == null)
    //    {
    //        //Drop to players position
    //        dropItem.transform.position = transform.position;
    //    }
    //    else
    //    {
    //        //PickupObject holdItem = itemHolder.GetComponentInChildren<PickupObject>(true);
    //        //GameObject dropItem = ObjectPooling.instance.GetObjectInPool("item", holdItem.gameObject);
    //        dropItem.transform.position = _object.transform.position;
    //    }
    //    Debug.Log("holditem: " + holdItem.name);
    //    //Destroy(holdItem.gameObject);
    //    holdItem.gameObject.SetActive(false);
    //}
    //private void PickUp(PickupObject _object)
    //{
    //    _object.transform.SetParent(itemHolder);
    //    _object.transform.position = itemHolder.position; //Reset the position
    //    _object.transform.rotation = itemHolder.rotation; //Reset the position
    //}

    //public void PickUpObject(PickupObject _object)
    //{
    //    if (IsHoldingSomething)
    //    {
    //        //Swap
    //        DropObject(_object); //Drop
    //        PickUp(_object); //Pickup

    //    }
    //    else
    //    {
    //        //No holding
    //        PickUp(_object);
    //    }



    //}








    //    //[SerializeField] private Transform placeHolder;
    //    //private GameObject pickedObject;
    //    //public bool hasAlreadyPickup
    //    //{
    //    //    get
    //    //    {
    //    //        return pickedObject != null;
    //    //    }
    //    //}
    //    //public GameObject PickedObject
    //    //{
    //    //    set
    //    //    {

    //    //        if (value == null)
    //    //        {
    //    //            if (pickedObject != null)
    //    //            {
    //    //                Debug.Log("Drop picked item");
    //    //                var itemObject = Instantiate(pickedObject);
    //    //                itemObject.name = pickedObject.name;
    //    //                itemObject.transform.position = transform.position;
    //    //                Destroy(pickedObject);
    //    //                pickedObject = null;
    //    //            }
    //    //            return;
    //    //        }

    //    //        if (hasAlreadyPickup)
    //    //        {
    //    //            //drop item
    //    //            Debug.Log("Swap picked item");
    //    //            var itemObject = Instantiate(pickedObject);
    //    //            itemObject.name = value.name;
    //    //            itemObject.transform.position = value.transform.position;
    //    //            Destroy(pickedObject);
    //    //            pickedObject = null;
    //    //        }

    //    //        value.transform.SetParent(placeHolder);
    //    //        value.transform.position = placeHolder.position;
    //    //        pickedObject = value;

    //    //    }
    //    //}
    //    //public IInteractable[] test;


    //    //[SerializeField] private bool canInteract = false;
    //    //[SerializeField] private float interactRadius = 0.5f;

    //    ////Testing
    //    //public IInteractable nearestInteractable;

    //    [SerializeField] private bool debugMode = false;
    //    [SerializeField] private float interactArea;
    //    [SerializeField] private Vector2 offsetArea;

    //    private Vector2 GetTransformPosition { get { return (Vector2)transform.position + offsetArea; } }
    //    private IInteractable currentInteract;

    //    [SerializeField] private GameObject nearest; //Debug only


    //    private void OnEnable()
    //    {
    //        InputManager.Instance.PlayerActionInput.actions["Interact"].started += InteractObject;

    //    }



    //    private void OnDisable()
    //    {
    //        InputManager.Instance.PlayerActionInput.actions["Interact"].started -= InteractObject;

    //    }

    //    private void Update()
    //    {
    //        Collider2D[] objectsInArea = Physics2D.OverlapCircleAll(GetTransformPosition, interactArea);
    //        IInteractable[] sortInteractables = objectsInArea
    //            .Select(col => col.GetComponent<IInteractable>()) //Select the object with IInteractable component only
    //            .Where(interactable => interactable != null)
    //            .OrderBy(interactable => Vector2.Distance(GetTransformPosition, ((MonoBehaviour)interactable).transform.position)) //Sort the array nearest to player to farthest
    //            .ToArray();


    //        if (sortInteractables.Length > 0)
    //        {
    //            currentInteract?.HideIndicator();
    //            currentInteract = sortInteractables[0];
    //            currentInteract?.ShowIndicator();
    //        }
    //        else
    //        {
    //            currentInteract?.HideIndicator();
    //            currentInteract = null;
    //        }

    //        nearest = ((MonoBehaviour)currentInteract)?.gameObject; //For debuging only


    //    }
    //    private void InteractObject(UnityEngine.InputSystem.InputAction.CallbackContext obj)
    //    {
    //        currentInteract?.TriggerInteract();
    //    }





    //    private void OnDrawGizmosSelected()
    //    {
    //#if UNITY_EDITOR
    //        Handles.color = Color.green;
    //        Handles.DrawWireDisc(GetTransformPosition, transform.forward, interactArea);
    //#endif
    //    }


}
