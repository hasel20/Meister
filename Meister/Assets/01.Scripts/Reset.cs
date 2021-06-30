using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Reset : MonoBehaviour
{
    public GameObject[] jangGis;

    public Transform[] originPos;

    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void OnClickReset()
    {
        for(int i = 0; i < originPos.Length; i++)
        {
            jangGis[i].transform.position = originPos[i].position;
            jangGis[i].transform.rotation = originPos[i].rotation;
            jangGis[i].GetComponent<Rigidbody>().useGravity = false;
            jangGis[i].GetComponent<Rigidbody>().isKinematic = true;

        }
    }
}
