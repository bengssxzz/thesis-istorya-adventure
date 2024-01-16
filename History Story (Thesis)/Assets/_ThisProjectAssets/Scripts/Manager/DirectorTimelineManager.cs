using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;


public class DirectorTimelineManager : Singleton<DirectorTimelineManager> 
{
    private PlayableDirector currentTimeline;


    protected override void Awake()
    {
        base.Awake();

        currentTimeline = GetComponent<PlayableDirector>();
    }

    public void ChangeCurrentTimeline(PlayableDirector director)
    {
        currentTimeline = director;
        currentTimeline.Play();
    }
    public void PauseTimeline()
    {
        //Pause the current timeline
        currentTimeline.Pause();
    }
    public void ContinueTimeline()
    {
        //Continue the current timeline
        currentTimeline.Resume();
    }



}
