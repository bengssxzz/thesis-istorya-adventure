using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;


public class CameraController : Singleton<CameraController>
{
    private CinemachineVirtualCamera cameraLevelScene;

    protected override void Awake()
    {
        base.Awake();

        cameraLevelScene = GetComponent<CinemachineVirtualCamera>();
    }




    public void SetPlayerTarget()
    {

    }






}
