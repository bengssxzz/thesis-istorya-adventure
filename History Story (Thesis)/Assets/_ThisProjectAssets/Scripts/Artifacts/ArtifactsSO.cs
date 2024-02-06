using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Artifacts", menuName = "Environment/Artifacts")]
public class ArtifactsSO : ScriptableObject
{
    public Sprite artifactsSprite;

    public string artifactName;

    [Multiline(20)]
    public string description;




    private void OnValidate()
    {
#if UNITY_EDITOR
        artifactName = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }

}
