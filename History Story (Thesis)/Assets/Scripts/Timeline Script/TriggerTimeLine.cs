using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;


public class TriggerTimeLine : MonoBehaviour, IInteractable
{
    public enum TriggerState
    {
        AwakeTrigger, //On start the timeline will trigger
        InteractTrigger, //when the player interact the object
        OnEnterTrigger, //when the player enter the collider
    }

    private PlayableDirector timelineDirector;
    private Collider2D triggerCollider;

    [SerializeField] private TriggerState triggerState;
    [SerializeField] private bool playOnce = true;


    private bool isInside;


    private void Awake()
    {
        triggerCollider = GetComponent<Collider2D>();
        timelineDirector = GetComponent<PlayableDirector>();
    }

    private void Start()
    {
        TimelineTrigger(TriggerState.AwakeTrigger);
    }

    private void TimelineTrigger(TriggerState state)
    {
        if (triggerState != state) { return; }

        switch (triggerState)
        {
            case TriggerState.InteractTrigger:
                PlayDirectorTimeline();
                break;
            case TriggerState.AwakeTrigger:
                PlayDirectorTimeline();
                break;
            case TriggerState.OnEnterTrigger:
                PlayDirectorTimeline();
                break;
        }
    }

    

    public void PlayDirectorTimeline()
    {
        if (timelineDirector == null)
        {
            Debug.LogWarning("Director timeline is missing");
            return;
        }

        LevelManager.instance.SetDirector(timelineDirector);
        LevelManager.instance.PlayDirector();


        if (playOnce)
            GetComponent<TriggerTimeLine>().enabled = false; //Disable this script para di na matrigger ulit

        //timeLineDirector.Play();

    }

    public void Intereractable()
    {
        //When the player trigger this, the timeline will trigger
        if (isInside)
            TimelineTrigger(TriggerState.InteractTrigger);

    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            TimelineTrigger(TriggerState.OnEnterTrigger);
            isInside = true;
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            isInside = false;
        }
    }









    //public enum TriggerState
    //{
    //    InteractTrigger, //when the player interact the object
    //    AwakeTrigger, //On start the timeline will trigger
    //    OnEnterTrigger, //when the player enter the collider
    //    PlayerOnlyTrigger,
    //}

    //[SerializeField] private PlayableDirector timeLineDirector;

    //[SerializeField] private Collider2D triggerCollider;
    //[SerializeField] private TriggerState triggerState;


    //private bool isInside;
    //private bool alreadyTrigger = false;


    //private void Awake()
    //{
    //    timeLineDirector = GetComponent<PlayableDirector>();    
    //}

    //private void Start()
    //{
    //    TimelineTrigger(TriggerState.AwakeTrigger);

    //    if (triggerState == TriggerState.AwakeTrigger)
    //    {
    //        TriggerTimeline();
    //    }
    //}

    //private void Update()
    //{
    //    if(triggerState == TriggerState.PlayerOnlyTrigger)
    //    {
    //        if (isInside)
    //        {
    //            TriggerTimeline();
    //        }
    //    }
    //}


    //private void TimelineTrigger(TriggerState state)
    //{
    //    if(triggerState != state) { return; }

    //    switch (triggerState)
    //    {
    //        case TriggerState.InteractTrigger:
    //            PlayDirectorTimeline();
    //            break;
    //        case TriggerState.AwakeTrigger:
    //            PlayDirectorTimeline();
    //            break;
    //        case TriggerState.OnEnterTrigger:
    //            PlayDirectorTimeline();
    //            break;
    //        case TriggerState.PlayerOnlyTrigger:
    //            PlayDirectorTimeline();
    //            break;
    //        default:
    //            break;
    //    }
    //}



    //private void TriggerTimeline()
    //{
    //    switch (triggerState)
    //    {
    //        case TriggerState.AwakeTrigger:
    //            PlayDirectorTimeline();
    //            break;

    //        case TriggerState.OnEnterTrigger:
    //            if (!alreadyTrigger)
    //            {
    //                PlayDirectorTimeline();
    //                alreadyTrigger = true;
    //            }
    //            break;

    //        case TriggerState.PlayerOnlyTrigger:
    //            break;

    //        default:
    //            break;
    //    }
    //}
    //public void Intereractable()
    //{
    //    //When the player trigger this, the timeline will trigger
    //    TimelineTrigger(TriggerState.InteractTrigger);

    //    //if (triggerState != TriggerState.InteractTrigger) { return; }

    //    //Debug.Log("In");
    //    //PlayDirectorTimeline();


    //    //if (triggerState == TriggerState.PlayerOnlyTrigger)
    //    //{
    //    //    PlayDirectorTimeline();
    //    //}
    //}

    //public void OnEventTimeline()
    //{
    //    LevelManager.instance.SetDirector(timeLineDirector);
    //    LevelManager.instance.PlayDirector();
    //}

    //public void PlayDirectorTimeline()
    //{
    //    if(timeLineDirector == null)
    //    {
    //        Debug.LogWarning("Director timeline is missing");
    //        return;
    //    }

    //    LevelManager.instance.SetDirector(timeLineDirector);
    //    LevelManager.instance.PlayDirector();

    //    //timeLineDirector.Play();

    //}

    //private void OnTriggerEnter2D(Collider2D collision)
    //{
    //    if (collision.CompareTag("Player"))
    //    {
    //        TimelineTrigger(TriggerState.OnEnterTrigger);
    //        isInside = true;
    //        TriggerTimeline();
    //    }
    //}
    //private void OnTriggerExit2D(Collider2D collision)
    //{
    //    if (collision.CompareTag("Player"))
    //    {
    //        isInside = false;
    //    }
    //}


}
