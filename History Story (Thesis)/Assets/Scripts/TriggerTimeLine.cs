using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;


public class TriggerTimeLine : MonoBehaviour
{
    public enum TriggerState
    {
        ManualTrigger,
        AwakeTrigger,
        ColliderTrigger,
        PlayerTrigger,
    }

    [SerializeField] private PlayableDirector timeLineDirector;

    [SerializeField] private Collider2D triggerCollider;
    [SerializeField] private TriggerState triggerState;
    
    private bool isInside;
    private bool alreadyTrigger = false;


    private void Awake()
    {
        timeLineDirector = GetComponent<PlayableDirector>();    
    }

    private void Start()
    {
        if(triggerState == TriggerState.AwakeTrigger)
        {
            TriggerTimeline();
        }
    }

    private void Update()
    {
        if(triggerState == TriggerState.PlayerTrigger)
        {
            if (isInside)
            {
                TriggerTimeline();
            }
        }
    }

    private void TriggerTimeline()
    {
        switch (triggerState)
        {
            case TriggerState.AwakeTrigger:
                PlayDirectorTimeline();
                break;

            case TriggerState.ColliderTrigger:
                if (!alreadyTrigger)
                {
                    PlayDirectorTimeline();
                    alreadyTrigger = true;
                }
                break;

            case TriggerState.PlayerTrigger:
                if (Input.GetKeyDown(KeyCode.E))
                {
                    PlayDirectorTimeline();
                }
                break;

            default:
                break;
        }
    }

    public void OnEventTimeline()
    {
        LevelManager.instance.SetDirector(timeLineDirector);
        LevelManager.instance.PlayDirector();
    }

    public void PlayDirectorTimeline()
    {
        if(timeLineDirector == null)
        {
            Debug.LogWarning("Director timeline is missing");
            return;
        }

        LevelManager.instance.SetDirector(timeLineDirector);
        LevelManager.instance.PlayDirector();

        //timeLineDirector.Play();
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            isInside = true;
            TriggerTimeline();
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
