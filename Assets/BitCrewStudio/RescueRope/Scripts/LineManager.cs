using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static UnityEngine.GraphicsBuffer;

public class LineManager : MonoBehaviour
{
    [SerializeField] public Vector2 startPosition;
    [SerializeField] public Vector2 endPosition;
    [SerializeField] private Transform ropeCutter;
    [SerializeField] private RectTransform rectTransform;
    [SerializeField] private Transform[] lineElements;
    [SerializeField] private GameObject scissors;

    private void DrawLine(int elementsCount)
    {
        if (elementsCount > lineElements.Length)
        {
            elementsCount = lineElements.Length;
        }

        for (var i = 0; i < lineElements.Length; i++)
        {
            lineElements[i].gameObject.SetActive(false);
        }

        lineElements[0].gameObject.SetActive(true);

        var gradationDelta = 0f;
        if (elementsCount >= 2)
        {
            gradationDelta = 1f / (elementsCount - 1);
        }

        for (var i = 1; i < elementsCount; i++)
        {
            lineElements[i].gameObject.SetActive(true);
        }

        for (var i = elementsCount - 1; i >= 1; i--)
        {
            lineElements[i].gameObject.SetActive(true);

            var image = lineElements[i].GetComponent<Image>();
            var color = image.color;
            color.a = gradationDelta;
            image.color = color;
            gradationDelta += gradationDelta;
        }
    }

    private void OnEnable()
    {
        Initialize();

        var MousePos = Vector2.zero;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            transform.parent.GetComponent<RectTransform>(),
            Input.mousePosition,
            Camera.main,
            out MousePos);
        rectTransform.anchoredPosition = new Vector2(
            MousePos.x,
            MousePos.y);
    }

    private void OnDisable()
    {
        var instantiated = Instantiate(scissors.gameObject, scissors.transform.position, scissors.transform.rotation, transform.parent);
        var component = instantiated.AddComponent<ScissorsMover>();
        component.direction = (endPosition - startPosition).normalized;
        component.distance = (endPosition - startPosition).magnitude;

        Initialize();

        ropeCutter.gameObject.SetActive(false);
    }

    public void Initialize()
    {
        //startPosition = Vector2.zero;
        //endPosition = Vector2.zero;

        for (var i = 0; i < lineElements.Length; i++)
        {
            lineElements[i].gameObject.SetActive(false);
        }
    }

    private void Update()
    {
        // Drawing Line
        var diff = endPosition - startPosition;
        var dragDelta = diff.magnitude;

        var lineLength = GetComponent<RectTransform>().rect.size.x;
        var elementSize = lineLength / lineElements.Length;

        var activeElementsCount = (int)(dragDelta / elementSize);


        var error = 5f;
        if (dragDelta > error)
        {
            DrawLine(activeElementsCount);
        }

        var direction = diff.normalized;

        transform.right = direction;


        ropeCutter.position = Camera.main.ScreenToWorldPoint(startPosition);
        ropeCutter.localEulerAngles = new Vector3(ropeCutter.localEulerAngles.x, ropeCutter.localEulerAngles.y, transform.localEulerAngles.z);
        var scale = ropeCutter.transform.localScale;
        ropeCutter.gameObject.SetActive(true);
    }
}
