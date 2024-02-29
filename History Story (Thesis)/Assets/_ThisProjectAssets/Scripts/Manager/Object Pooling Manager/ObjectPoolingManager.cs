using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;


public class ObjectPoolingManager : MonoBehaviour
{
    [Serializable]
    public class PoolerInfo
    {
        public ObjectPoolerInfo poolerInfo;

        public int createPool = 10;
        public bool canExpand;

        private List<GameObject> pool = new List<GameObject>();

        public List<GameObject> GetObjectPool { get { return pool; } set { pool = value; } }
    }

    [SerializeField] private List<PoolerInfo> ListOfPools = new List<PoolerInfo>();




    private void Start()
    {
        InitializePoolObject();
    }


    private void InitializePoolObject()
    {
        foreach (var pool in ListOfPools)
        {
            pool.GetObjectPool = new List<GameObject>();
            for (int i = 0; i < pool.createPool; i++)
            {
                NewObjectInPool(pool);
            }
        }
    }

    private void NewObjectInPool(PoolerInfo poolInfo)
    {
        var newObject = Instantiate(poolInfo.poolerInfo.GetObjectToPool);
        newObject.SetActive(false);
        newObject.transform.SetParent(transform);
        newObject.transform.position = transform.position;

        poolInfo.GetObjectPool.Add(newObject);
    }

    
    public GameObject GetObjectFromPool(string pool_ID)
    {
        var selectedObject = ListOfPools.FirstOrDefault(x => x.poolerInfo.GetPoolID == pool_ID);

        if(selectedObject != null)
        {
            //There's a gameobject in the pool
            foreach (var item in selectedObject.GetObjectPool)
            {
                if (item.activeSelf)
                {
                    return item;
                }
                else
                {
                    if (selectedObject.canExpand)
                    {
                        NewObjectInPool(selectedObject);
                        return null;
                    }
                    else
                    {
                        return null;
                    }
                }
            }
            return null;
        }
        else
        {
            Debug.LogWarning($"YOU ARE SELECTING A {pool_ID} THAT NOT EXIST IN THE POOL");
            return null;
        }

    }




























}
