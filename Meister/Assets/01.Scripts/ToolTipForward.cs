using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToolTipForward : MonoBehaviour
{
    public GameObject[] toolTips;

    bool btnSetactive;

    void Start()
    {

    }

    void Update()
    {
        
    }

    public void OnClickSet()
    {
        //if (btnSetactive == false)
        //{
        //    for (int i = 0; i < toolTips.Length; i++)
        //    {
        //        toolTips[i].gameObject.SetActive(true);
        //        toolTips[i].transform.forward = Camera.main.transform.forward;
        //    }
        //    btnSetactive = true;
        //}
        //else
        //{
        //    for (int i = 0; i < toolTips.Length; i++)
        //    {
        //        toolTips[i].gameObject.SetActive(false);
        //        toolTips[i].transform.forward = Camera.main.transform.forward;
        //    }
        //    btnSetactive = false;
        //}

        btnSetactive = !btnSetactive;
        for (int i = 0; i < toolTips.Length; i++)
        {
            toolTips[i].gameObject.SetActive(btnSetactive);
            toolTips[i].transform.forward = Camera.main.transform.forward;
        }
    }
}
