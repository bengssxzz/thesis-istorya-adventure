using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VisualSpawner : MonoBehaviour
{
    private GameObject gameobjectSpawn;


    public void SetSpawn(GameObject spawn)
    {
        gameobjectSpawn = spawn;
    }

    public void ToSpawn()
    {
        //TODO: Spawn

        gameObject.SetActive(false);
    }


}
