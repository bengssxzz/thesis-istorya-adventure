using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameplayDebug : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI timeScaleText;



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        timeScaleText.text = $"TimeScale: {Time.timeScale}";
    }
}
