using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class HelpText : MonoBehaviour
{
    [SerializeField] private float duration;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        duration -= Time.deltaTime;

        if (duration < 0)
        {
            gameObject.SetActive(false);
        }
    }
}
