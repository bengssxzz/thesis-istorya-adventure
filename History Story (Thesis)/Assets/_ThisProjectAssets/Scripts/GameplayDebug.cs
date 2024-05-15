using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Cysharp.Threading.Tasks;

public class GameplayDebug : MonoBehaviour
{
    [SerializeField] private bool showDebug = true;


    [SerializeField] private TextMeshProUGUI timeScaleText;
    [SerializeField] private TextMeshProUGUI fpsDisplayText;

    private float timer, refresh, avgFrameRate;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        ShowDebugUI(showDebug);

        if (showDebug)
        {
            timeScaleText.text = $"TimeScale: {Time.timeScale}";
            fpsDisplayText.text = $"FPS: {UpdateFPSDisplay()}";
        }

    }

    private void ShowDebugUI(bool show)
    {
        timeScaleText.gameObject.SetActive(show);
        fpsDisplayText.gameObject.SetActive(show);
    }

    private float UpdateFPSDisplay()
    {
        float timeLapse = Time.unscaledDeltaTime;
        timer = timer <= 0 ? refresh : timer -= timeLapse;

        if (timer <= 0)
            avgFrameRate = (int)(1f / timeLapse);

        return avgFrameRate;
    }







}
