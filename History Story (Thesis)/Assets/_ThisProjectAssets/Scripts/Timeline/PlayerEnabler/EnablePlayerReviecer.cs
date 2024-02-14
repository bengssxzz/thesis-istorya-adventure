using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;
using System;
using MoreMountains.Tools;



public class EnablePlayerReviecer : MonoBehaviour, INotificationReceiver
{
    private PlayerScript player;
    private bool enablePlayer;

    private void OnEnable()
    {
        player = PlayerSingleton.Instance.GetPlayerScript;
    }
    private void OnDisable()
    {
        
    }


    public void OnNotify(Playable origin, INotification notification, object context)
    {
        Debug.Log(notification);
        if (notification is EnablePlayerMarker marker)
        {
            enablePlayer = marker.enablePlayer;

            player.SetPlayerVisual(enablePlayer);
        }
    }
}
