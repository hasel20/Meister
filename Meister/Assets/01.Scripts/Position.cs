using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;

public class Position : MonoBehaviour
{
    public Vector3 originPos;
    public Quaternion originRot;

    public Vector3 robotOriPos;
    public Quaternion robotOriRot;

    public Vector3 ferrisOriPos;
    public Quaternion ferrisOriRot;

    //public GameObject[] collisionS;
    //public GameObject[] byeS;

    bool complete;

    void Awake()
    {
        //originPos = transform.position;
        //originRot = transform.rotation;

        if (GravityOn.Instance.selectJangGi)
        {
            print("장기");
            originPos = transform.position;
            originRot = transform.rotation;
        }
        else if (GravityOn.Instance.selectRobot)
        {
            print("로봇");
            robotOriPos = transform.position;
            robotOriRot = transform.rotation;
        }
        else if (GravityOn.Instance.selectFerris)
        {
            print("대관람차");
            ferrisOriPos = transform.position;
            ferrisOriRot = transform.rotation;
        }

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
        //if (Vector3.Distance(transform.position, originPos) <= 0.1f)
        //{
        //    print("장기합체!!!");
        //    transform.position = originPos;
        //    transform.rotation = originRot;

        //    GetComponent<Rigidbody>().isKinematic = true;

        //    complete = true;
        //}

        if (GravityOn.Instance.selectJangGi)
        {
            if (Vector3.Distance(transform.position, originPos) <= 0.1f)
            {
                print("장기합체!!!");
                transform.position = originPos;
                transform.rotation = originRot;

                GetComponent<Rigidbody>().isKinematic = true;
                GetComponent<MeshCollider>().enabled = false;

                complete = true;
            }
        }
        else if (GravityOn.Instance.selectRobot)
        {
            if (Vector3.Distance(transform.position, robotOriPos) <= 0.1f)
            {
                print("로봇합체!!!");
                transform.position = robotOriPos;
                transform.rotation = robotOriRot;

                GetComponent<Rigidbody>().isKinematic = true;
                GetComponent<MeshCollider>().enabled = false;

                complete = true;
            }
        }
        else if (GravityOn.Instance.selectFerris)
        {
            if (Vector3.Distance(transform.position, ferrisOriPos) <= 0.1f)
            {
                print("관람차합체!!!");
                transform.position = ferrisOriPos;
                transform.rotation = ferrisOriRot;

                GetComponent<Rigidbody>().isKinematic = true;
                GetComponent<MeshCollider>().enabled = false;

                complete = true;
            }
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
        else if (other.gameObject.tag == "Arm.L" && this.gameObject.name == "Arm.L")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Arm" && this.gameObject.name == "Arm.R")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Foot.L" && this.gameObject.name == "Foot.L")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Foot" && this.gameObject.name == "Foot.R")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Foot.L" && this.gameObject.name == "Foot.L")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Foot" && this.gameObject.name == "Foot.R")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Leg.L" && this.gameObject.name == "Leg.L")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "Leg" && this.gameObject.name == "Leg.R")
        {
            other.gameObject.SetActive(false);
        }
        //=================================================================================
        if (other.gameObject.tag == "base" && this.gameObject.name == "Base")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "wheel" && this.gameObject.name == "Wheel")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room01" && this.gameObject.name == "room01")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room02" && this.gameObject.name == "room02")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room03" && this.gameObject.name == "room03")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room04" && this.gameObject.name == "room04")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room05" && this.gameObject.name == "room05")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room06" && this.gameObject.name == "room06")
        {
            other.gameObject.SetActive(false);
        }
        else if (other.gameObject.tag == "room07" && this.gameObject.name == "room07")
        {
            other.gameObject.SetActive(false);
        }

        //else if (other.gameObject.tag == "Rhead" && (this.gameObject.name == "robot_head" && this.gameObject.name == "robot_head1"))
        //{
        //    other.gameObject.SetActive(false);
        //}
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
