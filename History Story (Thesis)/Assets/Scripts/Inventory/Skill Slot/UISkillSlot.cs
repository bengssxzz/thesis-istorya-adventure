using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;



public class UISkillSlot : MonoBehaviour, IDropHandler
{
    public event Action<UISkillItem> onDropItem;

    public void OnDrop(PointerEventData eventData)
    {
        Debug.Log("OnDrop");
    }
}
