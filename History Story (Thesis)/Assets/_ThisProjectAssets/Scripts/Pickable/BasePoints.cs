using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using MoreMountains.Tools;
using Cysharp.Threading.Tasks;
using System;

[RequireComponent(typeof(Collider2D))]
public abstract class BasePoints : MonoBehaviour
{
    private const float MIN_LIFE_SECOND = 20;
    private const float MAX_LIFE_SECOND = 30;

    [SerializeField] private bool useLifeTime = true;

    [Header("Sound")]
    [SerializeField] private AudioClip collectSound;
    [SerializeField] [Range(0, 2)] private float minVolume = 1;
    [SerializeField] [Range(0, 2)] private float maxVolume = 1;
    [SerializeField] [Range(-3, 3)] private float minPitch = 1;
    [SerializeField] [Range(-3, 3)] private float maxPitch = 1;


    [Header("Base Info")]
    [SerializeField] private int minPoints = 10;
    [SerializeField] private int maxPoints = 20;

    [SerializeField] private float delayReward = 0;

    private int amountPoints;
    private float lifeSecond;

    private float startTimer;

    public int GetAmountPoints { get { return amountPoints; } set { amountPoints = value; } }
    public object TimeSpawn { get; private set; }

    private void OnEnable()
    {
        OnAwakeBehaviour();

        startTimer = Time.time;

        if(useLifeTime)
            StartCoroutine(LifetimeTimer());
    }


    protected virtual void OnAwakeBehaviour()
    {
        lifeSecond = ThesisUtility.RandomGetFloat(MIN_LIFE_SECOND, MAX_LIFE_SECOND);
        amountPoints = ThesisUtility.RandomGetAmount(minPoints, maxPoints);
    }
    protected abstract void CollectedBehaviour(PlayerScript player, int points);


    private void PlaySound()
    {
        var soundFx = MMSoundManagerPlayOptions.Default;
        soundFx.MmSoundManagerTrack = MMSoundManager.MMSoundManagerTracks.Sfx;
        soundFx.Volume = ThesisUtility.RandomGetFloat(minVolume, maxVolume);
        soundFx.Pitch = ThesisUtility.RandomGetFloat(minPitch, maxPitch);

        if(collectSound != null)
            MMSoundManagerSoundPlayEvent.Trigger(collectSound, soundFx);
    }
    private async void OnTriggerEnter2D(Collider2D collision)
    {
        var delay = ThesisUtility.RandomGetFloat(0.5f, 1);
        if(Time.time < startTimer + delay) { return; }

        var player = collision.GetComponent<PlayerScript>();


        if (collision.CompareTag("Player") && player != null)
        {
            PlaySound();
            gameObject.SetActive(false);
            await UniTask.Delay(TimeSpan.FromSeconds(delayReward));

            CollectedBehaviour(player, amountPoints);
        }
    }


    private IEnumerator LifetimeTimer()
    {
        yield return new WaitForSeconds(lifeSecond);
        gameObject.SetActive(false);
    }






















}
