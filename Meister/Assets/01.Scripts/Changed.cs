using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Changed : MonoBehaviour
{
    public Material yellow;
    public Material green;
    public Material blue;
    public Material pink;

    public Material taxture1;
    public Material taxture2;
    public Material taxture3;
    public Material taxture4;

    public GameObject[] jangGiMs;
    public GameObject[] robotMs;

    Color color;

    public void OnClickChY()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = yellow;
                color = Color.yellow;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = yellow;
                color = Color.yellow;
            }
        }
    }
    public void OnClickChG()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = green;
                color = Color.green;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = green;
                color = Color.green;
            }
        }
    }
    public void OnClickChB()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = blue;
                color = Color.blue;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = blue;
                color = Color.blue;
            }
        }
    }
    public void OnClickChP()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = pink;
                color = new Color(255 / 255f, 125 / 255f, 200 / 255f);
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = pink;
                color = new Color(255 / 255f, 125 / 255f, 200 / 255f);
            }
        }
    }

    public void OnClickChT1()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = taxture1;
                jangGiMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = taxture1;
                robotMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
    }
    public void OnClickChT2()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = taxture2;
                jangGiMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = taxture2;
                robotMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
    }
    public void OnClickChT3()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = taxture3;
                jangGiMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = taxture3;
                robotMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
    }
    public void OnClickChT4()
    {
        if (GravityOn.Instance.selectJangGi)
        {
            for (int i = 0; i < jangGiMs.Length; i++)
            {
                jangGiMs[i].GetComponent<MeshRenderer>().material = taxture4;
                jangGiMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
        if (GravityOn.Instance.selectRobot)
        {
            for (int i = 0; i < robotMs.Length; i++)
            {
                robotMs[i].GetComponent<MeshRenderer>().material = taxture4;
                robotMs[i].GetComponent<MeshRenderer>().material.color = color;
            }
        }
    }

}
