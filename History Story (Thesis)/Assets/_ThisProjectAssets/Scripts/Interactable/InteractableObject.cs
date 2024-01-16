using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractableObject : MonoBehaviour, IInteractable
{
    [SerializeField] private GameObject indicator;

    public UnityEvent OnTriggerInteract;

    private void Start()
    {
        indicator?.SetActive(false);
    }

    private void Update()
    {
        //interact = false;
        //indicator?.SetActive(interact);
    }


    public void HideIndicator()
    {
        if(indicator != null)
            indicator?.SetActive(false);
    }

    public void ShowIndicator()
    {
        if (indicator != null)
            indicator?.SetActive(true);
    }

    public void TriggerInteract()
    {
        Debug.Log("Player intract " + gameObject.name);
        OnTriggerInteract?.Invoke();
    }
}
