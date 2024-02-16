using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;
using System;



public class LeaderboardView : MonoBehaviour
{
    [SerializeField] private RectTransform lockPanelView;
    [SerializeField] private LeaderboardSlotUI LB_SlotUIPrefab;
    [SerializeField] private RectTransform content;

    [SerializeField] private MMTouchButton refreshBtn;


    [Header("Account Panel")]
    [SerializeField] private TextMeshProUGUI LB_playerPosition;
    [SerializeField] private TextMeshProUGUI LB_playerName;
    [SerializeField] private TextMeshProUGUI LB_playerScore;

    private List<LeaderboardSlotUI> listOfLBSlotUI = new List<LeaderboardSlotUI>();


    private void OnEnable()
    {
        refreshBtn.ButtonReleased.AddListener(RefreshLeaderboard);
        PlayfabManager.Instance.OnUpdateLeaderboard += UpdatedLeaderboard;
    }

   

    private void OnDisable()
    {   
        refreshBtn.ButtonReleased.RemoveListener(RefreshLeaderboard);
        PlayfabManager.Instance.OnUpdateLeaderboard -= UpdatedLeaderboard;

    }

    private void Start()
    {
        UpdateLeaderboardView();
    }

    private void UpdateLeaderboardView()
    {
        var dataList = PlayfabManager.Instance.RequestLeaderboardSQLDatabase();

        for (int i = 0; i < dataList.Count; i++)
        {
            if (!string.IsNullOrEmpty(dataList[i].p_name))
            {
                var userInfo = dataList[i];

                if (listOfLBSlotUI.Count > i && listOfLBSlotUI[i] != null)
                {
                    listOfLBSlotUI[i].SetLeaderboardSlot(userInfo.id.ToString(), userInfo.p_name, userInfo.p_score.ToString());
                }
                else
                {
                    var newslotUI = Instantiate(LB_SlotUIPrefab);
                    newslotUI.SetLeaderboardSlot(userInfo.id.ToString(), userInfo.p_name, userInfo.p_score.ToString());
                    newslotUI.transform.SetParent(content);

                    listOfLBSlotUI.Add(newslotUI);

                }
                
            }
        }
    }
    private void RefreshLeaderboard()
    {
        PlayfabManager.Instance.UpdateLeaderboard().Forget();
    }
    private void UpdatedLeaderboard() //When the update is success
    {
        UpdateLeaderboardView();
    }













}
