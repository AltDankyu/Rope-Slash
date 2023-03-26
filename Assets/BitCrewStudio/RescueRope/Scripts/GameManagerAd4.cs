using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManagerAd4 : MonoBehaviour
{
    [SerializeField] private GameObject success;
    [SerializeField] private GameObject failed;
    [SerializeField] private GameObject background;
    [SerializeField] private GirlManagerAd4 girlManager;
    [SerializeField] private TigerManager tigerManager;
    [SerializeField] private LineManager lineManager;
    [SerializeField] private string nextScene;

    private bool gameIsEnded;

    public void GameEndWithSuccess()
    {
        if (gameIsEnded)
        {
            return;
        }
        else
        {
            gameIsEnded = true;
        }

        success.SetActive(true);
        failed.SetActive(false);
        background.SetActive(true);
        girlManager.Glad();
        tigerManager.Die();
    }

    public void GameEndWithFailed()
    {
        if (gameIsEnded)
        {
            return;
        }
        else
        {
            gameIsEnded = true;
        }

        success.SetActive(false);
        failed.SetActive(true);
        background.SetActive(true);
        girlManager.Die();
        tigerManager.Glad();
    }

    public void Next()
    {
        SceneManager.LoadScene(nextScene);
    }

    private void Update()
    {
        if (Input.GetMouseButton(0))
        {
            lineManager.gameObject.SetActive(true);

            if (Input.GetMouseButtonDown(0))
            {
                lineManager.startPosition = Input.mousePosition;
                lineManager.endPosition = Input.mousePosition;
            }
            else
            {
                lineManager.endPosition = Input.mousePosition;
            }
        }
        else
        {
            lineManager.gameObject.SetActive(false);
        }
    }
}
