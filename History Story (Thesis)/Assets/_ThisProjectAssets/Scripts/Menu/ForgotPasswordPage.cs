using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using MoreMountains.Tools;

public class ForgotPasswordPage : MonoBehaviour
{
    [SerializeField] private TMP_InputField emailUser;
    [SerializeField] private MMTouchButton resetBtn;



    private void Awake()
    {
        resetBtn?.ButtonReleased.AddListener(() =>
        {
            PlayfabManager.Instance.AccountForgotPassword(emailUser.text);
            emailUser.text = "";
            UI_Manager.Instance.CloseMenu("ForgotPass Page");
        });
    }

    private void Update()
    {
        if (emailUser.text == "")
        {
            resetBtn.Interactable = false;
            resetBtn.DisableButton();
        }
            
        else
        {
            resetBtn.Interactable = true;
            resetBtn.EnableButton();
        }
    }

}
