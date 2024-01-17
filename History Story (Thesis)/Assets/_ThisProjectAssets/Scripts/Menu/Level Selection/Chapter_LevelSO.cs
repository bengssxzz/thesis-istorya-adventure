using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Chapter Story Level", menuName = "Chapter Level")]
public class Chapter_LevelSO : ScriptableObject
{
    public string chapterName;
    public string chapterTitle;

    [Space(10)]
    public string sceneName;

    [Space(15)]
    [Header("Chapter Info")]
    public Sprite chapter_img;

    [TextArea]
    public string description;










    private void OnValidate()
    {
#if UNITY_EDITOR
        chapterName = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }
}
