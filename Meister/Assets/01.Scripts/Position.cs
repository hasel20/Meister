using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;

public class Position : MonoBehaviour
{
    public Vector3 originPos;
    public Quaternion originRot;

    public GameObject[] collisionS;
    public GameObject[] byeS;

    bool complete;

    void Awake()
    {
        originPos = transform.position;
        originRot = transform.rotation;

        complete = false;
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
            transform.rotation = originRot;
            GetComponent<Rigidbody>().isKinematic = true;

            complete = true;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (GravityOn.Instance.startBtn != true || complete != true) return;

        if (other.gameObject.tag == "Head" && this.gameObject.name == "Head")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Heart" && this.gameObject.name == "Heart")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Intestine_L" && this.gameObject.name == "Intestine_L")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Intestine_S" && this.gameObject.name == "Intestine_S")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Liver" && this.gameObject.name == "Liver")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Lung" && this.gameObject.name == "Lung")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Pelvis" && this.gameObject.name == "Pelvis")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Rib" && this.gameObject.name == "Rib")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Rib.Back" && this.gameObject.name == "Rib.Back")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Stomach" && this.gameObject.name == "Stomach")
        {
            other.gameObject.SetActive(false);
        }
    }

    //private void OnTriggerEnter(Collider other)
    //{
    //    if (GravityOn.Instance.startBtn != true || complete != true) return;

    //    for(int i = 0; i < collisionS.Length; i++)
    //    {
    //        if(collisionS[i].gameObject.name == byeS[i].gameObject.tag)
    //        {
    //            byeS[i].gameObject.SetActive(false);
    //            return;
    //        }
    //    }
    //}


}
