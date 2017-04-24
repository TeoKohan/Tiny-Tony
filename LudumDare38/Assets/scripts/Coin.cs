using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour {

    public float rotationSpeed;

	// Update is called once per frame
	void FixedUpdate ()
    {
        rotate();
	}

    void rotate()
    {
        transform.eulerAngles += new Vector3(0, Time.deltaTime * rotationSpeed * 10, 0);
    }

	void OnEnterTrigger() {
		int player = 8;
		if (GetComponent<Collider>().gameObject.layer == player) {
//
		}
	}
}
