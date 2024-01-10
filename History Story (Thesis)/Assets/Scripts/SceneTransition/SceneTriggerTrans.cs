using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Collider2D))]
public class SceneTriggerTrans : MonoBehaviour
{
    [SerializeField] private string transitionID;
    [SerializeField] private string sceneName;

    [SerializeField] private Transform positionOut;

    public string GetTransitionID { get { return transitionID; } }
    public Transform GetPositionOut { get { return positionOut; } }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            SceneTransitionManager.Instance.GoToScene(sceneName, transitionID);
        }
    }

}
