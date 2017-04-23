using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShooting : MonoBehaviour {

    public GameObject bullet;
    public float shootingSpeed;


    private void Awake()
    {
        Invoke("Shoot", 1 / shootingSpeed);
    }

    void Shoot()
    {
        Instantiate(bullet, transform.position, transform.rotation);
        Invoke("Shoot", 1 / shootingSpeed);
    }

}
