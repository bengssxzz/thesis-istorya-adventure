using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Cysharp.Threading.Tasks;

public class GameplayDebug : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI timeScaleText;
    [SerializeField] private TextMeshProUGUI fpsDisplayText;

    private float fpsRate;
    private float updateTimer = 0.2f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        timeScaleText.text = $"TimeScale: {Time.timeScale}";
        fpsDisplayText.text = $"FPS: {UpdateFPSDisplay()}";
    }

    private float UpdateFPSDisplay()
    {
        float fps = 0f;
        updateTimer -= Time.deltaTime;
        if (updateTimer <= 0f)
        {
            fpsRate = 1f / Time.unscaledDeltaTime;
            fps = Mathf.Round(fpsRate);
            updateTimer = 0.2f;
        }

        return fps;
    }







}
