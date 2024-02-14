using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;

public class EnablePlayerMarker : Marker, INotification, INotificationOptionProvider
{
    public bool enablePlayer = false;








    [Space(10)]
    [SerializeField] private bool retroactive = false;
    [SerializeField] private bool emitOnce = false;


    public PropertyName id => new PropertyName();

    public NotificationFlags flags => (retroactive ? NotificationFlags.Retroactive : default) | (emitOnce ? NotificationFlags.TriggerOnce : default);
}
