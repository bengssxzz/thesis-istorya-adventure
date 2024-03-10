using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetActorVisual : MonoBehaviour
{
    [SerializeField] private Transform visual;

    private void OnDisable()
    {
        visual.rotation = Quaternion.identity;
        visual.localScale = Vector3.one;
    }









}
