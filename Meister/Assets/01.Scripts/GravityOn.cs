using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityOn : MonoBehaviour
{
    //public GameObject[] jangGis;
    public GameObject[] jangGi;
    public Transform[] pos;
    public bool startBtn;

    void Start()
    {
        for (int i = 0; i < pos.Length; i++)
        {
            jangGi[i].GetComponent<Position>().enabled = false;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            print("1번누름ㅋㅋㅋ");
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

        startBtn = true;

        for(int i = 0; i < pos.Length; i++)
        {
            print("됏음?");
            jangGi[i].GetComponent<Position>().enabled = true;
            jangGi[i].transform.SetPositionAndRotation(pos[i].position, pos[i].rotation);
        }
    }
}
