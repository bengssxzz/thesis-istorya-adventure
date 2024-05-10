using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class StatsInfoSlot : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI statsHeaderText;
    [SerializeField] private TextMeshProUGUI statsValueText;

    public string GetHeaderInfoSlot { get; private set; } = "";
    public string GetValueInfoSlot { get; private set; } = "";


    public void SetInfo(string header, string value)
    {
        GetHeaderInfoSlot = header;
        GetValueInfoSlot = value;

        statsHeaderText.text = header;
        statsValueText.text = value;
    }




}
