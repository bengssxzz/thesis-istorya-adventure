using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpPoints : MonoBehaviour
{
    private int expPoints;

    private void OnEnable()
    {
        RandomPoints();
    }

    private void RandomPoints() => expPoints = Random.Range(10, 30);

    void OnTriggerEnter2D(Collider2D other)
    {
        var entity = other.GetComponent<Entities>();

        if (entity != null)
        {
            gameObject.SetActive(false);
            other.GetComponent<Entities>().GetEntityStats.SetCurrentHealth(5);
        }
    }

    

}
