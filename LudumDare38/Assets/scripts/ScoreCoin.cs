using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreCoin : MonoBehaviour {

	private Rigidbody rigidbody;

	// Use this for initialization
	void Start () {
		rigidbody = transform.GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		rigidbody.velocity = Vector3.zero;
		rigidbody.AddForce (-GameController.instance.table.transform.up);
	}
}
