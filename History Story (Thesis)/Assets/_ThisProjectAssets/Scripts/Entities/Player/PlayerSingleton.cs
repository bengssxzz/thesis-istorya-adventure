using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSingleton : Singleton<PlayerSingleton>
{

    private PlayerScript playerScript;
    public PlayerScript GetPlayerScript { get { return playerScript; } }


    protected override void Awake()
    {
        base.Awake();
        playerScript = GetComponent<PlayerScript>();
    }
    private void Start()
    {

    }
}
