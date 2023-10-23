using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpPoints : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        Debug.Log(other.name);
        gameObject.SetActive(false);
    }

    private void RandomPoints(){
        var points = Random.Range(0.5f, 5f);
    }

}
