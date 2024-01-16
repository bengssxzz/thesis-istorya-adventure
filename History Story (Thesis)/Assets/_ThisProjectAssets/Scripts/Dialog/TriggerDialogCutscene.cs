using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerDialogCutscene : MonoBehaviour
{
    [SerializeField] private TextAsset inkyJSON;

    private void SetState()
    {
        if (UIManager.Instance.ChangeUIState != UIManager.GUIState.DialogMode)
        {
            UIManager.Instance.ChangeUIState = UIManager.GUIState.DialogMode;
        }
    }

    public void CutsceneForceDialog(string path)
    {
        //TODO: Pause the current timeline

        SetState();

        DialogManager.Instance.EnterNewDialog(inkyJSON, path);
        //DialogManager.instance.ContinueStory();
    }



}
