using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GangManager : MonoBehaviour
{
    [SerializeField] private GameManager gameManager;
    [SerializeField] private Animator animator;
    [SerializeField] private GameObject hitFx;
    [SerializeField] private GameObject bloodFx;
    [SerializeField] private float bloodFxScale;
    [SerializeField] private Transform stomach;

    public void Die()
    {
        animator.SetBool("Die", true);
        GetComponent<Collider>().enabled = false;
        var fx = Instantiate(bloodFx, stomach.position, Quaternion.identity, stomach);
        fx.transform.localScale = fx.transform.localScale * bloodFxScale;
    }

    public void Glad()
    {
        animator.SetBool("Glad", true);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Ball")
        {
            gameManager.GameEndWithSuccess();
            Instantiate(hitFx, collision.contacts[0].point, Quaternion.identity, null);
        }
    }
}
