using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MazeMovement : MonoBehaviour {

    public float sensitivity = 1f;
    public Vector3 rotationLimits;
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
        //Applying the max rotation
        if (rotation.x > 0)
        {
            if (rotation.x > rotationLimits.x)
                rotation.x = rotationLimits.x;
        }
        else
        {
            if (rotation.x < -1 * rotationLimits.x)
                rotation.x = -1 * rotationLimits.x;
        }

        if (rotation.z > 0)
        {
            if (rotation.z > rotationLimits.z)
                rotation.z = rotationLimits.z;
        }
        else
        {
            if (rotation.z < -1 * rotationLimits.z)
                rotation.z = -1 * rotationLimits.z;
        }
        //Applying the rotation
        transform.rotation = Quaternion.Euler(rotation);
    }
}
