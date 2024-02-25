using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using MoreMountains.Tools;
using Cysharp.Threading.Tasks;
using ThesisLibrary;
using System.Threading;

public class SceneMusicController : Singleton<SceneMusicController>
{
    public enum MusicState { Default, Combat, Boss };

    const int SCENE_MUSIC_ID = 00;
    const int SCENE_COMBAT_MUSIC_ID = 01;
    const int SCENE_BOSS_MUSIC_ID = 02;

    [SerializeField] private SceneAudioSO sceneAudioSO;

    private MusicState musicSceneState = MusicState.Default;

    private AudioSource sceneMusicSource;
    private AudioSource sceneCombateMusicSource;
    private AudioSource sceneBossMusicSource;

    private CancellationTokenSource cancellationToken;

    private MMSoundManagerPlayOptions sceneMusicOptions;
    private MMSoundManagerPlayOptions sceneCombatMusicOptions;
    private MMSoundManagerPlayOptions sceneBossMusicOptions;


    private void OnDestroy()
    {
        DestroyAllSounds();
        cancellationToken?.Cancel();
        cancellationToken?.Dispose();
    }
    private void OnDisable()
    {
        DestroyAllSounds();
        cancellationToken?.Cancel();
    }

    protected override void Awake()
    {
        base.Awake();

        cancellationToken = new CancellationTokenSource();

        InitializeMusicOptions();
    }

    private void Start()
    {
        SoundFxController().Forget();

        PlayMusicSound();
        PlaySoundBackground();
    }

    private void Update()
    {
        if (Input.GetKeyUp(KeyCode.Keypad1))
        {
            Debug.LogWarning("CHANGING MUSIC TO DEFAULT");
            ChangeMusic(MusicState.Default).Forget();
        }
        if (Input.GetKeyUp(KeyCode.Keypad2))
        {
            Debug.LogWarning("CHANGING MUSIC TO COMBAT");
            ChangeMusic(MusicState.Combat).Forget();
        }
        if (Input.GetKeyUp(KeyCode.Keypad3))
        {
            Debug.LogWarning("CHANGING MUSIC TO BOSS");
            ChangeMusic(MusicState.Boss).Forget();
        }
    }


    private void DestroyAllSounds()
    {
        MMSoundManager.Instance.FreeAllSounds();
        MMSoundManager.Instance.FreeAllLoopingSounds();
    }

    private async UniTaskVoid FreeAllPlayingFxSound()
    {
        var soundFxs = MMSoundManager.Instance.GetSoundsPlaying(MMSoundManager.MMSoundManagerTracks.Sfx);
        var duration = 0.5f;


        if(soundFxs.Count > 0)
        {
            foreach (var sound in soundFxs)
            {
                var soundID = sound.ID;
                MMSoundManagerSoundFadeEvent.Trigger(MMSoundManagerSoundFadeEvent.Modes.PlayFade, soundID, duration, 0, new MMTweenType(MMTween.MMTweenCurve.LinearTween)); //Out volume
            }
        }

        await UniTask.Delay(TimeSpan.FromSeconds(duration));
    }


    #region Music Control
    private void InitializeMusicOptions()
    {
        var defaultMusic = MMSoundManagerPlayOptions.Default;
        defaultMusic.MmSoundManagerTrack = MMSoundManager.MMSoundManagerTracks.Music;
        defaultMusic.Location = transform.position;
        defaultMusic.Volume = 0.5f;
        defaultMusic.Loop = true;
        //Fades
        defaultMusic.Fade = true;
        defaultMusic.FadeTween = new MMTweenType(MMTween.MMTweenCurve.LinearTween);
        defaultMusic.FadeDuration = 1;
        defaultMusic.FadeInitialVolume = 0;


        sceneMusicOptions = defaultMusic;
        sceneMusicOptions.ID = SCENE_MUSIC_ID;

        sceneCombatMusicOptions = defaultMusic;
        sceneCombatMusicOptions.ID = SCENE_COMBAT_MUSIC_ID;

        sceneBossMusicOptions = defaultMusic;
        sceneBossMusicOptions.ID = SCENE_BOSS_MUSIC_ID;
    }

    private void PlayMusicSound(float durationFade = 0, float finalVolume = 1)
    {
        AudioClip defaultMusic = null;

        if (MMSoundManager.Instance.GetSoundsPlaying(MMSoundManager.MMSoundManagerTracks.Music).Count > 0)
            defaultMusic = MMSoundManager.Instance.GetSoundsPlaying(MMSoundManager.MMSoundManagerTracks.Music)[0].Source.clip;

        switch (musicSceneState)
        {
            case MusicState.Default:
                if (sceneAudioSO?.defaultMusic.Count > 0)
                {
                    sceneMusicSource = MMSoundManagerSoundPlayEvent.Trigger(sceneAudioSO.defaultMusic.ToArray().RandomGetObject(), sceneMusicOptions);
                }
                else
                {
                    Debug.LogWarning("THERE ARE NO DEFAULT MUSIC IN THE SCENE");

                    if (defaultMusic == null) { return; }
                    MMSoundManagerSoundPlayEvent.Trigger(defaultMusic, sceneMusicOptions);
                }
                break;


            case MusicState.Combat:
                if (sceneAudioSO?.combatMusic.Count > 0)
                {
                    sceneCombateMusicSource = MMSoundManagerSoundPlayEvent.Trigger(sceneAudioSO.combatMusic.ToArray().RandomGetObject(), sceneCombatMusicOptions);
                }
                else
                {
                    Debug.LogWarning("THERE ARE NO COMBAT MUSIC IN THE SCENE");

                    if (defaultMusic == null) { return; }
                    MMSoundManagerSoundPlayEvent.Trigger(defaultMusic, sceneMusicOptions);
                }
                break;


            case MusicState.Boss:
                if (sceneAudioSO?.bossMusic.Count > 0)
                {
                    sceneBossMusicSource = MMSoundManagerSoundPlayEvent.Trigger(sceneAudioSO.bossMusic.ToArray().RandomGetObject(), sceneBossMusicOptions);
                }
                else
                {
                    Debug.LogWarning("THERE ARE NO BOSS MUSIC IN THE SCENE");

                    if (defaultMusic == null) { return; }
                    MMSoundManagerSoundPlayEvent.Trigger(defaultMusic, sceneMusicOptions);
                }
                break;
        }
    }
    public async UniTaskVoid ChangeMusic(MusicState changeState)
    {
        var soundList = MMSoundManager.Instance.GetSoundsPlaying(MMSoundManager.MMSoundManagerTracks.Music);
        var duration = 1;

        try
        {
            //Fade out all the sound in the music track
            if (soundList.Count > 0)
            {
                foreach (var sound in soundList)
                {
                    var soundID = sound.ID;
                    MMSoundManagerSoundFadeEvent.Trigger(MMSoundManagerSoundFadeEvent.Modes.PlayFade, soundID, duration, 0, new MMTweenType(MMTween.MMTweenCurve.LinearTween)); //Out volume
                }
            }


            await UniTask.Delay(TimeSpan.FromSeconds(duration / 2), cancellationToken: cancellationToken.Token); //Delay to play the next music

            musicSceneState = changeState;
            PlayMusicSound(duration, 1); //Play the sound

            await UniTask.Delay(TimeSpan.FromSeconds(duration), cancellationToken: cancellationToken.Token);

            //Free the music
            if (soundList.Count > 0)
            {
                foreach (var sound in soundList)
                {
                    var soundID = sound.ID;
                    MMSoundManagerSoundControlEvent.Trigger(MMSoundManagerSoundControlEventTypes.Free, soundID, sound.Source);
                }
            }
        }
        catch (OperationCanceledException)
        {
            if (MMSoundManager.Instance != null)
                MMSoundManager.Instance.StopAllSounds();
        }
        catch (ObjectDisposedException)
        {
            if(MMSoundManager.Instance != null)
            {
                MMSoundManager.Instance.StopAllSounds();
            }
        }



    }

    #endregion

    #region Sound Fx Music
    private async UniTaskVoid SoundFxController()
    {
        if (sceneAudioSO == null || sceneAudioSO.sceneFxSound.Count == 0) { return; }

        var fxSounds = sceneAudioSO.sceneFxSound;

        try
        {
            do
            {
                await UniTask.Yield();

                // Check if cancellation is requested
                cancellationToken.Token.ThrowIfCancellationRequested();

                //Change to play
                if (ThesisUtility.RandomGetChanceBool(sceneAudioSO.chanceToPlayFx / 100))
                {
                    var selectedClip = fxSounds.ToArray().RandomGetObject();

                    var defaultFx = MMSoundManagerPlayOptions.Default;
                    defaultFx.MmSoundManagerTrack = MMSoundManager.MMSoundManagerTracks.Sfx;
                    defaultFx.ID = 9999;
                    defaultFx.Priority = 1;

                    int loopCount = ThesisUtility.RandomGetAmount(0, selectedClip.randomLoopCount);

                    for (int i = 0; i < loopCount; i++)
                    {
                        defaultFx.PanStereo = selectedClip.randomStereoPan ? ThesisUtility.RandomGetFloat(-1, 1) : 0;
                        defaultFx.Volume = ThesisUtility.RandomGetFloat(selectedClip.minVolume, selectedClip.maxVolume) / 100;
                        MMSoundManagerSoundPlayEvent.Trigger(selectedClip.soundFx, defaultFx);

                        var isPlaying = MMSoundManager.Instance.FindByID(defaultFx.ID).isPlaying;

                        await UniTask.RunOnThreadPool(async () =>
                        {
                            while (isPlaying)
                            {
                                await UniTask.Yield(); // Yield to allow other operations
                                isPlaying = MMSoundManager.Instance.FindByID(defaultFx.ID).isPlaying;
                            }
                        }, cancellationToken: cancellationToken.Token);


                        await UniTask.Delay(TimeSpan.FromSeconds(selectedClip.delayLoop), cancellationToken: cancellationToken.Token);
                    }
                }

                await UniTask.Delay(TimeSpan.FromSeconds(sceneAudioSO.playEverySeconds), cancellationToken: cancellationToken.Token);
            } while (!cancellationToken.IsCancellationRequested);
        }
        catch
        {
            MMSoundManager.Instance.FreeAllSounds();
            Debug.Log("STOP THE SOUND FX AMBIANCE");
        }
        
    }

    //private async UniTaskVoid SoundFxController(CancellationToken cancellationToken)
    //{
    //    if (sceneAudioSO == null || sceneAudioSO.sceneFxSound.Count == 0)
    //    {
    //        return;
    //    }

    //    var fxSounds = sceneAudioSO.sceneFxSound;

    //    try
    //    {
    //        while (!cancellationToken.IsCancellationRequested)
    //        {
    //            //Change to play
    //            if (ThesisUtility.RandomGetChanceBool(sceneAudioSO.chanceToPlayFx / 100))
    //            {
    //                Debug.Log("PLAY THE FX SOUND");

    //                var selectedClip = fxSounds.ToArray().RandomGetObject();

    //                var defaultFx = MMSoundManagerPlayOptions.Default;
    //                defaultFx.MmSoundManagerTrack = MMSoundManager.MMSoundManagerTracks.Sfx;
    //                defaultFx.ID = 9999;

    //                for (int i = 0; i < ThesisUtility.RandomGetAmount(0, selectedClip.randomLoopCount); i++)
    //                {
    //                    defaultFx.Volume = ThesisUtility.RandomGetFloat(selectedClip.minVolume, selectedClip.maxVolume);
    //                    MMSoundManagerSoundPlayEvent.Trigger(selectedClip.soundFx, defaultFx);

    //                    var isSoundPlaying = MMSoundManager.Instance.FindByID(defaultFx.ID).isPlaying;

    //                    await UniTask.WaitUntil(() => isSoundPlaying == false || cancellationToken.IsCancellationRequested);
    //                }
    //            }
    //            else
    //            {
    //                Debug.Log("NO CHANCE TO PLAY");
    //            }

    //            await UniTask.Delay(TimeSpan.FromSeconds(sceneAudioSO.playEverySeconds), cancellationToken: cancellationToken);
    //            Debug.Log("PLAY AGAIN");
    //        }
    //    }
    //    catch (OperationCanceledException)
    //    {
    //        // Cancellation requested, exit gracefully
    //    }
    //    catch (Exception ex)
    //    {
    //        Debug.LogError($"SoundFxController encountered an error: {ex.Message}");
    //    }
    //}
    #endregion

    #region Sound Background Fx

    private void PlaySoundBackground()
    {
        if(sceneAudioSO == null || sceneAudioSO.backgroundSound == null) { return; }

        var backgroundOption = MMSoundManagerPlayOptions.Default;
        backgroundOption.MmSoundManagerTrack = MMSoundManager.MMSoundManagerTracks.Sfx;
        backgroundOption.Loop = true;
        backgroundOption.Volume = sceneAudioSO.backgroundVolume / 100;
        backgroundOption.Priority = 0;

        MMSoundManagerSoundPlayEvent.Trigger(sceneAudioSO.backgroundSound, backgroundOption);
    }


    #endregion


}
