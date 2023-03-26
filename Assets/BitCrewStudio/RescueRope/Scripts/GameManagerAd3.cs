using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManagerAd3 : MonoBehaviour
{
    [SerializeField] private GameObject success;
    [SerializeField] private GameObject failed;
    [SerializeField] private GameObject background;
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
        girlManager.Glad();
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
        gangManagerLeft.GladIfGangIsAlive();
        gangManagerRight.GladIfGangIsAlive();
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

        //ƒ[ƒvØ‚Á‚½Œã‚É2•bˆÈ“à‚É“G‚ªŽ€‚È‚È‚©‚Á‚½‚çe‚ðŒ‚‚½‚ê‚é
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
