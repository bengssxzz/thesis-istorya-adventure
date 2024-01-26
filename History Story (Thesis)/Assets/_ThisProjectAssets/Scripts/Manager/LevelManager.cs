using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;
using MoreMountains.Tools;



public class LevelManager : Singleton<LevelManager>
{

    [SerializeField] private string questionChapter = "Chapter 1";


    public PlayerScript player { get; private set; }
    public PlayableDirector currentDirector { get; private set; }
    public string GetQuestionChapter { get { return questionChapter; } }





    protected override void Awake()
    {
        base.Awake();

        player = GameObject.FindObjectOfType<PlayerScript>();
    }























}
