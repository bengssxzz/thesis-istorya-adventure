using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using System;
using UnityEngine.Events;
using System.Linq;
using Cysharp.Threading.Tasks;
using System.Threading;

public class RoomArea : MonoBehaviour
{
    [SerializeField] private LayerMask detectTarget;

    [Space(15)]
    public UnityEvent OnPlayerEnterRoom;
    public UnityEvent OnPlayerExitRoom;

    private PolygonCollider2D roomAreaCollider;
    private CancellationTokenSource roomCancellation;

    private bool onPendingBattle = false;
    private List<Transform> targetInRoom = new List<Transform>();


    public bool IsBattlePending { get { return onPendingBattle; } set { onPendingBattle = value; } }
    public List<Transform> GetTargetDetectedList { get { return targetInRoom; } }

    




    public bool isPlayerInsideRoom { get; private set; }
    public RoomSpawnerEnemy GetBattleTrigger { get; private set; }

    private void OnDestroy()
    {
        roomCancellation?.Dispose();
    }
    private void Awake()
    {
        GetBattleTrigger = GetComponentInChildren<RoomSpawnerEnemy>();

        roomAreaCollider = GetComponent<PolygonCollider2D>();

    }

    public async UniTaskVoid StartRoomScannerEnemies()
    {
        List<Collider2D> colliderList;


        try
        {
            while (!roomCancellation.Token.IsCancellationRequested)
            {

                colliderList = new List<Collider2D>(); // Initialize inside the loop to clear it in each iteration

                ContactFilter2D contactFilter = new ContactFilter2D();
                contactFilter.useTriggers = true;
                contactFilter.SetLayerMask(detectTarget); 

                roomAreaCollider.OverlapCollider(contactFilter, colliderList);

                // Extract the transforms from the colliders
                targetInRoom = colliderList.Select(collider => collider.transform).ToList();


                await UniTask.Yield();
            }

            roomCancellation.Token.ThrowIfCancellationRequested();

        }
        catch (OperationCanceledException)
        {
            Debug.Log("Scanning enemies in the room task was cancelled.");
            colliderList = new List<Collider2D>();
        }
        catch (ObjectDisposedException)
        {
            Debug.Log("Scanning enemies in the room task was cancelled.");
        }

    }





    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Player enter the room
        if (collision.CompareTag("Player") && !isPlayerInsideRoom)
        {
            roomCancellation?.Cancel();
            roomCancellation = new CancellationTokenSource();
            targetInRoom = new List<Transform>();


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

            roomCancellation?.Cancel();
        }
    }






}
