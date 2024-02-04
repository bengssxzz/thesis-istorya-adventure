using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Chapter Infos", menuName = "Chapters(Level)/Chapter Infos")]
public class Chapter_LevelSO : ScriptableObject
{
    public string chapterName;
    public string chapterTitle;

    [Space(10)]
    public string sceneFolderName;
    public string defaultSceneName;

    [Space(15)]
    [Header("Chapter Info")]
    public Sprite chapter_img;

    [Multiline(20)]
    public string description;










    private void OnValidate()
    {
#if UNITY_EDITOR
        chapterName = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }
}
