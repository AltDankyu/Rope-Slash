using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TigerManager : MonoBehaviour
{
    [SerializeField] private GameManagerAd4 gameManager;
    [SerializeField] private Animator animator;
    [SerializeField] private GameObject hitFx;
    [SerializeField] private GameObject bloodFx;
    [SerializeField] private float bloodFxScale;
    [SerializeField] private Transform stomach;
    [SerializeField] private float speed;
    [SerializeField] private Vector3 force;
    [SerializeField] private Vector3 torque;

    private bool isAttacking;

    public void Die()
    {
        //animator.SetBool("Die", true);
        GetComponent<Collider>().enabled = false;
        var fx = Instantiate(bloodFx, stomach.position, Quaternion.identity, stomach);
        fx.transform.localScale = fx.transform.localScale * bloodFxScale;
    }

    public void Glad()
    {
        animator.SetBool("Glad", true);
    }

    public void Attack()
    {
        animator.SetTrigger("Attack");
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Ball")
        {
            gameManager.GameEndWithSuccess();
            Instantiate(hitFx, collision.contacts[0].point, Quaternion.identity, null);

            var rb = GetComponent<Rigidbody>();
            rb.isKinematic = false;
            rb.useGravity = true;
            rb.AddForce(force);
            rb.AddTorque(torque);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Girl")
        {
            isAttacking = true;
            Attack();
            gameManager.GameEndWithFailed();
        }
    }

    private void Update()
    {
        if (isAttacking)
        {
            return;
        }

        transform.position += transform.forward * speed * Time.deltaTime;
    }
}
