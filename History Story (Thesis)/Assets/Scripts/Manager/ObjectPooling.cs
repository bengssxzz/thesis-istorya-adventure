using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;


public class ObjectPooling : MonoBehaviour
{
    public static ObjectPooling instance;

    private Dictionary<string, List<GameObject>> poolObjects = new Dictionary<string, List<GameObject>>();

    private void Awake()
    {
        //Instance
        if (instance == null)
        {
            instance = this;
        }
        else { DestroyImmediate(gameObject); }

    }

    public GameObject GetObjectInPool(string objectTag, GameObject prefabObject)
    {
        if (poolObjects.ContainsKey(objectTag))
        {
            // when tag is exist
            foreach (var item in poolObjects[objectTag])
            {
                if (prefabObject.name == item.name && !item.activeInHierarchy)
                {
                    // return when found one
                    item.SetActive(true);
                    return item;
                }
            }
            // create a new object when no found
            return CreateObject(objectTag, prefabObject);
        }
        else
        {
            // create a new object and a tag in dictionary
            return CreateObject(objectTag, prefabObject);
        }

        
    }

    public GameObject CreateObject(string objectTag, GameObject prefabObject)
    {
        GameObject newObject = Instantiate(prefabObject);
        newObject.transform.SetParent(gameObject.transform);
        newObject.name = prefabObject.name;

        if (poolObjects.ContainsKey(objectTag))
        {
            //If tag layer is exist then add object to a dictionary list
            poolObjects[objectTag].Add(newObject);
        }
        else
        {
            //Otherwise create a new tag
            poolObjects.Add(objectTag, new List<GameObject>() { newObject });
        }
        

        return newObject;
    }
    
}
