using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;
using System;
using PlayFab.ClientModels;

public class LeaderboardView : MonoBehaviour
{
    [SerializeField] private RectTransform lockPanelView;
    [SerializeField] private LeaderboardSlotUI LB_SlotUIPrefab;
    [SerializeField] private RectTransform content;

    [SerializeField] private MMTouchButton refreshBtn;


    [Header("User Position")]
    [SerializeField] private RectTransform LB_playerViewSection;
    [SerializeField] private TextMeshProUGUI LB_playerPosition;
    [SerializeField] private TextMeshProUGUI LB_playerName;
    [SerializeField] private TextMeshProUGUI LB_playerTitle;
    [SerializeField] private TextMeshProUGUI LB_playerScore;


    private List<LeaderboardSlotUI> listOfLBSlotUI = new List<LeaderboardSlotUI>();


    private void Awake()
    {
        DisenableLeaderboardView();
    }

    private void OnEnable()
    {
        refreshBtn.ButtonReleased.AddListener(RefreshLeaderboard);
        PlayfabManager.Instance.OnUpdateLeaderboard += UpdatedLeaderboard;

        PlayfabManager.Instance.OnLoginSuccess += LoginAccount;
        PlayfabManager.Instance.OnLogoutSuccess += LogoutAccount;
    }

   

    private void OnDisable()
    {   
        refreshBtn.ButtonReleased.RemoveListener(RefreshLeaderboard);
        PlayfabManager.Instance.OnUpdateLeaderboard -= UpdatedLeaderboard;

        PlayfabManager.Instance.OnLoginSuccess -= LoginAccount;
        PlayfabManager.Instance.OnLogoutSuccess -= LogoutAccount;
    }

   

    private void Start()
    {
        if (PlayfabManager.Instance.IsUserLogin())
        {
            PlayfabManager.Instance.UpdateLeaderboard().Forget();
            EnableLeaderboardView();
        }
        else
        {
            DisenableLeaderboardView();
        }

    }

    private async void UpdateLeaderboardView()
    {
        var dataList = await PlayfabManager.Instance.RequestLeaderboardSQLDatabase(10);

        for (int i = 0; i < dataList.Count; i++)
        {
            if (!string.IsNullOrEmpty(dataList[i].p_name))
            {
                var userInfo = dataList[i];

                if (listOfLBSlotUI.Count > i && listOfLBSlotUI[i] != null)
                {
                    listOfLBSlotUI[i].gameObject.SetActive(true);
                    listOfLBSlotUI[i].SetLeaderboardSlot(userInfo.id.ToString(), userInfo.p_name, userInfo.p_score.ToString(), userInfo.title?.ToString());
                }
                else
                {
                    var newslotUI = Instantiate(LB_SlotUIPrefab);
                    newslotUI.SetLeaderboardSlot(userInfo.id.ToString(), userInfo.p_name, userInfo.p_score.ToString(), userInfo.title?.ToString());
                    newslotUI.transform.SetParent(content);

                    listOfLBSlotUI.Add(newslotUI);

                }
                
            }
        }

       
    }
    private async void UpdatePlayerInfo_LB()
    {
        var userData = PlayfabManager.Instance.GetUserDataAccount();
        var playerInfo = await PlayfabManager.Instance.GetPlayerInfoInLeaderboard(userData.userId);

        if(playerInfo != null)
        {
            LB_playerPosition.text = playerInfo.id.ToString();
            LB_playerName.text = playerInfo.p_name;
            LB_playerTitle.text = playerInfo.title;
            LB_playerScore.text = playerInfo.p_score.ToString();

            Debug.Log("PLAYER INFO PANEL IS UPDATED");
        }
        else
        {
            LB_playerPosition.text = "";
            LB_playerName.text = "";
            LB_playerTitle.text = "";
            LB_playerScore.text = "";
        }

        // Determine whether the title is invalid (i.e., null, empty, or whitespace) and not equal to "None"
        bool isInvalidTitle = string.IsNullOrEmpty(playerInfo?.title) || string.IsNullOrWhiteSpace(playerInfo?.title);

        // Determine whether the title should make the label inactive
        bool shouldMakeInactive = isInvalidTitle || playerInfo?.title == "None";

        // Set the active state of the label
        LB_playerTitle.gameObject.SetActive(!shouldMakeInactive);
    }




    private void RefreshLeaderboard()
    {
        PlayfabManager.Instance.UpdateLeaderboard().Forget();
    }

    private void EnableLeaderboardView()
    {
        lockPanelView?.gameObject.SetActive(false);
        LB_playerViewSection?.gameObject.SetActive(true);
    }
    private void DisenableLeaderboardView()
    {
        lockPanelView?.gameObject.SetActive(true);
        LB_playerViewSection?.gameObject.SetActive(false);

        foreach (var slot in listOfLBSlotUI)
        {
            slot.gameObject.SetActive(false);
        }

    }

    //Invokes
    private void UpdatedLeaderboard() //When the update is success
    {
        UpdateLeaderboardView();
        UpdatePlayerInfo_LB();
    }

    private void LoginAccount(LoginResult obj) //Login success
    {
        PlayfabManager.Instance.UpdateLeaderboard().Forget();

        EnableLeaderboardView();
    }
    private void LogoutAccount() //Logout success
    {
        DisenableLeaderboardView();
    }













}
