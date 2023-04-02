using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using SupersonicWisdomSDK;


public class GameManagerAd3 : MonoBehaviour
{
    [SerializeField] private GameObject success;
    [SerializeField] private GameObject failed;
    [SerializeField] private GameObject background;

    // �Q�[���N���A���Ɏ��̃X�e�[�W�ɍs�����߂́uNEXT�v�{�^���̒ǉ��p
    [SerializeField] private GameObject nextbutton;
    [SerializeField] private GameObject retry;

    [SerializeField] private GirlManagerAd3 girlManager;
    [SerializeField] private GangManagerAd3 gangManagerLeft;
    [SerializeField] private GangManagerAd3 gangManagerRight;
    [SerializeField] private LineManager lineManager;
    [SerializeField] private RopeManager leftRopeManager;
    [SerializeField] private RopeManager rightRopeManager;
    [SerializeField] private string nextScene;

    private bool gameIsEnded;
    private bool gameEndCheckIsStarted;
    private float gameEndCheckTimer;
    private bool gameEndCheckIsDone;

    public static int currentlevel_ad3 = GameManager.currentLevel;

    public void Awake()
    {
        SupersonicWisdom.Api.NotifyLevelStarted(currentlevel_ad3, null);
    }


    private IEnumerator InvokeWithDelayCoroutine(Action action, float delay)
    {
        yield return new WaitForSeconds(delay);

        action.Invoke();
    }

    public void InvokeWithDelay(Action action, float delay)
    {
        StartCoroutine(InvokeWithDelayCoroutine(action, delay));
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

        // Complete�^�O�̑��M
        SupersonicWisdom.Api.NotifyLevelCompleted(currentlevel_ad3, null);
        // ���݂̃X�e�[�W�𑫂��B
       
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
        gangManagerLeft.GladIfGangIsAlive();
        gangManagerRight.GladIfGangIsAlive();

        // Fail�^�O�̑��M
        SupersonicWisdom.Api.NotifyLevelFailed(currentlevel_ad3, null);


    }

    public void Next()
    {
        // ������������V�[���̖��O�ɉ����āA�J�ڂ���V�[����ύX
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

    // ���g���C�{�^�����������獡����V�[���ɖ߂�X�N���v�g
    public void Retry()
    {
        // ������������V�[���̖��O�ɉ����āA�J�ڂ���V�[����ύX
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

        if (gameEndCheckIsStarted && !gameEndCheckIsDone)
        {
            gameEndCheckTimer -= Time.deltaTime;

            if (gameEndCheckTimer <= 0)
            {
                gameEndCheckIsDone = true;
                gangManagerLeft.ShotIfGangIsAlive();
                gangManagerRight.ShotIfGangIsAlive();
            }

            return;
        }

        //���[�v�؂������2�b�ȓ��ɓG�����ȂȂ�������e���������
        if (leftRopeManager.ropeIsBroken || rightRopeManager.ropeIsBroken && !gameEndCheckIsDone)
        {
            gameEndCheckIsStarted = true;
            gameEndCheckTimer = 2f;
        }
    }

    private void LateUpdate()
    {
        if (gangManagerLeft.isDead && gangManagerRight.isDead)
        {
            InvokeWithDelay(() => GameEndWithSuccess(), 0.3f);
        }
    }
}
