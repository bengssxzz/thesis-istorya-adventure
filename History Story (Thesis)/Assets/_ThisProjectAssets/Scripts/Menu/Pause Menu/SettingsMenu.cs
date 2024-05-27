using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using TMPro;
using UnityEngine.UI;
using System;
using MoreMountains.Feedbacks;


public class SettingsMenu : MonoBehaviour
{
    private const float MAX_VOLUME = 1.5f;

    [Header("Slider Value Set Txt")]
    [SerializeField] private TextMeshProUGUI masterValueTxt;
    [SerializeField] private TextMeshProUGUI musicValueTxt;
    [SerializeField] private TextMeshProUGUI SFX_ValueTxt;

    [Header("Slider feedbacks")]
    [SerializeField] private MMF_Player masterVolumeFeedbackValueChange;
    [SerializeField] private MMF_Player musicVolumeFeedbackValueChange;
    [SerializeField] private MMF_Player sfxVolumeFeedbackValueChange;

    [Header("Slider Settings")]
    [SerializeField] private Slider sound_Master_Slider;
    [SerializeField] private Slider sound_Music_Slider;
    [SerializeField] private Slider sound_SFX_Slider;

    [Header("Toggle Settings")]
    [SerializeField] private Toggle mute_Master_Toggle;
    [SerializeField] private Toggle mute_Music_Toggle;
    [SerializeField] private Toggle mute_SFX_Toggle;


    [Space(10)]
    [SerializeField] private string menu_ID_Close;
    [SerializeField] private MMTouchButton updateSettingsBtn;
    [SerializeField] private MMTouchButton creditBtn;


    private float masterVolume;
    private float musicVolume;
    private float sfxVolume;

    private float masterVolumeValueChange;
    private float musicVolumeValueChange;
    private float sfxVolumeValueChange;



    private void OnEnable()
    {
        if (sound_Master_Slider != null)
            sound_Master_Slider.onValueChanged.AddListener(MasterValueChange);

        if (sound_Master_Slider != null)
            sound_Music_Slider.onValueChanged.AddListener(MusicValueChange);

        if (sound_Master_Slider != null)
            sound_SFX_Slider.onValueChanged.AddListener(SFXValueChange);


        updateSettingsBtn.ButtonReleased.AddListener(UpdateSoundManagerSettings);
        creditBtn.ButtonReleased.AddListener(OpenCreditPage);


        GetVolume();
    }

  
    private void OnDisable()
    {
        if (sound_Master_Slider != null)
            sound_Master_Slider.onValueChanged.RemoveListener(MasterValueChange);

        if (sound_Master_Slider != null)
            sound_Music_Slider.onValueChanged.RemoveListener(MusicValueChange);

        if (sound_Master_Slider != null)
            sound_SFX_Slider.onValueChanged.RemoveListener(SFXValueChange);

        updateSettingsBtn.ButtonReleased.RemoveListener(UpdateSoundManagerSettings);
        creditBtn.ButtonReleased.RemoveListener(OpenCreditPage);
    }

    private void MasterValueChange(float value)
    {
        if (value > masterVolumeValueChange)
        {
            //Increasing
            masterVolumeFeedbackValueChange?.PlayFeedbacks();
        }
        else if (value < masterVolumeValueChange)
        {
            //Decreasing
            masterVolumeFeedbackValueChange?.PlayFeedbacksInReverse();
        }

        masterVolumeValueChange = value;
        masterValueTxt.text = string.Format("{0}%", value);

        if (sound_Master_Slider != null)
        {
            masterVolume = (value / sound_Master_Slider.maxValue) * MAX_VOLUME;
            MMSoundManager.Instance.SetVolumeMaster(masterVolume);
        }
    }
    private void MusicValueChange(float value)
    {
        if (value > musicVolumeValueChange)
        {
            //Increasing
            musicVolumeFeedbackValueChange?.PlayFeedbacks();
        }
        else if (value < musicVolumeValueChange)
        {
            //Decreasing
            musicVolumeFeedbackValueChange?.PlayFeedbacksInReverse();
        }



        musicVolumeValueChange = value;
        musicValueTxt.text = string.Format("{0}%", value);

        if (sound_Music_Slider != null)
        {
            musicVolume = (value / sound_Music_Slider.maxValue) * MAX_VOLUME;
            MMSoundManager.Instance.SetVolumeMusic(musicVolume);

        }
    }
    private void SFXValueChange(float value)
    {
        if (value > sfxVolumeValueChange)
        {
            //Increasing
            sfxVolumeFeedbackValueChange?.PlayFeedbacks();
        }
        else if (value < sfxVolumeValueChange)
        {
            //Decreasing
            sfxVolumeFeedbackValueChange?.PlayFeedbacksInReverse();
        }

        sfxVolumeValueChange = value;
        SFX_ValueTxt.text = string.Format("{0}%", value);

        if (sound_SFX_Slider != null)
        {
            sfxVolume = (value / sound_SFX_Slider.maxValue) * MAX_VOLUME;
            MMSoundManager.Instance.SetVolumeSfx(sfxVolume);
        }
    }


    private void UpdateSoundManagerSettings()
    {
        SetVolume();
        UI_Manager.Instance.CloseMenu(menu_ID_Close);
    }

    private void GetVolume()
    {
        MMSoundManager.Instance.LoadSettings();

        masterVolume = MMSoundManager.Instance.GetTrackVolume(MMSoundManager.MMSoundManagerTracks.Master, false) / MAX_VOLUME;
        musicVolume = MMSoundManager.Instance.GetTrackVolume(MMSoundManager.MMSoundManagerTracks.Music, false) / MAX_VOLUME;
        sfxVolume = MMSoundManager.Instance.GetTrackVolume(MMSoundManager.MMSoundManagerTracks.Sfx, false) / MAX_VOLUME;


        Debug.Log("MASTER VOLUME: " + masterVolume + " || MUTED: " + MMSoundManager.Instance.IsMuted(MMSoundManager.MMSoundManagerTracks.Master));
        Debug.Log("MUSIC VOLUME: " + musicVolume + " || MUTED: " + MMSoundManager.Instance.IsMuted(MMSoundManager.MMSoundManagerTracks.Music));
        Debug.Log("SFX VOLUME: " + sfxVolume + " || MUTED: " + MMSoundManager.Instance.IsMuted(MMSoundManager.MMSoundManagerTracks.Sfx));


        if (mute_Master_Toggle != null)
            mute_Master_Toggle.isOn = !MMSoundManager.Instance.IsMuted(MMSoundManager.MMSoundManagerTracks.Master);

        if (mute_Music_Toggle != null)
            mute_Music_Toggle.isOn = !MMSoundManager.Instance.IsMuted(MMSoundManager.MMSoundManagerTracks.Music);

        if (mute_SFX_Toggle != null)
            mute_SFX_Toggle.isOn = !MMSoundManager.Instance.IsMuted(MMSoundManager.MMSoundManagerTracks.Sfx);


        if (sound_Master_Slider != null)
            sound_Master_Slider.value = masterVolume * sound_Master_Slider.maxValue;

        if (sound_Music_Slider != null)
            sound_Music_Slider.value = musicVolume * sound_Music_Slider.maxValue;

        if (sound_SFX_Slider != null)
            sound_SFX_Slider.value = sfxVolume * sound_SFX_Slider.maxValue;

    }

    private void SetVolume()
    {
        if (sound_Master_Slider != null)
        {
            masterVolume = (sound_Master_Slider.value / sound_Master_Slider.maxValue) * MAX_VOLUME;
            MMSoundManager.Instance.SetVolumeMaster(masterVolume);
        }
        if (sound_Music_Slider != null)
        {
            musicVolume = (sound_Music_Slider.value / sound_Music_Slider.maxValue) * MAX_VOLUME;
            MMSoundManager.Instance.SetVolumeMusic(musicVolume);

        }
        if (sound_SFX_Slider != null)
        {
            sfxVolume = (sound_SFX_Slider.value / sound_SFX_Slider.maxValue) * MAX_VOLUME;
            MMSoundManager.Instance.SetVolumeSfx(sfxVolume);

        }


        if (mute_Master_Toggle != null)
        {
            MMSoundManager.Instance.MuteSoundsOnTrack(MMSoundManager.MMSoundManagerTracks.Master, !mute_Master_Toggle.isOn, 0.5f);
        }
        if (mute_Music_Toggle != null)
        {
            MMSoundManager.Instance.MuteSoundsOnTrack(MMSoundManager.MMSoundManagerTracks.Music, !mute_Music_Toggle.isOn, 0.5f);
        }
        if (mute_SFX_Toggle != null)
        {
            MMSoundManager.Instance.MuteSoundsOnTrack(MMSoundManager.MMSoundManagerTracks.Sfx, !mute_SFX_Toggle.isOn, 0.5f);
        }



        MMSoundManager.Instance.SaveSettings();
    }

    private void OpenCreditPage()
    {
        UI_Manager.Instance.OpenMenu("CreditPage");
    }





}
