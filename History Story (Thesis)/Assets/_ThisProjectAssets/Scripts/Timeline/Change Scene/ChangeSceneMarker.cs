using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;
using UnityEngine.Playables;


public enum SceneLoadingMethod
{
    LoadingToGameScene,
    LoadingToMenu
}

public class ChangeSceneMarker : Marker, INotification, INotificationOptionProvider
{

    [Tooltip("No need to add details if 'LoadingToMenu', this method will direct to the main menu scene.")]
    public SceneLoadingMethod loadingMethod = SceneLoadingMethod.LoadingToGameScene;

    [Header("For LoadingToGameScene")]
    public string sceneName;
    public string transitionID;



    [Space(10)]
    [SerializeField] private bool retroactive = false;
    [SerializeField] private bool emitOnce = false;


    public PropertyName id => new PropertyName();

    public NotificationFlags flags => (retroactive ? NotificationFlags.Retroactive : default) | (emitOnce ? NotificationFlags.TriggerOnce : default);
}
