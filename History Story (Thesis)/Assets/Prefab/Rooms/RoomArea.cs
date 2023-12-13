using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class RoomArea : MonoBehaviour
{
    private CinemachineVirtualCamera roomCamera;


    private void Awake()
    {
        roomCamera = GetComponentInChildren<CinemachineVirtualCamera>(true);
    }
    private void Start()
    {
        roomCamera.gameObject.SetActive(false);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            roomCamera.gameObject.SetActive(true);
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            roomCamera.gameObject.SetActive(false);
        }
    }






}
