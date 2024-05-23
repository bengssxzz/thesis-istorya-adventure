using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;




public class ObjectPoolingManager : Singleton<ObjectPoolingManager>
{
    [Serializable]
    public class PoolerInfo
    {
        public ObjectPoolerInfo poolerInfo;

        public int createPool = 10;
        public bool canExpand;
    }


    [SerializeField] private List<PoolerInfo> objectPoolInfoList = new List<PoolerInfo>();

    private Dictionary<string, Queue<GameObject>> objectPoolDict = new Dictionary<string, Queue<GameObject>>();



    protected override void Awake()
    {
        base.Awake();

        
    }
    private void OnEnable()
    {
        
    }
    private void Start()
    {
        InitializePoolObject();
        //ObjectPoolerInfo test = new GameObject().AddComponent<ObjectPoolerInfo>();
        //test.SetPoolID = "_testing";
        //test.GetObjectPool = test.gameObject;
        //CreateNewPool(test, 20, false);


        //DebugQueue();
    }

    private void DebugQueue()
    {
        foreach (var pool in objectPoolDict)
        {
            Debug.Log($"POOL: {pool.Key} || COUNT: {pool.Value.Count}");

            foreach (var item in pool.Value)
            {
                Debug.Log($"ITEM NAME: {item.name} FROM POOL: {pool.Key}");   
            }
        }
    }
    private void InitializePoolObject()
    {
        foreach (var pool in objectPoolInfoList.ToList())
        {
            if(pool.poolerInfo == null || objectPoolDict.ContainsKey(pool.poolerInfo.GetPoolID)) { continue; }

            pool.poolerInfo.InitializePoolerInfo();
            objectPoolDict.Add(pool.poolerInfo.GetPoolID, new Queue<GameObject>());

            for (int i = 0; i < pool.createPool; i++)
            {
                CreateNewItem(pool.poolerInfo);
            }
        }
    }
    private GameObject CreateNewItem(ObjectPoolerInfo poolInfo)
    {
        GameObject newGameObjectAdd;

        var newObject = Instantiate(poolInfo.GetObjectPool);
        newObject.SetActive(false);
        newObject.transform.position = Vector3.zero;
        newObject.transform.SetParent(transform);

        if(newObject.GetComponent<ObjectPoolerInfo>() != null)
        {
            newObject.GetComponent<ObjectPoolerInfo>().SetDoneSerializeItem = true;

            newGameObjectAdd = newObject;
        }
        else
        {
            var added = newObject.AddComponent<ObjectPoolerInfo>();
            added.SetPoolID = poolInfo.GetPoolID;
            added.GetObjectPool = poolInfo.GetObjectPool;
            added.SetDoneSerializeItem = true;

            newGameObjectAdd = added.gameObject;
        }

        objectPoolDict[poolInfo.GetPoolID].Enqueue(newGameObjectAdd);


        return newGameObjectAdd;
    }
    private GameObject CreateNewItem(string poolInfoTag, GameObject defaultObject)
    {
        GameObject newGameObjectAdd;

        var newObject = Instantiate(defaultObject);
        newObject.SetActive(false);
        newObject.transform.position = Vector3.zero;
        newObject.transform.SetParent(transform);

        if (newObject.GetComponent<ObjectPoolerInfo>() != null)
        {
            newObject.GetComponent<ObjectPoolerInfo>().SetDoneSerializeItem = true;

            newGameObjectAdd = newObject;
        }
        else
        {
            var added = newObject.AddComponent<ObjectPoolerInfo>();
            added.SetPoolID = poolInfoTag;
            added.GetObjectPool = defaultObject;
            added.SetDoneSerializeItem = true;

            newGameObjectAdd = added.gameObject;
        }

        objectPoolDict[poolInfoTag].Enqueue(newGameObjectAdd);


        return newGameObjectAdd;
    }

    public void CreateNewPool(ObjectPoolerInfo poolInfo, int _poolCount, bool _canExpand)
    {
        if (objectPoolDict.ContainsKey(poolInfo.GetPoolID))
        {
            //Pool is already exist
            var itemCount = objectPoolDict[poolInfo.GetPoolID].Count;

            if (itemCount < _poolCount)
            {
                var preferredCount = _poolCount - itemCount;

                for (int i = 0; i < preferredCount; i++)
                {
                    CreateNewItem(poolInfo);
                }
            }
        }
        else
        {
            objectPoolDict.Add(poolInfo.GetPoolID, new Queue<GameObject>());

            //Create a new pool
            var newPooler = new PoolerInfo();
            newPooler.poolerInfo = CreateNewItem(poolInfo).GetComponent<ObjectPoolerInfo>();
            newPooler.createPool = _poolCount;
            newPooler.canExpand = _canExpand;

            objectPoolInfoList.Add(newPooler);



            for (int i = 0; i < _poolCount; i++)
            {
                CreateNewItem(poolInfo);

                //var newObject = Instantiate(_poolObject);
                //newObject.SetActive(false);
                //newObject.transform.SetParent(transform);

                //objectPoolDict[_tag].Enqueue(newObject);
            }


            Debug.Log($"NEW POOL: {poolInfo.GetPoolID} || COUNT: {objectPoolDict[poolInfo.GetPoolID].Count}");
            foreach (var item in objectPoolDict[poolInfo.GetPoolID])
            {

                Debug.Log($"NEW ITEM: {item.name} IN POOL {objectPoolDict[poolInfo.GetPoolID]}");
            }
        }

    }
    public void CreateNewPool(string poolInfoTag, GameObject defaultObject, int _poolCount = 5, bool _canExpand = false)
    {
        if (objectPoolDict.ContainsKey(poolInfoTag))
        {
            //Pool is already exist
            var itemCount = objectPoolDict[poolInfoTag].Count;

            if (itemCount < _poolCount)
            {
                var preferredCount = _poolCount - itemCount;

                for (int i = 0; i < preferredCount; i++)
                {
                    CreateNewItem(poolInfoTag, defaultObject);
                }
            }
        }
        else
        {
            objectPoolDict.Add(poolInfoTag, new Queue<GameObject>());

            //Create a new pool
            var newPooler = new PoolerInfo();
            newPooler.poolerInfo = CreateNewItem(poolInfoTag, defaultObject).GetComponent<ObjectPoolerInfo>();
            newPooler.createPool = _poolCount;
            newPooler.canExpand = _canExpand;

            objectPoolInfoList.Add(newPooler);



            for (int i = 0; i < _poolCount; i++)
            {
                CreateNewItem(poolInfoTag, defaultObject);
            }


            Debug.Log($"NEW POOL: {poolInfoTag} || COUNT: {objectPoolDict[poolInfoTag].Count}");
            foreach (var item in objectPoolDict[poolInfoTag])
            {

                Debug.Log($"NEW ITEM: {item.name} IN POOL {objectPoolDict[poolInfoTag]}");
            }
        }
    }

    public GameObject GetItemFromPool(ObjectPoolerInfo poolInfo)
    {
        Queue<GameObject> _pool;

        if (!objectPoolDict.TryGetValue(poolInfo.GetPoolID, out _pool))
        {
            Debug.LogError($"The pool with ID '{poolInfo.GetPoolID}' does not exist.");
            return null;
        }


        var poolInfoEntry = objectPoolInfoList.FirstOrDefault(info => info.poolerInfo.GetPoolID == poolInfo.GetPoolID);
        if (poolInfoEntry == null)
        {
            Debug.LogError($"The pool with ID '{poolInfo.GetPoolID}' is not registered in the pooling manager.");
            return null;
        }


        if (_pool.TryDequeue(out GameObject item))
        {
            //Debug.Log($"Dequeued item '{item.name}' from pool '{poolInfo.GetPoolID}'.");
            if (item.activeInHierarchy) { item.SetActive(false); }
            return item;
        }
        else
        {
            if (poolInfoEntry.canExpand)
            {
                Debug.LogWarning($"The pool '{poolInfo.GetPoolID}' is empty, creating a new item.");
                CreateNewItem(poolInfo);

                return _pool.Dequeue();
            }

            Debug.LogWarning($"The pool '{poolInfo.GetPoolID}' is empty and not expandable.");
            return null;
        }
    }
    public GameObject GetItemFromPool(string poolInfoTag, GameObject defaultObject, int _poolCount = 5, bool _canExpand = false)
    {
        Queue<GameObject> _pool;

        if (!objectPoolDict.ContainsKey(poolInfoTag))
        {
            //Create new pool
            var newInfo = new ObjectPoolerInfo();
            newInfo.SetPoolID = poolInfoTag;
            newInfo.GetObjectPool = defaultObject;

            CreateNewPool(newInfo, _poolCount, _canExpand);
        }

        if (!objectPoolDict.TryGetValue(poolInfoTag, out _pool))
        {
            Debug.LogError($"The pool with ID '{poolInfoTag}' does not exist.");
            return null;
        }


        var poolInfoEntry = objectPoolInfoList.FirstOrDefault(info => info.poolerInfo.GetPoolID == poolInfoTag);
        if (poolInfoEntry == null)
        {
            Debug.LogError($"The pool with ID '{poolInfoTag}' is not registered in the pooling manager.");
            return null;
        }


        if (_pool.TryDequeue(out GameObject item))
        {
            //Debug.Log($"Dequeued item '{item.name}' from pool '{poolInfo.GetPoolID}'.");
            if (item.activeInHierarchy) { item.SetActive(false); }
            return item;
        }
        else
        {
            if (poolInfoEntry.canExpand)
            {
                Debug.LogWarning($"The pool '{poolInfoTag}' is empty, creating a new item.");
                var newInfo = new ObjectPoolerInfo();
                newInfo.SetPoolID = poolInfoTag;
                newInfo.GetObjectPool = defaultObject;

                CreateNewItem(newInfo);

                return _pool.Dequeue();
            }

            Debug.LogWarning($"The pool '{poolInfoTag}' is empty and not expandable.");
            return null;
        }
    }


    public void ReturnItemToPool_OnEnable(ObjectPoolerInfo poolInfo)
    {
        //Add the object when onenable. This is for non-expandable pool

        if (objectPoolDict.ContainsKey(poolInfo.GetPoolID))
        {
            var getInfo = objectPoolInfoList.FirstOrDefault(info => info.poolerInfo.GetPoolID == poolInfo.GetPoolID);

            if (getInfo != null)
            {
                if (getInfo.canExpand == false)
                {
                    //When the object enable ObjectPoolerInfo add it in the queue
                    //Debug.Log("(NON EXPANDABLE) ADD TO QUEUE: " + objectPoolDict[poolInfo.GetPoolID].Count);
                    objectPoolDict[poolInfo.GetPoolID].Enqueue(poolInfo.GetObjectPool);
                }
            }
            else
            {
                //Doest exist in the list
                Debug.LogError($"{poolInfo.GetPoolID} ID DOES NOT YET REGISTER IN THE POOLING MANAGER");
            }
        }
        else
        {
            //Doent exist
            Debug.LogError($"YOU ARE ENQUEUING NON EXPANDABLE {poolInfo.GetPoolID} ID TO THE POOL THAT DOENT EXIST");
        }
    }
    public void ReturnItemToPool_OnDisable(ObjectPoolerInfo poolInfo) //For expandable pooler
    {
        //Add the object when ondisable. This is for expandable pool

        if (objectPoolDict.ContainsKey(poolInfo.GetPoolID))
        {
            var getInfo = objectPoolInfoList.FirstOrDefault(info => info.poolerInfo.GetPoolID == poolInfo.GetPoolID);

            if (getInfo != null)
            {
                if (getInfo.canExpand == true)
                {
                    //Wait ObjectPoolerInfo to be disabled before add it in the queue
                    objectPoolDict[poolInfo.GetPoolID].Enqueue(poolInfo.GetObjectPool);
                    poolInfo.transform.position = Vector3.zero;
                    //Debug.Log("(EXPANDABLE)ADD TO QUEUE: " + objectPoolDict[poolInfo.GetPoolID].Count);
                }
            }
            else
            {
                //Doest exist in the list
                Debug.LogError($"{poolInfo.GetPoolID} ID DOES NOT YET REGISTER IN THE POOLING MANAGER");
            }
        }
        else
        {
            //Doent exist
            Debug.LogError($"YOU ARE ENQUEUING EXPANDABLE {poolInfo.GetPoolID} ID TO THE POOL THAT DOENT EXIST");
        }
    }

    //public void ReturnItemToPool(ObjectPoolerInfo poolInfo)
    //{
    //    if (objectPoolDict.ContainsKey(poolInfo.GetPoolID))
    //    {
    //        var getInfo = objectPoolInfoList.FirstOrDefault(info => info.poolerInfo.GetPoolID == poolInfo.GetPoolID);

    //        if (getInfo != null)
    //        {
    //            if (getInfo.canExpand)
    //            {
    //                //In ObjectPoolerInfo execute the OnDisable
    //                poolInfo.transform.position = Vector3.zero;
    //                objectPoolDict[poolInfo.GetPoolID].Enqueue(poolInfo.GetObjectPool);
    //                poolInfo.gameObject.SetActive(false);
    //            }
    //            else
    //            {
    //                //In ObjectPoolerInfo execute the OnEnable
    //                objectPoolDict[poolInfo.GetPoolID].Enqueue(poolInfo.GetObjectPool);
    //            }
    //        }
    //        else
    //        {
    //            //Doest exist in the list
    //            Debug.LogError($"{poolInfo.GetPoolID} ID DOES NOT YET REGISTER IN THE POOLING MANAGER");
    //        }
    //    }
    //    else
    //    {
    //        //Doent exist
    //        Debug.LogError($"YOU ARE ENQUEUING {poolInfo.GetPoolID} ID TO THE POOL THAT DOENT EXIST");
    //    }
    //}

    //private void NewObjectInPool(PoolerInfo poolInfo)
    //{
    //    var newObject = Instantiate(poolInfo.poolerInfo.GetObjectToPool);
    //    newObject.SetActive(false);
    //    newObject.transform.SetParent(transform);
    //    newObject.transform.position = transform.position;

    //    poolInfo.GetObjectPool.Add(newObject);
    //}


    //public GameObject GetObjectFromPool(string pool_ID)
    //{
    //    var selectedObject = ListOfPools.FirstOrDefault(x => x.poolerInfo.GetPoolID == pool_ID);

    //    if (selectedObject != null)
    //    {
    //        //There's a gameobject in the pool
    //        foreach (var item in selectedObject.GetObjectPool)
    //        {
    //            if (item.activeSelf)
    //            {
    //                return item;
    //            }
    //            else
    //            {
    //                if (selectedObject.canExpand)
    //                {
    //                    NewObjectInPool(selectedObject);
    //                    return null;
    //                }
    //                else
    //                {
    //                    return null;
    //                }
    //            }
    //        }
    //        return null;
    //    }
    //    else
    //    {
    //        Debug.LogWarning($"YOU ARE SELECTING A {pool_ID} THAT NOT EXIST IN THE POOL");
    //        return null;
    //    }

    //}




























}



//public class ObjectPoolingManager : MonoBehaviour
//{
//    [Serializable]
//    public class PoolerInfo
//    {
//        public ObjectPoolerInfo poolerInfo;

//        public int createPool = 10;
//        public bool canExpand;

//        private List<GameObject> pool = new List<GameObject>();

//        public List<GameObject> GetObjectPool { get { return pool; } set { pool = value; } }
//    }

//    [SerializeField] private List<PoolerInfo> ListOfPools = new List<PoolerInfo>();



//    private void Start()
//    {
//        InitializePoolObject();
//    }

//    private void InitializePoolObject()
//    {
//        foreach (var pool in ListOfPools)
//        {
//            pool.GetObjectPool = new List<GameObject>();
//            for (int i = 0; i < pool.createPool; i++)
//            {
//                NewObjectInPool(pool);
//            }
//        }
//    }

//    private void NewObjectInPool(PoolerInfo poolInfo)
//    {
//        var newObject = Instantiate(poolInfo.poolerInfo.GetObjectToPool);
//        newObject.SetActive(false);
//        newObject.transform.SetParent(transform);
//        newObject.transform.position = transform.position;

//        poolInfo.GetObjectPool.Add(newObject);
//    }


//    public GameObject GetObjectFromPool(string pool_ID)
//    {
//        var selectedObject = ListOfPools.FirstOrDefault(x => x.poolerInfo.GetPoolID == pool_ID);

//        if(selectedObject != null)
//        {
//            //There's a gameobject in the pool
//            foreach (var item in selectedObject.GetObjectPool)
//            {
//                if (item.activeSelf)
//                {
//                    return item;
//                }
//                else
//                {
//                    if (selectedObject.canExpand)
//                    {
//                        NewObjectInPool(selectedObject);
//                        return null;
//                    }
//                    else
//                    {
//                        return null;
//                    }
//                }
//            }
//            return null;
//        }
//        else
//        {
//            Debug.LogWarning($"YOU ARE SELECTING A {pool_ID} THAT NOT EXIST IN THE POOL");
//            return null;
//        }

//    }




























//}
