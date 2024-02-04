using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

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

    private void Start()
    {
        if (triggerState == TriggerState.AwakeTrigger)
        {
            PlayDirectorTimeline();
        }
    }



    public void PlayDirectorTimeline()
    {
        if (timelineDirector == null)
        {
            Debug.LogError("Director timeline is missing");
            return;
        }

        //Play director timeline
        if (playOnce && !alreadyPlayOnce)
        {
            DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);
            alreadyPlayOnce = true; 
        }else if (!playOnce)
        {
            DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);
        }
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
