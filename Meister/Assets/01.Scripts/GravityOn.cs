using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityOn : MonoBehaviour
{
    public GameObject[] jangGi;
    public Transform[] pos;
    public bool startBtn;
    public GameObject jangMesh;

    public GameObject[] robot;
    public Transform[] robotPos;

    public GameObject menu;
    public GameObject custom;

    public GameObject showJang;
    public GameObject showRo;
    public GameObject showRoBone;

    public bool selectJangGi;
    public bool selectRobot;

    public static GravityOn Instance;

    bool btnCl;

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

    public void OnClickSelJang()
    {
        selectJangGi = true;
        showJang.SetActive(true);

        selectRobot = false;
        showRo.SetActive(false);
        showRoBone.SetActive(false);

    }
    public void OnClickSelRo()
    {
        selectRobot = true;
        showRo.SetActive(true);
        showRoBone.SetActive(true);

        selectJangGi = false;
        showJang.SetActive(false);
        jangMesh.SetActive(false);
    }

    public void OnClickStart()
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

        if(selectJangGi)
        {
            for (int i = 0; i < pos.Length; i++)
            {
                jangGi[i].GetComponent<MeshCollider>().enabled = true;
                jangGi[i].GetComponent<Position>().enabled = true;
                jangGi[i].transform.position = pos[i].position;
            }
            jangMesh.SetActive(true);
        }
        else if(selectRobot)
        {
            for (int i = 0; i < robotPos.Length; i++)
            {
                robot[i].GetComponent<MeshCollider>().enabled = true;
                robot[i].GetComponent<Position>().enabled = true;
                //robot[i].transform.SetPositionAndRotation(robotPos[i].position, robotPos[i].rotation);
                robot[i].transform.position = robotPos[i].position;
            }
        }
        startBtn = true;

        

        //jangGi[0].GetComponent<Position>().enabled = false;
        //jangGi[1].GetComponent<Position>().enabled = false;
        //jangGi[2].GetComponent<Position>().enabled = false;
        //jangGi[3].GetComponent<Position>().enabled = false;
        //jangGi[4].GetComponent<Position>().enabled = false;
        //jangGi[5].GetComponent<Position>().enabled = false;
        //jangGi[13].GetComponent<Position>().enabled = false;
        //jangGi[14].GetComponent<Position>().enabled = false;

    }

    public void OnClickmenu()
    {
        btnCl = !btnCl;
        menu.SetActive(btnCl);
    }

    public void OnClickcustom()
    {
        btnCl = !btnCl;
        custom.SetActive(btnCl);

        if (selectRobot)
        {
            GameObject.Find("Head.01").SetActive(false);
        }
        else return;
    }
}
