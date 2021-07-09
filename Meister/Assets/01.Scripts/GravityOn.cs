using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityOn : MonoBehaviour
{
    public GameObject[] jangGi;
    public Transform[] pos;
    public bool startBtn;
    public GameObject jangMesh;

    public GameObject exPlBtn;
    public GameObject animBtn;

    public GameObject[] robot;
    public Transform[] robotPos;

    public GameObject[] ferris;
    public Transform[] feriPos;

    public GameObject menu;
    public GameObject custom;

    public GameObject showJang;
    public GameObject showRo;
    public GameObject showRoBone;
    public GameObject showFe;
    public GameObject showFeMe;

    public bool selectJangGi;
    public bool selectRobot;
    public bool selectFerris;

    public static GravityOn Instance;

    bool btnCl;

    void Start()
    {
        if (Instance == null)
        {
            Instance = this;
        }

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
        print("장기 온");
        selectRobot = false;
        showRo.SetActive(false);
        showRoBone.SetActive(false);

        selectFerris = false;
        showFe.SetActive(false);
        showFeMe.SetActive(false);

        selectJangGi = true;
        showJang.SetActive(true);
        jangGi[18].gameObject.SetActive(false);
        jangGi[19].gameObject.SetActive(false);
        exPlBtn.SetActive(true);
        animBtn.SetActive(true);
    }
    public void OnClickSelRo()
    {
        print("로봇 온");
        selectJangGi = false;
        showJang.SetActive(false);
        jangMesh.SetActive(false);
        exPlBtn.SetActive(false);
        animBtn.SetActive(false);

        selectFerris = false;
        showFe.SetActive(false);
        showFeMe.SetActive(false);

        selectRobot = true;
        showRo.SetActive(true);
        showRoBone.SetActive(true);
    }
    public void OnClickSelFe()
    {
        print("대관람차 온");
        selectJangGi = false;
        showJang.SetActive(false);
        jangMesh.SetActive(false);
        exPlBtn.SetActive(false);
        animBtn.SetActive(false);

        selectRobot = false; 
        showRo.SetActive(false);
        showRoBone.SetActive(false);

        selectFerris = true;
        showFe.SetActive(true);
        //showFeMe.SetActive(true);
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
                jangGi[18].gameObject.SetActive(true);
                jangGi[19].gameObject.SetActive(true);
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
        else if (selectFerris)
        {
            for (int i = 0; i < feriPos.Length; i++)
            {
                ferris[i].GetComponent<MeshCollider>().enabled = true;
                ferris[i].GetComponent<Position>().enabled = true;
                //ferris[i].transform.SetPositionAndRotation(feriPos[i].position, feriPos[i].rotation);
                ferris[i].transform.position = feriPos[i].position;
                showFeMe.SetActive(true);
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
