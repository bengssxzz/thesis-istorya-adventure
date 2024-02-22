using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using MoreMountains.Tools;
using System;



public enum MobileInteractButtonState { Drop, Pickup, Speak }

public class MobileInteractButton : MonoBehaviour
{
    public event Action OnPressReleasedInteract;

    private MobileInteractButtonState interactState;

    private MMTouchButton interactButton;

    [SerializeField] private Image interactImage;

    [SerializeField] private Sprite dropImage;
    [SerializeField] private Sprite pickUpImage;
    [SerializeField] private Sprite speakImage;


    private void Awake()
    {
        interactButton = GetComponent<MMTouchButton>();
    }

    private void OnEnable()
    {
        interactButton.ButtonReleased.AddListener(OnRelease);
    }
    private void OnDisable()
    {
        interactButton.ButtonReleased.RemoveListener(OnRelease);
    }

    private void LateUpdate()
    {
        switch (interactState)
        {
            case MobileInteractButtonState.Drop:
                interactImage.sprite = dropImage;
                break;
            case MobileInteractButtonState.Pickup:
                interactImage.sprite = pickUpImage;
                break;
            case MobileInteractButtonState.Speak:
                interactImage.sprite = speakImage;
                break;
        }
    }

    private void OnRelease() => OnPressReleasedInteract?.Invoke();


    public void UpdateInteractImage(MobileInteractButtonState state)
    {
        interactState = state;

        //switch (state)
        //{
        //    case MobileInteractButtonState.Drop:
        //        interactImage.sprite = dropImage;
        //        break;
        //    case MobileInteractButtonState.Pickup:
        //        interactImage.sprite = pickUpImage;
        //        break;
        //    case MobileInteractButtonState.Speak:
        //        interactImage.sprite = speakImage;
        //        break;
        //}
    }





}
