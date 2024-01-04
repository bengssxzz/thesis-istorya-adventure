using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCInteractable : MonoBehaviour, IInteractable
{
    [SerializeField] private TextAsset inkyJSON;
    [SerializeField] private string choosePathString;


    private void SetState()
    {
        if (UIManager.instance.SetUIState != UIManager.GUIState.DialogMode)
        {
            UIManager.instance.SetGUIState(UIManager.GUIState.DialogMode);
        }
    }


    //TODO: Remove this, use the new InputSystem
    private void Update()
    {
        
    }

    public void CutsceneForceDialog(string path)
    {
        //TODO: Pause the current timeline

        SetState();

        DialogManager.instance.EnterDialogMode(inkyJSON, path);
        //DialogManager.instance.ContinueStory();
    }

    public void Intereractable()
    {
        Debug.Log("Player interact " + gameObject.name);
        SetState();

        //DialogManager.instance.ContinueStory();
    }



}
