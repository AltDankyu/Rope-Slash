using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManagerAd4 : MonoBehaviour
{
    [SerializeField] private GameObject success;
    [SerializeField] private GameObject failed;
    [SerializeField] private GameObject background;

    // ゲームクリア時に次のステージに行くための「NEXT」ボタンの追加用
    [SerializeField] private GameObject nextbutton;
    [SerializeField] private GameObject retry;

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
        nextbutton.SetActive(true);
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
        retry.SetActive(true);
        girlManager.Die();
        tigerManager.Glad();
    }

    public void Next()
    {
        // 今自分がいるシーンの名前に応じて、遷移するシーンを変更
        if(SceneManager.GetActiveScene().name == "AD1")
        {
            SceneManager.LoadScene("AD2");
        }
        else if(SceneManager.GetActiveScene().name == "AD2")
        {
            SceneManager.LoadScene("AD3");
        }
        else if(SceneManager.GetActiveScene().name == "AD3")
        {
            SceneManager.LoadScene("AD4");
        }
        else if(SceneManager.GetActiveScene().name == "AD4")
        {
            SceneManager.LoadScene("AD1");
        }
    }

    // リトライボタンを押したら今いるシーンに戻るスクリプト
    public void Retry()
    {
        // 今自分がいるシーンの名前に応じて、遷移するシーンを変更
        if(SceneManager.GetActiveScene().name == "AD1")
        {
            SceneManager.LoadScene("AD1");
        }
        else if(SceneManager.GetActiveScene().name == "AD2")
        {
            SceneManager.LoadScene("AD2");
        }
        else if(SceneManager.GetActiveScene().name == "AD3")
        {
            SceneManager.LoadScene("AD3");
        }
        else if(SceneManager.GetActiveScene().name == "AD4")
        {
            SceneManager.LoadScene("AD4");
        }
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
