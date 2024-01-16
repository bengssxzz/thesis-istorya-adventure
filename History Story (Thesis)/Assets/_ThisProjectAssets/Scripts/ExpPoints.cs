using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class ExpPoints : PickableObject
{
    private int expPoints;

    private void OnEnable()
    {
        RandomPoints();
    }

    private void RandomPoints() => expPoints = Random.Range(10, 30);


    protected override void PickUpLogic(Entities entity)
    {
        gameObject.SetActive(false);
        entity.GetEntityStats.SetCurrentHealth(5);

        Debug.Log("I picked up this " + gameObject.name);
    }
}
