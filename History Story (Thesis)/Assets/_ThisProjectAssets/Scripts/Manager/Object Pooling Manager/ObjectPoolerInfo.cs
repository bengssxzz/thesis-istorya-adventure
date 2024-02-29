using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPoolerInfo : MonoBehaviour
{
    [SerializeField] private string pool_ID;



    public string GetPoolID { get { return pool_ID; } }
    public GameObject GetObjectToPool { get { return gameObject; } }











}
