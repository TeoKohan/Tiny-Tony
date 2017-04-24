using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrabMovement : MonoBehaviour {

    public Vector3 _sideSpeed;
    public float switchSideDeltaTime;

	private Vector3 sideSpeed;
	private Animator animator;

    private void Awake()
    {
		animator = transform.GetComponent<Animator> ();
		animator.speed = 1f/switchSideDeltaTime;
		sideSpeed = _sideSpeed;
        Invoke("Move", switchSideDeltaTime);
    }

    void FixedUpdate()
    {
		transform.Translate (sideSpeed, Space.World);
    }

    void Move()
    {
        //The sideSpeed goes in the opposite direction
        sideSpeed = (-1) * sideSpeed;
        Invoke("Move", switchSideDeltaTime);
    }

}
