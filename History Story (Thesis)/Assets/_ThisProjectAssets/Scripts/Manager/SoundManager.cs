using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;


public class SoundManager : Singleton<SoundManager>
{
    [SerializeField] SceneAudioSO sceneAudio;

    const int ID_NUMBER = 143;


    private void Start()
    {
        PlayMusic(sceneAudio.chapterMusic);
        PlayMusic(sceneAudio.combatMusic);
    }

    public void PlayMusic(AudioClip clip)
    {
        MMSoundManagerPlayOptions options = MMSoundManagerPlayOptions.Default;
        options.MmSoundManagerTrack = MMSoundManager.MMSoundManagerTracks.Music;
        options.ID = ID_NUMBER;
        options.Loop = true;
        options.Volume = 0.2f;
        
        MMSoundManagerSoundPlayEvent.Trigger(clip, options); //Play the music
    }
    public void StopMusic()
    {
        //Stop the music
        MMSoundManagerTrackFadeEvent.Trigger(MMSoundManagerTrackFadeEvent.Modes.StopFade,
            MMSoundManager.MMSoundManagerTracks.Music, 
            0.2f, 
            0, 
            new MMTweenType(MMTween.MMTweenCurve.LinearTween));
    }
    
    public void ChangeMusic()
    {
    }

    private IEnumerator SoundSequence()
    {
        // starts to fade it out (using the ID we passed earlier)
        yield return null;
        MMSoundManagerSoundFadeEvent.Trigger(MMSoundManagerSoundFadeEvent.Modes.StopFade,ID_NUMBER, 0.5f, 0f, new MMTweenType(MMTween.MMTweenCurve.EaseInCubic));

        // frees the sound at the end (still using that same ID)
        yield return MMCoroutine.WaitFor(0.5f);
        MMSoundManagerSoundControlEvent.Trigger(MMSoundManagerSoundControlEventTypes.Free, ID_NUMBER);


        //Play changed music

    }


























}
