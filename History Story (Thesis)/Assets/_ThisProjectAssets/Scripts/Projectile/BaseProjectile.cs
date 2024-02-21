using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class BaseProjectile : MonoBehaviour
{
    private const float OFFSET_MAX_LIMIT = 0.5f;

    [Header("Bullet Damage")]
    [SerializeField] private float velocitySpeed = 1f;
    [SerializeField] private float rotationSpeed = 1f;

    [SerializeField] private float additionalDamage = 0f;
    [SerializeField] private float overrideCritical = 0f;

    [SerializeField] private LayerMask defaultHit;


    private List<Projectile> projectileList;
    private Rigidbody2D rb;


    private bool initialized = false;
    private float totalDamage;
    private Vector2 startPosition;
    private Vector2 direction;
    private float maxLimitDistance;
    [SerializeField] private LayerMask combineLayer;

    
    

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void OnEnable()
    {
        projectileList = new List<Projectile>(transform.GetComponentsInChildren<Projectile>(true));
    }
    private void OnDisable()
    {
        initialized = false;
        combineLayer = 0; //Clear the layermask
    }

    public void InitializeProjectile(Entities entityHost, Vector2 direction, Vector2 startingPosition, float maxDistance, LayerMask targetLayer, Color color)
    {
        this.direction = direction;
        maxLimitDistance = maxDistance;
        combineLayer = targetLayer | defaultHit;
        startPosition = startingPosition;

        transform.position = startingPosition;
        foreach (var projectile in projectileList)
        {
            projectile.InitalizationProjectile(entityHost, totalDamage, overrideCritical, combineLayer, color);
            projectile.gameObject.SetActive(true);
        }

        initialized = true;
    }

    private void Update()
    {
        if (!initialized) { return; }

        ProjectileLifetime();
    }

    private void FixedUpdate()
    {
        if (!initialized) { return; }

        ProjectileMovement();
    }


    public void OverrideProjectileSpeed(float overrideSpeed)
    {
        velocitySpeed = overrideSpeed;
    }
    public void OverrideProjectileMaxDistance(float overrideMaxDistance)
    {
        var randomLimit = ThesisUtility.RandomGetFloat(0, OFFSET_MAX_LIMIT);
        maxLimitDistance = overrideMaxDistance + randomLimit;
    }
    public void OverrideProjectileDamage(float overrideDamage, float overrideCritical)
    {
        totalDamage = overrideDamage;
        this.overrideCritical = overrideCritical;
    }


    protected virtual void ProjectileMovement() //Handle movement
    {
        // Bullet movement
        transform.Translate(direction * velocitySpeed * Time.deltaTime, Space.World);

        // Rotate the projectile based on rotationSpeed
        transform.Rotate(Vector3.forward, rotationSpeed * Time.deltaTime);
    }

    protected virtual void ProjectileLifetime() //Handle the life of the bullet
    {
        if (Vector2.Distance(startPosition, transform.position) < maxLimitDistance)
        {

        }
        else
        {
            //Out side the attack range
            ProjectileOnMaxLimit();
        }
    }
    protected virtual void ProjectileOnMaxLimit() //Projectile behaviour when outside the range
    {
        gameObject.SetActive(false);
    }





}
