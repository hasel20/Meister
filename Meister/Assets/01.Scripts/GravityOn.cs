using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityOn : MonoBehaviour
{
    //public GameObject[] jangGis;
    public GameObject[] jangGi;
    public Transform[] pos;
    public bool startBtn;
    public static GravityOn Instance;

    void Start()
    {
        Instance = this;

        for (int i = 0; i < pos.Length; i++)
        {
            jangGi[i].GetComponent<Position>().enabled = false;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            jangGi[0].transform.position = pos[0].position;
        }
    }

    public void OnClickGravity()
    {
        //for(int i = 0; i < jangGis.Length; i++)
        //{
        //    jangGis[i].GetComponent<Rigidbody>().isKinematic = false;
        //    jangGis[i].GetComponent<Rigidbody>().useGravity = true;
        //    i++;
        //}
        //if(jangGis[].GetComponent<Rigidbody>().isKinematic = false)

        //jangGi.GetComponent<Rigidbody>().isKinematic = false;
        //jangGi.GetComponent<Rigidbody>().useGravity = true;

        
        for(int i = 0; i < pos.Length; i++)
        {
            jangGi[i].GetComponent<Position>().enabled = true;
            jangGi[i].transform.SetPositionAndRotation(pos[i].position, pos[i].rotation);
        }

        startBtn = true;

        jangGi[0].GetComponent<Position>().enabled = false;
        jangGi[1].GetComponent<Position>().enabled = false;
        jangGi[2].GetComponent<Position>().enabled = false;
        jangGi[3].GetComponent<Position>().enabled = false;
        jangGi[4].GetComponent<Position>().enabled = false;
        jangGi[5].GetComponent<Position>().enabled = false;
        jangGi[13].GetComponent<Position>().enabled = false;
        jangGi[14].GetComponent<Position>().enabled = false;


    }
}
