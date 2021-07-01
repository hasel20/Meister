using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SamePos : MonoBehaviour
{
    public bool arm;
    public bool hand;
    public bool leg;
    public bool foot;

    private void OnTriggerEnter(Collider other)
    {
        if(GravityOn.Instance.startBtn == true)
        {
            if (other.CompareTag("Arm") && arm)
            {
                print("팔충돌!");
                transform.SetPositionAndRotation(other.transform.position, other.transform.rotation);
                GetComponent<Rigidbody>().isKinematic = true;
                other.gameObject.SetActive(false);
                GetComponent<MeshCollider>().enabled = false;
            }
            else if (other.CompareTag("Hand") && hand)
            {
                print("손충돌!");
                transform.SetPositionAndRotation(other.transform.position, other.transform.rotation);
                GetComponent<Rigidbody>().isKinematic = true;
                other.gameObject.SetActive(false);
                GetComponent<MeshCollider>().enabled = false;
            }
            else if (other.CompareTag("Leg") && leg)
            {
                print("다리충돌!");
                transform.SetPositionAndRotation(other.transform.position, other.transform.rotation);
                GetComponent<Rigidbody>().isKinematic = true;
                other.gameObject.SetActive(false);
                GetComponent<MeshCollider>().enabled = false;
            }
            else if (other.CompareTag("Foot") && foot)
            {
                print("발충돌!");
                transform.SetPositionAndRotation(other.transform.position, other.transform.rotation);
                GetComponent<Rigidbody>().isKinematic = true;
                other.gameObject.SetActive(false);
                GetComponent<MeshCollider>().enabled = false;
            }
        }
        else
        {
            return;
        }
    }
}
