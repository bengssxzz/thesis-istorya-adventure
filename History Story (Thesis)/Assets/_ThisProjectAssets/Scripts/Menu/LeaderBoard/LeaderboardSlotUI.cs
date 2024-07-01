using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LeaderboardSlotUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI LB_playerPosition;
    [SerializeField] private TextMeshProUGUI LB_playerName;
    [SerializeField] private TextMeshProUGUI LB_playerTitle;
    [SerializeField] private TextMeshProUGUI LB_playerScore;




    public void SetLeaderboardSlot(string playerPosition, string playerName, string playerScore, string title)
    {
        LB_playerPosition.text = playerPosition;
        LB_playerName.text = playerName;
        LB_playerScore.text = playerScore;

        // Determine whether the title is invalid (i.e., null, empty, or whitespace) and not equal to "None"
        bool isInvalidTitle = string.IsNullOrEmpty(title) || string.IsNullOrWhiteSpace(title);

        // Determine whether the title should make the label inactive
        bool shouldMakeInactive = isInvalidTitle || title == "None";

        // Set the active state of the label
        LB_playerTitle.gameObject.SetActive(!shouldMakeInactive);

        // Set the text of the label
        LB_playerTitle.text = title;
    }











}
