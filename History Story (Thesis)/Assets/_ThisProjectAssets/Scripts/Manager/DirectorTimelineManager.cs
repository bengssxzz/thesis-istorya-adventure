using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using System;
using UnityEngine.Events;
using PixelCrushers.DialogueSystem;


public class DirectorTimelineManager : Singleton<DirectorTimelineManager> 
{
    public event Action OnTimelineDone;
    
    private PlayableDirector currentTimeline;




    protected override void Awake()
    {
        base.Awake();

        currentTimeline = GetComponent<PlayableDirector>();

    }

    public void ChangeCurrentTimeline(PlayableDirector director, DirectorWrapMode wrapMode)
    {
        currentTimeline = director;
        currentTimeline.extrapolationMode = wrapMode;
        currentTimeline.timeUpdateMode = DirectorUpdateMode.UnscaledGameTime;
        currentTimeline.Play();
    }

    public void PauseTimeline() //Pause the current timeline
    {
        
        currentTimeline.Pause();
    }
       
    public void ContinueTimeline()  //Continue the current timeline
    {
        currentTimeline.Resume();
    }




}
