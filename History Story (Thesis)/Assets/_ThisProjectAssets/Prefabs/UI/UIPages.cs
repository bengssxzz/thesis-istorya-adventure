using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class UIPages : MonoBehaviour
{
    public virtual void OnEnable()
    {
        ShowBehavior();
    }
    public virtual void OnDisable()
    {
        HideBehavior();
    }

    public abstract void ShowBehavior();
    public abstract void HideBehavior();


    public void UIEnabled() => gameObject.SetActive(true);
    public void UIDisabled() => gameObject.SetActive(false);


    

}
