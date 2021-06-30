using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestManager : MonoBehaviour
{
    public GameObject head;
    public Transform targetPos;

    void Start()
    {
        
    }

    public void OnClickButton()
    {
        head.transform.position = targetPos.position;
    }
}
