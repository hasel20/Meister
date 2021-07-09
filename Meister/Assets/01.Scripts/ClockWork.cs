using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClockWork : MonoBehaviour
{
    public GameObject cPos;
    public Vector3 cWPos;
    public Quaternion cWRot;

    void Start()
    {
        StartCoroutine(SetPosition());
    }

    void Update()
    {
        if (MoominCW.Instance.clockWork.activeSelf == true)
        {
            cWGo();
        }
    }

    void cWGo()
    {
        if (Vector3.Distance(transform.position, cWPos) <= 0.1f)
        {
            print("태엽합체!!!");
            transform.position = cWPos;
            transform.rotation = cWRot;

            //GetComponent<Rigidbody>().isKinematic = true;
            //GetComponent<MeshCollider>().enabled = false;
        }
    }

    IEnumerator SetPosition()
    {
        yield return new WaitForSeconds(0.2f);
        cWPos = cPos.transform.position;
        cWRot = cPos.transform.rotation;
    }
}
