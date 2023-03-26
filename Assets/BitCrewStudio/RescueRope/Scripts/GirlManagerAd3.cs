using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GirlManagerAd3 : MonoBehaviour
{
    [SerializeField] private GameManagerAd3 gameManager;
    [SerializeField] private Animator animator;
    [SerializeField] private GameObject hitFx;
    [SerializeField] private GameObject bloodFx;
    [SerializeField] private Transform stomach;

    public void Die()
    {
        animator.SetBool("Die", true);
        GetComponent<Collider>().enabled = false;
        Instantiate(bloodFx, stomach.position, Quaternion.identity, stomach);
    }

    public void Glad()
    {
        animator.SetBool("Glad", true);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Ball")
        {
            Die();
            Instantiate(hitFx, collision.contacts[0].point, Quaternion.identity, null);
        }
    }
}
