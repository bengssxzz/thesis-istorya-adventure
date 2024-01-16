using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSingleton : Singleton<PlayerSingleton>
{

    public PlayerScript playerScript { get; private set; }


    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);

        playerScript = GetComponent<PlayerScript>();
    }
}
