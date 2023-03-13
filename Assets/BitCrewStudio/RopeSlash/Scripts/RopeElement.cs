using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RopeElement : MonoBehaviour
{
    [SerializeField] public Transform startPoint;
    [SerializeField] public Transform endPoint;
    [SerializeField] private GameObject ropeCutEffect;

    private void OnTriggerEnter(Collider other)
    {
        var cutCollider = other.GetComponent<CutCollider>();

        if (cutCollider == null)
        {
            return;
        }

    }

    public void Cut()
    {
        Instantiate(ropeCutEffect, transform.position, Quaternion.identity, null);
        Destroy(endPoint.GetComponent<HingeJoint>());
        Destroy(gameObject);
    }


    // Start is called before the first frame update
    void Start()
    {
        
    }

    [ExecuteAlways]
    // Update is called once per frame
    void Update()
    {
        var distance = endPoint.position - startPoint.position;
        transform.position = startPoint.position + distance / 2;

        transform.up = endPoint.position - startPoint.position;

        var scale = transform.localScale;
        transform.localScale = new Vector3(scale.x, Vector3.Distance(startPoint.position, endPoint.position) / 2, scale.z);
    }
}
