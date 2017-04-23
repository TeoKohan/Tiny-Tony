using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletBehaviour : MonoBehaviour {

    public float speed;
    //put a 1 on the desired direction
    public Vector3 direction;


    private void Awake()
    {
        Destroy(gameObject, 5f);
    }

    void FixedUpdate()
    {
        transform.Translate (direction * speed);
    }

    void OnCollisionEnter(Collision collision)
    {
        //Destroys the object that the bullet collides with
        Destroy(collision.gameObject);
        Destroy(gameObject);

    }
}
