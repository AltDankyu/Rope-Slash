using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BootManager : MonoBehaviour
{
    
    void Awake()
    {
        SceneManager.LoadScene("AD1");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
