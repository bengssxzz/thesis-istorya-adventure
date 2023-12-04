using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackController : CollectingMyEnemy
{
    [SerializeField] private Transform weaponHolder;

    [SerializeField] private float attackRange = 0.6f;
    [SerializeField] private Sprite rangeSprite;


}
