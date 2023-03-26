using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    [SerializeField] private float speed;
    [SerializeField] private GameObject hitFx;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position += transform.forward * Time.deltaTime * speed;
    }

    private void OnTriggerEnter(Collider other)
    {
        var girlManager = other.GetComponent<GirlManagerAd3>();

        if (girlManager != null)
        {
            Instantiate(hitFx, other.ClosestPoint(transform.position), Quaternion.identity, null);
            girlManager.Die();
            FindObjectOfType<GameManagerAd3>().GameEndWithFailed();
            Destroy(gameObject);
        }
    }
}
