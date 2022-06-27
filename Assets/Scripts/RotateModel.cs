using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateModel : MonoBehaviour
{
    float f_lastX = 0.0f;
    float f_difX = 0.08f;
    //float f_steps = 0.0f;
    int i_direction = 1;
    float swipe_rotate_speed = 0.02f;
    float auto_rotate_speed = 0.08f;
     
     // Update is called once per frame
     void Update () 
     {
        if (Input.GetMouseButtonDown(0))
        {
            f_difX = 0.0f;
        }
        else if (Input.GetMouseButton(0))
        {
            f_difX = Mathf.Abs(f_lastX - Input.GetAxis ("Mouse X"));

            if (f_lastX < Input.GetAxis ("Mouse X"))
            {
                i_direction = -1;
                transform.Rotate(Vector3.up, -f_difX);
            }

            if (f_lastX > Input.GetAxis ("Mouse X"))
            {
                i_direction = 1;
                transform.Rotate(Vector3.up, f_difX);
            }

            f_lastX = -Input.GetAxis ("Mouse X");
        }
        else 
        {
            if (f_difX > auto_rotate_speed) f_difX -= swipe_rotate_speed;
            if (f_difX < auto_rotate_speed) f_difX += swipe_rotate_speed;

            transform.Rotate(Vector3.up, f_difX * i_direction);
        }
     }
}
