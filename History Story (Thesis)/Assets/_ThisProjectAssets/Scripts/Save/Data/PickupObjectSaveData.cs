using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class PickupObjectSaveData 
{
    public string itemId;
    public Vector3 position;
    public Vector3 scale;
    public Quaternion rotation;

    public Sprite itemSprite;


    public PickupObjectSaveData(PickupObject pickup)
    {
        itemId = pickup.GetItemId;
        position = pickup.transform.localPosition;
        scale = pickup.transform.localScale;
        rotation = pickup.transform.rotation;


        itemSprite = pickup.GetItemSprite;

    }








}
