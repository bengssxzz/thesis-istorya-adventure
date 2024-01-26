using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class UIAbstract : MonoBehaviour
{
    [SerializeField] protected string activeIDListener;
    [SerializeField] protected string menuID;

    


    protected virtual void Start()
    {
        
    }


    public abstract void EnablePage(); //Open the page
    public abstract void DisablePage(); //Close the page


}
