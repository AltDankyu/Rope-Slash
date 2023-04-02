using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using SupersonicWisdomSDK;

public class GameManager : MonoBehaviour
{
    [SerializeField] private GameObject success;
    [SerializeField] private GameObject failed;
    [SerializeField] private GameObject background;

    // ゲームクリア時に次のステージに行くための「NEXT」ボタンの追加用
    [SerializeField] private GameObject nextbutton;

    [SerializeField] private GameObject retry;

    [SerializeField] private GirlManager girlManager;
    [SerializeField] private GangManager gangManager;
    [SerializeField] private LineManager lineManager;
    [SerializeField] private string nextScene;

    private bool gameIsEnded;


    // 現在のステージ数の読み込み
    public static int currentLevel = 1;


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


    void Start()
    {
        SupersonicWisdom.Api.NotifyLevelStarted(currentLevel, null);
        Debug.Log("現在のステージは" + currentLevel + "ステージ目です。");


    }

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
        gangManager.Die();

        // Completeタグの送信
        SupersonicWisdom.Api.NotifyLevelCompleted(currentLevel, null);
        // 現在のステージを足す。
        AddCurrentLevel();
        
    }

    public static void AddCurrentLevel()
    {
        currentLevel++;
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
        gangManager.Glad();

        // Failタグの送信
        SupersonicWisdom.Api.NotifyLevelFailed(currentLevel, null);
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
            SceneManager.LoadScene("AD1");
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
