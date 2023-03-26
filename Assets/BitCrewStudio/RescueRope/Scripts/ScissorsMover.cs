using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScissorsMover : MonoBehaviour
{
    private const float Speed = 100f;
    public Vector2 direction;
    public float distance;

    private void FixedUpdate()
    {
        var rectTransform = GetComponent<RectTransform>();

        rectTransform.anchoredPosition += direction * Speed;

        var movement = (direction * Speed).magnitude;

        distance -= movement;

        var error = 0.5f;

        if (distance < error)
        {
            Destroy(gameObject);
        }
    }
}
