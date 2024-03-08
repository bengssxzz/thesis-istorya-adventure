using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using System.Linq;
using Cysharp.Threading.Tasks;

[RequireComponent(typeof(PlayableDirector))]
[RequireComponent(typeof(Collider2D))]
public class TriggerTimeLine : MonoBehaviour
{
    public enum TriggerState
    {
        None, //Trigger nothing
        AwakeTrigger, //On start the timeline will trigger
        OnEnterTrigger, //when the player enter the collider
    }

    private PlayableDirector timelineDirector;

    [SerializeField] private TriggerState triggerState;
    [SerializeField] private DirectorWrapMode wrapMode;

    [SerializeField] private bool playOnce = true;

    private bool alreadyPlayOnce = false;

    /// <summary>
    /// For Saving and loading only
    /// </summary>
    public bool IsTimelinePlayOnce { get { return alreadyPlayOnce; } set { alreadyPlayOnce = value; } }

    private void Awake()
    {
        timelineDirector = GetComponent<PlayableDirector>();

    }

    private async void OnEnable()
    {
        var loadedData = await SaveGameDataManager.Instance.LoadTriggerTimelineInScene();

        if (loadedData != null)
        {
            foreach (var item in loadedData)
            {
                Debug.LogWarning($"ID: {item.stringId} : FIND: {gameObject.name} : RESULT: {item.stringId == gameObject.name}");
            }

            //var data = loadedData.FirstOrDefault(x => x.id == GetInstanceID());
            var data = loadedData.FirstOrDefault(x => {
                return x.stringId == gameObject.name;
            });

            if (data != null)
            {
                alreadyPlayOnce = data.isAlreadyTrigger;
            }
            else
            {
                Debug.LogError($"THERE ARE NO {gameObject.name} ID FOUND IN LOADED FILE FOR TRIGGER TIMELINE");
            }
        }
        else
        {
            Debug.LogWarning("THERE ARE NO FILE FOUND FOR TRIGGER TIMELINE IN THIS SCENE");
        }
    }


    private void Start()
    {
        if (triggerState == TriggerState.AwakeTrigger)
        {
            PlayDirectorTimeline();
        }
    }



    public async void PlayDirectorTimeline()
    {
        if (timelineDirector == null)
        {
            Debug.LogError("Director timeline is missing");
            return;
        }

        await UniTask.Delay(10);

        if (playOnce)
        {
            if (alreadyPlayOnce == false)
            {
                Debug.Log("PLAYING ONCE: " + alreadyPlayOnce);

                DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);
                alreadyPlayOnce = true;

            }
            else
            {
                DirectorTimelineManager.Instance.StopTimeline();
            }
        }
        else
        {
            Debug.Log("PLAY EVERY TIME");
            DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);
        }

        ////Play director timeline
        //if (playOnce && !alreadyPlayOnce)
        //{
        //    DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);
        //    alreadyPlayOnce = true; 
        //}else if (!playOnce)
        //{
        //    DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);
        //}
    }





    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            if(triggerState == TriggerState.OnEnterTrigger) //Play director when on enter trigger
                PlayDirectorTimeline();
        }
    }

}
