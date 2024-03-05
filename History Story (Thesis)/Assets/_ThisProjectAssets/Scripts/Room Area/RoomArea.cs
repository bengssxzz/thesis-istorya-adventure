using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System;
using UnityEngine.Events;
using System.Linq;

public class RoomArea : MonoBehaviour
{
    
    public UnityEvent OnPlayerEnterRoom;
    public UnityEvent OnPlayerExitRoom;


    public bool isPlayerInsideRoom { get; private set; }
    public RoomSpawnerEnemy GetBattleTrigger { get; private set; }


    private void Awake()
    {
        GetBattleTrigger = GetComponentInChildren<RoomSpawnerEnemy>();



    }







    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Player enter the room
        if (collision.CompareTag("Player") && !isPlayerInsideRoom)
        {
            isPlayerInsideRoom = true;
            OnPlayerEnterRoom?.Invoke();
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        //Player exit the room
        if (collision.CompareTag("Player") && isPlayerInsideRoom)
        {
            isPlayerInsideRoom = false;
            OnPlayerExitRoom?.Invoke();
        }
    }






}
