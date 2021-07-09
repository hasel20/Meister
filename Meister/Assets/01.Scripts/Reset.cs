using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Reset : MonoBehaviour
{
    public GameObject[] jangGis;
    public Transform[] originPos;

    public GameObject[] robot;
    public Transform[] originrobotPos;

    public GameObject[] ferris;
    public Transform[] oriFePos;

    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void OnClickReset()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < originPos.Length; i++)
            {
                jangGis[i].transform.position = originPos[i].position;
                jangGis[i].transform.rotation = originPos[i].rotation;
                jangGis[i].GetComponent<Rigidbody>().useGravity = false;
                jangGis[i].GetComponent<Rigidbody>().isKinematic = true;
            }
        }
        else if(GravityOn.Instance.selectRobot)
        {
            for(int i = 0; i < originrobotPos.Length;i++)
            {
                robot[i].transform.position = originrobotPos[i].position;
                robot[i].transform.rotation = originrobotPos[i].rotation;
                robot[i].GetComponent<Rigidbody>().isKinematic = true;
            }
        }
        else if (GravityOn.Instance.selectFerris)
        {
            for (int i = 0; i < oriFePos.Length; i++)
            {
                ferris[i].transform.position = oriFePos[i].position;
                ferris[i].transform.rotation = oriFePos[i].rotation;
                ferris[i].GetComponent<Rigidbody>().isKinematic = true;
            }
        }
    }
}
