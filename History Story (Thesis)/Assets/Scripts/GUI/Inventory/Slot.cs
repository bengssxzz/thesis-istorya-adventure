using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public abstract class Slot : MonoBehaviour, IPointerClickHandler, IBeginDragHandler, IEndDragHandler, IDropHandler, IDragHandler
{
    [SerializeField] private Image skillImage;
    protected bool isEmpty = true;


    public virtual void ResetData() //Reset item
    {
        skillImage.gameObject.SetActive(false);
        isEmpty = true;
    }
    public virtual void SetData(Sprite sprite)
    {
        skillImage.gameObject.SetActive(true);
        skillImage.sprite = sprite;
        isEmpty = false;
    }

    public abstract void OnPointerClick(PointerEventData eventData);
    public abstract void OnBeginDrag(PointerEventData eventData);
    public abstract void OnDrag(PointerEventData eventData);
    public abstract void OnEndDrag(PointerEventData eventData);
    public abstract void OnDrop(PointerEventData eventData);
}
