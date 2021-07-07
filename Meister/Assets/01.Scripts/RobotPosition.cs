using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotPosition : MonoBehaviour
{
    public Vector3 robotOriPos;
    public Quaternion robotOriRot;

    void Awake()
    {
        robotOriPos = transform.position;
        robotOriRot = transform.rotation;
    }

    void Update()
    {
        PosGo();
    }

    public void PosGo()
    {
        if (Vector3.Distance(transform.position, robotOriPos) <= 0.1f)
        {
            print("로봇합체!!!");

            transform.position = robotOriPos;
            transform.rotation = robotOriRot;

            GetComponent<Rigidbody>().isKinematic = true;

            //complete = true;
        }
    }
}
