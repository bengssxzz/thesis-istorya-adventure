using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;


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

    private bool isInside;
    private bool alreadyPlayOnce = false;


    private void Awake()
    {
        timelineDirector = GetComponent<PlayableDirector>();
    }

    private void Start()
    {
        if(triggerState == TriggerState.AwakeTrigger)
            PlayDirectorTimeline();
    }



    public void PlayDirectorTimeline()
    {
        if (timelineDirector == null)
        {
            Debug.LogError("Director timeline is missing");
            return;
        }

        //Play director timeline
        DirectorTimelineManager.Instance.ChangeCurrentTimeline(timelineDirector, wrapMode);


        if (playOnce && !alreadyPlayOnce)
        {
            this.enabled = false; //Disable this script para di na matrigger ulit
            alreadyPlayOnce = true; 
        }
    }





    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            isInside = true;

            if(triggerState == TriggerState.OnEnterTrigger) //Play director when on enter trigger
                PlayDirectorTimeline();
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            isInside = false;
        }
    }



}
