using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using ThesisLibrary;
using System.Linq;

public class NPCBehaviour : MonoBehaviour
{
    private enum MovementBehaviourState
    {
        Idle, RandomArea, SetLocation
    }
    private enum Loops 
    { 
        Loop, PingPong, Random
    }


    private AIPath aiPath;
    private Seeker seek;
    [SerializeField] private Transform NPCActor;
    [SerializeField] private Transform positions;


    [SerializeField] private MovementBehaviourState moveBehaviour = MovementBehaviourState.Idle;

    //For Random state
    [Header("For Random Area State")]
    [SerializeField] private LayerMask invalidPositionLayer;
    [SerializeField] private float minRandom = 1f;
    [SerializeField] private float maxRandom = 2f;

    //For SetLocation state
    [Header("For Setlocation State")]
    [SerializeField] private Loops loopState = Loops.Loop;

    [Header("NPC stats")]
    [SerializeField] private float moveSpeed;


    private Collider2D areaCollider;
    private Transform[] targetLocations;


    private void Awake()
    {
        aiPath = NPCActor.GetComponent<AIPath>();
        seek = NPCActor.GetComponent<Seeker>();

        targetLocations = positions.GetComponentsInChildren<Transform>().Skip(1).ToArray(); //To exclude the parent object
        areaCollider = positions.GetComponent<Collider2D>();
    }

    private void Start()
    {
        MovementBehaviourStates();
    }


    
    private void MovementBehaviourStates()
    {
        switch (moveBehaviour)
        {
            case MovementBehaviourState.Idle:
                aiPath.canMove = false;
                break;

            case MovementBehaviourState.RandomArea:
                StartCoroutine(RandomAreaMoveBehaviour());
                break;

            case MovementBehaviourState.SetLocation:
                switch (loopState)
                {
                    case Loops.Loop:
                        StartCoroutine(ForLoopState());
                        break;
                    case Loops.PingPong:
                        StartCoroutine(ForPingPongState());
                        break;
                    case Loops.Random:
                        StartCoroutine(ForRandomState());
                        break;
                }
                break;
        }
    }





    private IEnumerator RandomAreaMoveBehaviour()
    {
        while (true)
        {
            Vector2 randomPosition = ThesisUtility.RandomGetVector2InCollider2DArea(areaCollider, 0.02f, invalidPositionLayer);

            // Move to the selected position
            aiPath.destination = randomPosition;
            aiPath.maxSpeed = moveSpeed * Time.fixedDeltaTime;
            aiPath.canMove = true;

            aiPath.SearchPath();

            while (aiPath.pathPending || !aiPath.reachedEndOfPath) // Wait until we know for sure that the agent has calculated a path to the destination
                yield return null;

            //Reached the distination
            //Wait in the destination position
            aiPath.canMove = false;
            yield return new WaitForSeconds(ThesisUtility.RandomGetFloat(minRandom, maxRandom));

        }
    }


    #region Loop States
    private IEnumerator ForPingPongState()
    {
        int currentIndex = 0;
        bool isGoingForward = true;

        while (true)
        {
            // Move to the current target location
            aiPath.destination = targetLocations[currentIndex].position;
            aiPath.maxSpeed = moveSpeed * Time.fixedDeltaTime;

            aiPath.SearchPath();

            // Wait for some time here, for example, 1 second
            //yield return new WaitForSeconds(1f);

            while (aiPath.pathPending || !aiPath.reachedEndOfPath) // Wait until we know for sure that the agent has calculated a path to the destination
                yield return null;

            //Reached the distination


            // Update the index and direction
            if (isGoingForward)
            {
                if (currentIndex >= targetLocations.Length - 1)
                {
                    isGoingForward = false; // Change direction when reach the last object in the list
                }
                else
                {
                    currentIndex++;
                }
            }
            else
            {
                if (currentIndex <= 0)
                {
                    isGoingForward = true; // Change direction when reach the first object in the list
                }
                else
                {
                    currentIndex--;
                }
            }
        }
    }
    private IEnumerator ForLoopState()
    {
        while (true)
        {
            foreach (var locationItem in targetLocations)
            {
                // Move to the current target location
                aiPath.destination = locationItem.position;
                aiPath.maxSpeed = moveSpeed * Time.fixedDeltaTime;

                aiPath.SearchPath();

                while (aiPath.pathPending || !aiPath.reachedEndOfPath) // Wait until we know for sure that the agent has calculated a path to the destination
                    yield return null;

                //Reached the distination
            }
        }
    }
    private IEnumerator ForRandomState()
    {
        while (true)
        {
            aiPath.destination = targetLocations.RandomGetObject().position; //Get the random location in the list
            aiPath.maxSpeed = moveSpeed * Time.fixedDeltaTime;

            aiPath.SearchPath();

            while (aiPath.pathPending || !aiPath.reachedEndOfPath) // Wait until we know for sure that the agent has calculated a path to the destination
                yield return null;
        }
    }
    #endregion



























}
