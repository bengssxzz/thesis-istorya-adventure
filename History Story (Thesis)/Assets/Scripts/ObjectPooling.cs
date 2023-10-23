using System.Collections;
using System.Collections.Generic;
using UnityEngine;




public class ObjectPooling : MonoBehaviour
{
    public enum TagPooling
    {
        Enemy,
        Bullet,
        Clone
    }
    [System.Serializable] public class PoolLayer
    {
        public TagPooling tagLayer;
        public Transform poolContainer;
    }
    


    public static ObjectPooling instance;
    public PoolLayer[] poolLayer;

    private Dictionary<string, GameObject> poolObjects = new Dictionary<string, GameObject>();

    private void Awake()
    {
        //Instance
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else { DestroyImmediate(gameObject); }

    }

    public GameObject CreateObject(TagPooling tagLayer, GameObject prefabObject)
    {
        foreach (var item in poolLayer)
        {
            if (item.tagLayer == tagLayer)
            {
                //Get object in this layer tag
                foreach (Transform itemTag in item.poolContainer)
                {
                    if (!itemTag.gameObject.activeInHierarchy && itemTag.name == prefabObject.name)
                    {
                        itemTag.gameObject.SetActive(true);
                        return itemTag.gameObject;
                    }
                }

                var newObject = Instantiate(prefabObject);
                newObject.transform.SetParent(item.poolContainer);
                newObject.name = prefabObject.name;
                
                return newObject;
            }
            else { Debug.LogWarning("Tag layer is missing"); }
        }

        return null;
    }


}
