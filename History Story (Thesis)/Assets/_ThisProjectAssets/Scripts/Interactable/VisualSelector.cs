using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;
using System;

public class VisualSelector : MonoBehaviour
{

    public event Action OnEventUseObject;
    public event Action OnEventSelectObject;
    public event Action OnEventDeselectObject;

    public event Action<Collider2D> OnTriggerEnterSelectorRange;
    public event Action<Collider2D> OnTriggerExitSelectorRange;

    private Collider2D rangeCollider;
    private Usable usable;

    [SerializeField] private MobileInteractButtonState interactVisualState;
    [SerializeField] private GameObject selector;


    public Usable GetVisualUsable { get { return usable; } }
    public MobileInteractButtonState GetVisualIndicator { get { return interactVisualState; } }


    private void Awake()
    {
        usable = GetComponent<Usable>();


    }

    private void Start()
    {
        selector?.SetActive(false);
    }

    private void OnEnable()
    {
        usable.events.onSelect.AddListener(OnSelectObject);
        usable.events.onUse.AddListener(OnUseObject);
        usable.events.onDeselect.AddListener(OnDeselectObject);
    }
    private void OnDisable()
    {
        usable.events.onSelect.RemoveListener(OnSelectObject);
        usable.events.onUse.RemoveListener(OnUseObject);
        usable.events.onDeselect.RemoveListener(OnDeselectObject);
    }
    private void OnTriggerEnter2D(Collider2D collision) => OnTriggerEnterSelectorRange?.Invoke(collision);
    private void OnTriggerExit2D(Collider2D collision) => OnTriggerExitSelectorRange?.Invoke(collision);

    public void ToggleSelector(bool toggle)
    {
        selector?.SetActive(toggle);
    }

    private void OnUseObject()
    {
        OnEventUseObject?.Invoke();
    }
    private void OnDeselectObject()
    {
        selector?.SetActive(false);

        //UI_Manager.Instance.CloseMenu("Interact Button");
        OnEventDeselectObject?.Invoke();
    }
    private void OnSelectObject()
    {
        selector?.SetActive(true); //Enable the visual selector

        //UI_Manager.Instance.OpenMenu("Interact Button");
        //var interact = UI_Manager.Instance.FindComponentInUIMenu<MobileInteractButton>("Interact Button");
        //interact.UpdateInteractImage(interactVisualState); //Update the visual of interact button

        OnEventSelectObject?.Invoke(); //Invoke event
    }
}
