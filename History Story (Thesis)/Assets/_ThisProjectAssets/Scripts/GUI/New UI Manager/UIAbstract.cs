using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class UIAbstract : MonoBehaviour
{
    [SerializeField] protected string activateIDListener;
    [SerializeField] protected string uiID;

    [SerializeField] protected bool onStartActive;
    [SerializeField] protected bool isGlobalUI = false;

    public string GetUI_ID { get { return uiID; } }
    public string GetActivationIDListener { get { return activateIDListener; } }

    public bool IsOnStartMenu { get { return onStartActive; } }
    public bool IsGlobalMenu { get { return isGlobalUI; } }


    private void OnValidate()
    {
#if UNITY_EDITOR
        uiID = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }

    protected virtual void Start()
    {
        
    }


    public abstract void EnablePage(); //Open the page
    public abstract void DisablePage(); //Close the page


}
