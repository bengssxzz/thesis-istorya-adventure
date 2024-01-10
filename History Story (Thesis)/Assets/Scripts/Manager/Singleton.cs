using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton<T> : MonoBehaviour where T: Singleton<T>
{
    public static T Instance { get; private set; }

    protected virtual void Awake()
    {
        if (Instance != null && this.gameObject != null)
            //If exist
            Destroy(this.gameObject);
        else
        {
            //If not yet exist
            Instance = (T)this;
        }

        //If this manager is not in the parent object then dont destroy
        if (!gameObject.transform.parent)
        {
            DontDestroyOnLoad(gameObject);
        }
    }


}
