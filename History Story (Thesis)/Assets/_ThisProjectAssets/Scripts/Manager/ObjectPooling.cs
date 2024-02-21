using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;


public class ObjectPooling : Singleton<ObjectPooling>
{

    private Dictionary<string, List<GameObject>> poolObjects = new Dictionary<string, List<GameObject>>();


    public GameObject GetObjectInPool(string objectTag, GameObject prefabObject, Vector3 setPosition, bool getActiveObject = false)
    {
        GameObject requestNewObj = null;

        if (poolObjects.ContainsKey(objectTag))
        {
            // when tag is exist
            foreach (var item in poolObjects[objectTag])
            {
                bool validObject = item.activeInHierarchy == false || getActiveObject;

                if (prefabObject.name == item.name && validObject)
                {
                    // return when found one
                    item.transform.position = setPosition;
                    item.SetActive(true);
                    return item;
                }
            }
            // create a new object when no found
            requestNewObj = CreateObject(objectTag, prefabObject);
            requestNewObj.SetActive(true);

            return requestNewObj;
        }
        else
        {
            // create a new object and a tag in dictionary
            requestNewObj = CreateObject(objectTag, prefabObject);
            requestNewObj.SetActive(true);

            return requestNewObj;
        }
    }

    private GameObject CreateObject(string objectTag, GameObject prefabObject)
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
