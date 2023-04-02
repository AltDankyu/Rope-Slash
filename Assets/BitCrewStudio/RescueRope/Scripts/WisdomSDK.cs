using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using SupersonicWisdomSDK;
using UnityEngine.UI;

public class WisdomSDK : MonoBehaviour
{

    void Awake()
    {
        // Subscribe
        SupersonicWisdom.Api.AddOnReadyListener(OnSupersonicWisdomReady);
        // Then initialize
        SupersonicWisdom.Api.Initialize();
    }

    void OnSupersonicWisdomReady()
    {
        // Start your game from this point
    }
}
