using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransitionManager : Singleton<SceneTransitionManager>
{

    public string transitionID { get; private set; }

    private List<SceneTriggerTrans> sceneTransitionObject = new List<SceneTriggerTrans>();

    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);

        SceneManager.sceneLoaded += OnSceneLoaded;
    }



    private void OnDestroy()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;

    }

    private void Start()
    {
        OnNewStartScene();
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        OnNewStartScene();
        Debug.Log("New scene: " + scene.name);

        //In new scene, find the object with scene trigger and find the transID
        sceneTransitionObject = GameObject.FindObjectsOfType<SceneTriggerTrans>().ToList();

        if (!string.IsNullOrEmpty(transitionID))
        {
            //If transID is not null then find that transition trigger

            Transform positionOut = null;

            foreach (SceneTriggerTrans trans in sceneTransitionObject)
            {
                if (trans.GetTransitionID == transitionID)
                {
                    positionOut = trans.GetPositionOut;
                    break;
                }
            }

            if (positionOut != null)
            {
                PlayerSingleton.Instance.playerScript.transform.position = positionOut.position;

            }
        }


    }

    private void OnNewStartScene()
    {
        sceneTransitionObject = GameObject.FindObjectsOfType<SceneTriggerTrans>().ToList();

    }

    public void GoToScene(string sceneName, string transID = null)
    {
        transitionID = transID;

        SceneManager.LoadScene(sceneName);
    }

}
