using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System;
using UnityEngine.Events;

public class RoomArea : MonoBehaviour
{
    
    public UnityEvent OnPlayerEnterRoom;
    public UnityEvent OnPlayerExitRoom;


    public bool isPlayerInsideRoom { get; private set; }
    public RoomSpawnerEnemy battleTrigger { get; private set; }


    private void Awake()
    {
        battleTrigger = GetComponentInChildren<RoomSpawnerEnemy>();
    }







    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Player enter the room
        if (collision.CompareTag("Player"))
        {
            isPlayerInsideRoom = true;
            OnPlayerEnterRoom?.Invoke();
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        //Player exit the room
        if (collision.CompareTag("Player"))
        {
            isPlayerInsideRoom = false;
            OnPlayerExitRoom?.Invoke();
        }
    }






}
