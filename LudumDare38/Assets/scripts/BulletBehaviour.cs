using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletBehaviour : MonoBehaviour {

    public float speed;
    //put a 1 on the desired direction
    public Vector3 direction;


    private void Awake()
    {
        Destroy(gameObject, 0.2f);
    }

    void FixedUpdate()
    {
		transform.Translate (direction * speed, Space.World);
    }

    void OnCollisionEnter(Collision collision)
    {
		Destroy (this.gameObject);
    }
}
