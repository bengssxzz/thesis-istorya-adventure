using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class AbilityScript : ScriptableObject
{
    public Sprite skillIcon;
    public string abilityName;
    public float manaCost = 0.5f;
    public float cooldownTime;
    public float activeTime;

    private bool isActivate = false;
    public bool IsActivate { get { return isActivate; } }


    public void Reset(){
        isActivate = false;
    }

    protected virtual void Activate(GameObject entity) {
        //Activate this ability
    }
    protected virtual void Deactivate(GameObject entity){
        //Deactivate this ability
    }

    public virtual IEnumerator Passive(GameObject entity){
        //Passive
        yield return new WaitForSeconds(0);
    }

    public IEnumerator StartCoolDown(){
        // var _timer = 0.0;

        // while (_timer < 2.0)
        // {
        //     _timer += Time.deltaTime;
        //     Debug.Log(_timer + " time");
        //     yield return new WaitForEndOfFrame();
        // }

        // Debug.Log("DONEEEEEEE");


        isActivate = true;
        yield return new WaitForSeconds(cooldownTime);
        isActivate = false;
    }

    public virtual IEnumerator Trigger(GameObject entity)
    {
        if (!isActivate)
        {
            //isActivate = true;
            Activate(entity);
            Debug.Log("Activating");
            yield return new WaitForSeconds(activeTime);
            Debug.Log("DeActivating");
            Deactivate(entity);
            //yield return new WaitForSeconds(cooldownTime);
            //isActivate = false;
        }
        
    }
}
