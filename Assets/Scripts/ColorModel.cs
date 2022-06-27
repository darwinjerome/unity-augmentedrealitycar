using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ColorModel : MonoBehaviour
{
    public GameObject prefabModel;

    public void UpdateColor()
    {
        //colorModel = GameObject.FindWithTag("BodyColor");
        //meshModel.material.color = EventSystem.current.currentSelectedGameObject.GetComponent<Image>().color;

        // Find all car parts with Tag "BodyColor"
        GameObject[] objects = GameObject.FindGameObjectsWithTag("BodyColor");

        //Loop through the list and replace the color based on the color selected
        foreach (GameObject go in objects) 
        {
            MeshRenderer[] renderers = go.GetComponentsInChildren<MeshRenderer>();
            foreach (MeshRenderer r in renderers) 
            {
                foreach (Material m in r.materials) 
                {
                    if (m.HasProperty("_Color"))
                        m.color = EventSystem.current.currentSelectedGameObject.GetComponent<Image>().color;
                }
            }
         }
    }
}
