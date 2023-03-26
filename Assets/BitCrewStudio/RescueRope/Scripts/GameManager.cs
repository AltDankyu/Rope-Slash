using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [SerializeField] private GameObject success;
    [SerializeField] private GameObject failed;
    [SerializeField] private GameObject background;
    [SerializeField] private GirlManager girlManager;
    [SerializeField] private GangManager gangManager;
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
        gangManager.Die();
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
        gangManager.Glad();
    }

    public void Next()
    {
        SceneManager.LoadScene(nextScene);
    }

    private void Update()
    {
        if (Input.GetMouseButton(0))
        {
            if (Input.GetMouseButtonDown(0))
            {
                lineManager.startPosition = Input.mousePosition;
                lineManager.endPosition = Input.mousePosition;
            }
            else
            {
                lineManager.endPosition = Input.mousePosition;
            }

            lineManager.gameObject.SetActive(true);
        }
        else
        {
            lineManager.gameObject.SetActive(false);
        }
    }
}
