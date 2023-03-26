using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GangManagerAd3 : MonoBehaviour
{
    [SerializeField] private GameManagerAd3 gameManager;
    [SerializeField] private Animator animator;
    [SerializeField] private GameObject hitFx;
    [SerializeField] private GameObject bloodFx;
    [SerializeField] private float bloodFxScale;
    [SerializeField] private Transform stomach;
    [SerializeField] private GameObject bullet;
    [SerializeField] private Transform muzzle;
    [SerializeField] private Vector3 eulerAnglesOfBullet;
    [SerializeField] private bool gunRotateOnShot;
    [SerializeField] private Vector3 gunPositionOnShot;
    [SerializeField] private Vector3 gunAngleOnShot;
    [SerializeField] private Transform gun;

    public bool isDead;

    public void ShotIfGangIsAlive()
    {
        if (isDead)
        {
            return;
        }

        Shot();
    }

    public void Die()
    {
        isDead= true;
        animator.SetBool("Die", true);
        GetComponent<Collider>().enabled = false;
        var fx = Instantiate(bloodFx, stomach.position, Quaternion.identity, stomach);
        fx.transform.localScale = fx.transform.localScale * bloodFxScale;
    }

    public void Glad()
    {
        animator.SetBool("Glad", true);
    }

    public void GladIfGangIsAlive()
    {
        if (isDead)
        {
            return;
        }

        animator.SetBool("Glad", true);
    }

    public void Shot()
    {
        animator.SetTrigger("Shot");

        Instantiate(bullet, muzzle.position, Quaternion.Euler(eulerAnglesOfBullet));

        if (gunRotateOnShot)
        {
            gun.localPosition = gunPositionOnShot;
            gun.localEulerAngles = gunAngleOnShot;
        }
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
