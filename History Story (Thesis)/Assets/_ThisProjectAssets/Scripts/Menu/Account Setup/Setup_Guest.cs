using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class Setup_Guest : UIPages
{
    [SerializeField] private TMP_InputField displayName;

    [SerializeField] private Button continueBtn, loginPageBtn;

    [SerializeField] private UIPages loginPage;

    public override void ShowBehavior()
    {
        continueBtn.onClick.AddListener(AnonymousContinue);
        loginPageBtn.onClick.AddListener(() => {
            this.UIDisabled();
            loginPage.UIEnabled();
        });
    }
    public override void HideBehavior()
    {
        continueBtn.onClick.RemoveListener(AnonymousContinue);
        loginPageBtn.onClick.RemoveAllListeners();

    }

    private void AnonymousContinue()
    {
        AccountManager.LoginWithDeviceId(true, () => {
            //error
        });
    }
}
