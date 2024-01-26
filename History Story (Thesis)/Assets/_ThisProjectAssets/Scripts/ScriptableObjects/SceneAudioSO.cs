using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="AudioSO", menuName ="Chapters(Level)/Chapter Audios")]
public class SceneAudioSO : ScriptableObject
{
    public AudioClip chapterMusic;

    public AudioClip combatMusic;
    public AudioClip bossMusic;
}
