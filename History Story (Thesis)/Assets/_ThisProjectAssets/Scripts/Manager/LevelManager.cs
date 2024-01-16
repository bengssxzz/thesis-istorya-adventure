using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;




public class LevelManager : Singleton<LevelManager>
{

    public PlayerScript player { get; private set; }

    public PlayableDirector currentDirector { get; private set; }

    [SerializeField] private string questionChapter = "Chapter 1";
    public string GetQuestionChapter { get { return questionChapter; } }


    protected override void Awake()
    {
        base.Awake();

        player = GameObject.FindObjectOfType<PlayerScript>();
    }


}
