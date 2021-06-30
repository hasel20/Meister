using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;

public class Position : MonoBehaviour
{
    public Vector3 originPos;
    

    void Awake()
    {
        originPos = transform.position;
    }

    void Update()
    {
        PosGo();
    }

    //public void catchobj()
    //{
    //    isCatch = false ;   
    //}

    public void PosGo()
    {
        if (Vector3.Distance(transform.position, originPos) <= 0.1f )
        {
            print("합체!!!");
            transform.position = originPos;
            GetComponent<Rigidbody>().isKinematic = true;
        }
    }

    //private void OnTriggerEnter(Collider other)
    //{
    //    if(other.gameObject.tag == "tag1")
    //    {
    //        Vector3 targetpos = other.gameObject.transform.localPosition;
    //        transform.localPosition = targetpos;
    //        transform.GetComponent<NearInteractionGrabbable>().enabled = false;
    //        transform.GetComponent<ObjectManipulator>().enabled = false;
    //    }

    //}
}
