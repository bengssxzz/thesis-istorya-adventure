using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{
    [SerializeField] private List<SteeringBehavior> steeringBehavior;
    [SerializeField] private List<Detector> detectors;
    [SerializeField] private AIData aiData;
    [SerializeField] private ContextSolver contextSolver;
    [SerializeField] private float detectionDelay = 0.05f;

    private void Start()
    {
        InvokeRepeating("PerformDectection", 0, detectionDelay);
    }

    private void PerformDectection()
    {
        foreach (Detector detector in detectors)
        {
            detector.Detect(aiData);
        }

    }

    private void FixedUpdate()
    {
        var moveSpeed = 20 * Time.deltaTime;
        var rb = GetComponent<Rigidbody2D>();

        rb.velocity = contextSolver.GetDirectionToMove(steeringBehavior, aiData) * moveSpeed;

        Debug.Log(contextSolver.GetDirectionToMove(steeringBehavior, aiData) * moveSpeed);
    }

}
