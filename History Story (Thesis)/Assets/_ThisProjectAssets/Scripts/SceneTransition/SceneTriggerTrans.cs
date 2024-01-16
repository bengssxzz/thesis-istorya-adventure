using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;


[RequireComponent(typeof(Collider2D))]
public class SceneTriggerTrans : MonoBehaviour
{
    [SerializeField] private string transitionID;
    [SerializeField] private string sceneName;

    [SerializeField] private Transform positionOut;


    [SerializeField] private MMF_Player sceneFeedback;

    public string GetTransitionID { get { return transitionID; } }
    public Transform GetPositionOut { get { return positionOut; } }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            sceneFeedback?.PlayFeedbacks();
            SceneTransitionManager.Instance.GoToScene(sceneName, transitionID);
        }
    }

}
