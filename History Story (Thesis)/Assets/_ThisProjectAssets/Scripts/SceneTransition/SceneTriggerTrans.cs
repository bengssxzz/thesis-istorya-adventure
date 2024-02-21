using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;



[RequireComponent(typeof(Collider2D))]
public class SceneTriggerTrans : MonoBehaviour
{
    private enum TransitionState { None, OnTrigger}

    [Header("Transition Info")]
    [SerializeField] private TransitionState state = TransitionState.OnTrigger;
    [SerializeField] private string transitionID;
    [SerializeField] private string sceneName;

    [SerializeField] private Transform positionOut;

    [Header("Indicator Info")]
    [SerializeField] private bool showIndicator = true;
    [SerializeField] private MMF_Player arrowIndicatorFeedback;
    [SerializeField] private float indicatorShowRange = 0.5f;
    [SerializeField] private Vector2 offsetIndicatorPosition;
   
    public string GetTransitionID { get { return transitionID; } }
    public Transform GetPositionOut { get { return positionOut; } }


    private void Start()
    {
        arrowIndicatorFeedback.gameObject.SetActive(false);
    }

    private void LateUpdate()
    {
        if (!showIndicator) {
            arrowIndicatorFeedback.gameObject.SetActive(false);
            return; }

        if (PlayerSingleton.Instance.GetPlayerScript != null)
        {
            Transform playerTransform = PlayerSingleton.Instance.GetPlayerScript.transform;

            if (Vector2.Distance(transform.position + (Vector3)offsetIndicatorPosition, playerTransform.transform.position) < indicatorShowRange)
            {
                //Show indicator when the player is inside
                arrowIndicatorFeedback.gameObject.SetActive(true);
            }else
                arrowIndicatorFeedback.gameObject.SetActive(false);
        }
    }

    public void ForceGoToScene() //Force to go to another scene with unity events
    {
        SceneTransitionManager.Instance.SceneTransitionInGame(sceneName, transitionID);
    }



    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            if (state == TransitionState.OnTrigger)
            {
                //LevelManager.Instance.SaveSceneLevel(); //Save the scene
                SaveGameDataManager.Instance.SaveChapterScene().Forget(); //Save the changes in the level scene
                SceneTransitionManager.Instance.SceneTransitionInGame(sceneName, transitionID); //Change scene
            }
        }
    }




    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position + (Vector3)offsetIndicatorPosition, indicatorShowRange);
    }












}
