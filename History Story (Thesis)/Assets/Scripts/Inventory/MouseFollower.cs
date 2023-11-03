using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseFollower : MonoBehaviour
{
    [SerializeField] private Canvas canvas;
    [SerializeField] private Camera mainCamera;

    [SerializeField] private UISkillItem item;


    private void Awake()
    {
        canvas = transform.GetComponentInParent<Canvas>();
        mainCamera = Camera.main;
        item = GetComponentInChildren<UISkillItem>();
    }

    public void SetData(Sprite sprite)
    {
        item.SetData(sprite);
    }


    private void Update()
    {
        Vector2 position;
        RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)canvas.transform, Input.mousePosition, canvas.worldCamera, out position);
        transform.position = canvas.transform.TransformPoint(position);
    }

    public void Toggle(bool val)
    {
        gameObject.SetActive(val);
    }


}
