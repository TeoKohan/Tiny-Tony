using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrabMovement : MonoBehaviour {

    public Vector3 sideSpeed;
    public float switchSideDeltaTime;


    private void Awake()
    {
        Invoke("Move", switchSideDeltaTime);
    }

    void FixedUpdate()
    {
        transform.Translate (sideSpeed);
    }

    void Move()
    {
        //The sideSpeed goes in the opposite direction
        sideSpeed = (-1) * sideSpeed;
        Invoke("Move", switchSideDeltaTime);
    }

}
