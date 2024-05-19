using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class ObjectPoolerInfo : MonoBehaviour
{
    [SerializeField] private string pool_ID;

    private GameObject thisGameObject;

    private bool doneSerialize;
    //private bool waitToDisable;

    public string GetPoolID { get { return pool_ID; } }
    public string SetPoolID { set { pool_ID = value; } }
    public GameObject GetObjectPool { get { return thisGameObject; } set { thisGameObject = value; } }
    //public bool SetWaitToDisable { set { waitToDisable = value; } }
    public bool SetDoneSerializeItem { set { doneSerialize = value; } }



    private void OnValidate()
    {
#if UNITY_EDITOR
        pool_ID = this.name;
        thisGameObject = gameObject;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }
    private void Awake()
    {
        InitializePoolerInfo();
    }
    public void InitializePoolerInfo()
    {
        thisGameObject = gameObject;
    }

    private void OnEnable()
    {
        if (!doneSerialize) { return; }

        ObjectPoolingManager.Instance.ReturnItemToPool_OnEnable(this);
    }
    private void OnDisable()
    {
        if (!doneSerialize) { return; }

        ObjectPoolingManager.Instance.ReturnItemToPool_OnDisable(this);
    }








}
