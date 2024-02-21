using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Chapter Infos", menuName = "Chapters(Level)/Chapter Infos")]
public class Chapter_LevelSO : ScriptableObject
{
    [System.Serializable]
    public class Collectibles
    {
        public List<ArtifactsSO> artifacts;
        public List<AbilityScript> abilities;
    }


    public string chapterName;
    public string chapterTitle;

    [Space(10)]
    public string defaultSceneName;
    public string defaultTransID = "dafault";

    [Space(10)]
    [Header("Collection")]
    public Collectibles collections;

    [Space(15)]
    [Header("Chapter Info")]
    public Sprite chapter_img;

    [TextArea(5,10)]
    public string description;










    private void OnValidate()
    {
#if UNITY_EDITOR
        chapterName = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }
}
