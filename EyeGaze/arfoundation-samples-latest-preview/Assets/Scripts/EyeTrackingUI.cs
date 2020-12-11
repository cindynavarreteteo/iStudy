using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Text = UnityEngine.UI.Text;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARFoundation.Samples
{
    [RequireComponent(typeof(Text))]
    public class EyeTrackingUI : MonoBehaviour
    {
        [SerializeField]
        ARFaceManager m_Manager;

        void OnEnable()
        {
            if (m_Manager == null)
            {
                m_Manager = FindObjectOfType<ARFaceManager>();
            }
            if (m_Manager != null && m_Manager.subsystem != null && m_Manager.descriptor.supportsEyeTracking)
            {
                var infoGO = GetComponent<Text>();
                infoGO.text = "Please allow the device to calibrate by looking at the dot in the center. \n Once you are looking at the dot press the button";
            }
            else
            {
                var infoGO = GetComponent<Text>();
                infoGO.text = "This device does not support eye tracking.";
            }
        }
    }
}