using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletBehaviour : MonoBehaviour {

	public float life = 1f;
    public float speed;
    //put a 1 on the desired direction
    public Vector3 direction;


    private void Start()
    {
        Destroy(gameObject, life);
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
