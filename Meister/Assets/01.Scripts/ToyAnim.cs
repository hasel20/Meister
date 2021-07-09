using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToyAnim : MonoBehaviour
{
    public GameObject moominDance;
    public GameObject moomin;
    public GameObject moominMesh;
    public GameObject cWMesh;
    public GameObject cW;
    public GameObject ClockWork;
    public float rotSpeed = 1;

    void Start()
    {
        
    }

    void Update()
    {
        //cWRot();
    }

    public void OnclickAnim()
    {
        GravityOn.Instance.selectJangGi = false;
        moomin.SetActive(false);
        moominMesh.SetActive(false);
        moominDance.SetActive(true);
        cW.SetActive(false);
        cWMesh.SetActive(false);
        ClockWork.SetActive(true);
    }

    //void cWRot()
    //{
    //    if(ck)
    //    {
    //        ClockWork.transform.Rotate(new Vector3(0, 0, 180 * rotSpeed * Time.deltaTime));
    //    }
    //}
}
