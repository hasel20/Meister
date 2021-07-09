using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoominCW : MonoBehaviour
{
    public GameObject moomFor;
    public GameObject moomBack;
    public GameObject moomFMesh;
    public GameObject moomBMesh;
    public GameObject clockWork;
    public GameObject cWMesh;
    public GameObject cWPosGo;

    public static MoominCW Instance;

    void Start()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    void Update()
    {
        if (GravityOn.Instance.selectJangGi == true)
        {
            if (Vector3.Distance(moomFor.transform.position, moomFMesh.transform.position) <= 0.1f &&
            Vector3.Distance(moomBack.transform.position, moomBMesh.transform.position) <= 0.1f)
            {
                clockWork.SetActive(GravityOn.Instance.startBtn);
                cWMesh.SetActive(GravityOn.Instance.startBtn);
                //ClockWorkPosGo();
            }
        }
    }

    void ClockWorkPosGo()
    {
        clockWork.transform.position = cWPosGo.transform.position;
    }
}
