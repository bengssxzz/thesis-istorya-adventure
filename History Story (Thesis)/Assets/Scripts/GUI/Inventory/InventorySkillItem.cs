using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public struct InventorySkillItem
{
    public AbilityScript abilityItem;
    public bool isEmpty => abilityItem == null;

    public static InventorySkillItem GetEmptyItem() => new InventorySkillItem
    {
        abilityItem = null
    };
}