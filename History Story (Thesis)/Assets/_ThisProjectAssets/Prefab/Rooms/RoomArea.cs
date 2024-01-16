using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System;

public class RoomArea : MonoBehaviour
{
    public event Action<bool> OnPlayerEnterExitRoom;
    private CinemachineVirtualCamera roomCamera;
    
    public bool isPlayerInsideRoom { get; private set; }

    private void Awake()
    {
        roomCamera = GetComponentInChildren<CinemachineVirtualCamera>(true);
    }
    private void Start()
    {
    }

    private void SetPlayerCameraFollow()
    {
        roomCamera.gameObject.SetActive(true);
        roomCamera.Follow = PlayerSingleton.Instance.transform;
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            Debug.Log("I saw Player");
            SetPlayerCameraFollow();
            OnPlayerEnterExitRoom?.Invoke(true);
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            roomCamera.gameObject.SetActive(false);
            isPlayerInsideRoom = false;
            OnPlayerEnterExitRoom?.Invoke(false) ;
        }
    }






}
