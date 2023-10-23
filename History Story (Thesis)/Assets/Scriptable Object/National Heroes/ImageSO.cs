using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "NewPicture", menuName = "Interact/Picture")]
public class ImageSO : ScriptableObject
{
    public Sprite picture;
    public string pictureName;
    public string bornDate, diedDate;
   [Multiline] public string pictureDescription;
}
