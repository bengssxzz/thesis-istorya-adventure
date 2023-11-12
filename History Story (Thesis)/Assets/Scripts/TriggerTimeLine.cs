using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;


public class TriggerTimeLine : MonoBehaviour
{
    [SerializeField] private PlayableDirector timeLineDirector;

    [SerializeField] private Collider2D triggerCollider;
    [SerializeField] private bool playInTrigger;

    private void Start()
    {
        if(triggerCollider != null)
            triggerCollider.isTrigger = true;

        if (playInTrigger == true)
        {
            timeLineDirector.playOnAwake = false;
        }
    }

    public void PlayDirectorTimeline()
    {
        if(timeLineDirector == null)
        {
            Debug.LogWarning("Director timeline is missing");
            return;
        }

        timeLineDirector.Play();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(playInTrigger == false) { return; }

        if (collision.CompareTag("Player"))
        {
            PlayDirectorTimeline();
        }
    }


}
