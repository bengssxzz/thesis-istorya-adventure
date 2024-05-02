using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using System;

public class QuitMenu : MonoBehaviour
{
    [SerializeField] MMTouchButton yesBtn;
    [SerializeField] MMTouchButton noBtn;




    private void OnEnable()
    {
        yesBtn.ButtonReleased.AddListener(QuitGame);
        noBtn.ButtonReleased.AddListener(CancelQuit);
    }

   

    private void OnDisable()
    {
        yesBtn.ButtonReleased.RemoveListener(QuitGame);
        noBtn.ButtonReleased.RemoveListener(CancelQuit);
    }


    private void QuitGame()
    {
        Application.Quit();
    }
    private void CancelQuit()
    {
        UI_Manager.Instance.CloseMenu("QuitGamePage");
    }


}
