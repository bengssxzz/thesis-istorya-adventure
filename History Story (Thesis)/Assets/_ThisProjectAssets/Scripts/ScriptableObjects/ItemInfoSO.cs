using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
[CreateAssetMenu(fileName = "New Item", menuName = "Environment/Item")]
public class ItemInfoSO : ScriptableObject
{
    public Sprite itemSprite;
    public string itemID;

    [Multiline(30)]
    public string description;














    private void OnValidate()
    {
#if UNITY_EDITOR
        itemID = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }
}
