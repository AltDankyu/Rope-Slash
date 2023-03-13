using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutCollider : MonoBehaviour
{
    [SerializeField] GameObject lineElement;
    
    private Collider collider;
    private MeshRenderer meshRenderer;
    [SerializeField] private List<RopeElement> contents;

    private void OnTriggerEnter(Collider other)
    {
        var ropeElement = other.GetComponent<RopeElement>();

        if (ropeElement == null)
        {
            return;
        }

        contents.Add(ropeElement);
    }

    private void OnTriggerExit(Collider other)
    {
        var ropeElement = other.GetComponent<RopeElement>();

        if (ropeElement == null)
        {
            return;
        }

        contents.Remove(ropeElement);
    }

    private void OnDisable()
    {
        contents.ForEach(ropeElement => ropeElement.Cut());
    }

    private void OnEnable()
    {
        contents = new List<RopeElement>();
    }

    // Start is called before the first frame update
    void Start()
    {
        collider = GetComponent<Collider>();    
        meshRenderer = GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        collider.enabled = lineElement.activeSelf;
        meshRenderer.enabled = lineElement.activeSelf;
    }

}
