using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OneShotKey : MonoBehaviour
{
    public TMPro.TMP_Text text;
    public string st_text = "Meister";
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(typing());
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator typing()
    {
        for (int i = 0; i <= st_text.Length; i++)
        {
            text.text = st_text.Substring(0, i);
            yield return new WaitForSeconds(0.1f);
        }
    }
}