using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="AudioSO", menuName ="Chapters(Level)/Chapter Audios")]
public class SceneAudioSO : ScriptableObject
{
    [System.Serializable] public class SceneSoundFx
    {
        public AudioClip soundFx;

        [Header("FOR LOOP")]
        public int randomLoopCount = 0;
        public float delayLoop = 0.2f;

        [Space(10)]
        [Tooltip("If you want to play the fx in random stereo pan")]
        public bool randomStereoPan = false;
        [Range(0, 100)] public float minVolume = 50;
        [Range(0, 100)] public float maxVolume = 100;
    }
    public List<AudioClip> defaultMusic;
    public List<AudioClip> combatMusic;
    public List<AudioClip> bossMusic;


    [Space(15)]
    [Header("Ambiance Sound")]
    public AudioClip backgroundSound;
    [Range(0, 100)] public float backgroundVolume;

    [Space(10)]
    public float playEverySeconds = 1f;
    [Range(0, 100)] public float chanceToPlayFx = 50;
    public List<SceneSoundFx> sceneFxSound;

}
