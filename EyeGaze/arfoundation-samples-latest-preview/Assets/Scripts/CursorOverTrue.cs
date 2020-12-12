using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace UnityEngine.XR.ARFoundation.Samples
{
    
public class CursorOverTrue : MonoBehaviour
{
    void Update()
    {
        if(FixationPoint2DVisualizer.buttonChecker.x<=-0.1)
        {
            GetComponent<TrueButton>().OnMouseOver();
        }
    }
}
}
