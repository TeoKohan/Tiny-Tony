using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MazeMovement : MonoBehaviour {

    public float sensitivity = 1f;
    public bool cameraBasedRotation = false;
    public bool mouseBasedRotation = false;

    Vector3 rotation;
    Vector3 cameraRotation;


	void Update () {
        if(cameraBasedRotation)
            rotateBasedOnCamera();
        if (mouseBasedRotation)
            rotateBasedOnMouse();
	}

    void rotateBasedOnCamera ()
    {
        //NOT YET USED BECAUSE IT SUCKS BALLS
        //Getting the camera rotation
        cameraRotation = Camera.main.transform.eulerAngles;
        //Rotating based on the camera position
        gameObject.transform.Rotate(cameraRotation.x + (sensitivity * Input.GetAxis("Mouse X")), 0, cameraRotation.z + (sensitivity * Input.GetAxis("Mouse Y")));
    }

    void rotateBasedOnMouse()
    {
        //Making it into eulerAngles
        rotation = transform.rotation.eulerAngles;
        //Giving it values
        rotation.x += sensitivity * Input.GetAxis("Mouse Y");
        rotation.z += -sensitivity * Input.GetAxis("Mouse X");
        //Applying the rotation
        transform.rotation = Quaternion.Euler(rotation);
    }
}
