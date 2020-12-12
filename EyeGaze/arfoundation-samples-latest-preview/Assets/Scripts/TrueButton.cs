using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.ARFoundation.Samples
{
    public class TrueButton : MonoBehaviour
    {
        [SerializeField]
        GameObject m_TrueButton;
        public GameObject trueButton
        {
            get => m_TrueButton;
            set => m_TrueButton = value;
        }

        public void OnMouseOver()
        {}
    }
    
}