using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjMove : MonoBehaviour
{

    public float moveSpeed = 3;

    void Start()
    {
        
    }

    
    void Update()
    {

        Vector3 dir = Vector3.right;
        transform.position += dir * moveSpeed * Time.deltaTime;

    }


    
}
