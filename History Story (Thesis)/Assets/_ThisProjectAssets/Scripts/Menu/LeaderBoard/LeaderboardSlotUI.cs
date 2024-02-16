using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LeaderboardSlotUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI LB_playerPosition;
    [SerializeField] private TextMeshProUGUI LB_playerName;
    [SerializeField] private TextMeshProUGUI LB_playerScore;




    public void SetLeaderboardSlot(string playerPosition, string playerName, string playerScore)
    {
        LB_playerPosition.text = playerPosition;
        LB_playerName.text = playerName;
        LB_playerScore.text = playerScore;
    }











}
