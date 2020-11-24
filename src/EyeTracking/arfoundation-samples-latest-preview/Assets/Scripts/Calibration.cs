using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARFoundation.Samples
{
    /// <summary>
    /// Visualizes the eye gaze position in face space for an <see cref="ARFace"/>.
    /// </summary>
    /// <remarks>
    /// Face space is the space where the origin is the transform of an <see cref="ARFace"/>.
    /// </remarks>
    [RequireComponent(typeof(ARFace))]
    public class Calibration : MonoBehaviour
    {

        [SerializeField]
        GameObject m_GUICalibrationDotPrefab;

        public GameObject CalibrationDotPrefab
        {
            get => m_GUICalibrationDotPrefab;
            set => m_GUICalibrationDotPrefab = value;
        }
        GameObject m_CalibrationDotGameObject;

        Canvas m_Canvas;
        ARFace m_Face;
        XRFaceSubsystem m_FaceSubsystem;        
        Vector3 lastKnownPosition;
        void Awake()
        {
            m_Face = GetComponent<ARFace>();
        }

        void SetVisible(bool visible)
        {
            if (m_CalibrationDotGameObject != null)
                m_CalibrationDotGameObject.SetActive(visible);
        }
        void OnEnable()
        {
            var faceManager = FindObjectOfType<ARFaceManager>();
            if (faceManager != null && faceManager.subsystem != null && faceManager.descriptor.supportsEyeTracking)
            {
                var canvas = FindObjectOfType<Canvas>();
                if(m_Face.fixationPoint != null && canvas != null && m_CalibrationDotGameObject == null)
                {
                    m_CalibrationDotGameObject=Instantiate(m_GUICalibrationDotPrefab, canvas.transform);
                    SetVisible((m_Face.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready));
                }
                m_FaceSubsystem = (XRFaceSubsystem)faceManager.subsystem;
                m_Face.updated += OnUpdated;
            }
            else
            {
                enabled = false;
            }
        }

        void OnDisable()
        {
            m_Face.updated -= OnUpdated;
            SetVisible(false);
        }

        void OnUpdated(ARFaceUpdatedEventArgs eventArgs)
        {
            Calibrate();
            SetVisible((m_Face.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready));
        }


        void Calibrate()
        {
            var mainCamera = Camera.main;

            var fixationInViewSpace = mainCamera.WorldToViewportPoint(m_Face.fixationPoint.position);

            // The camera texture is mirrored so x and y must be changed to match where the fixation point is in relation to the face.
            var mirrorFixationInView = new Vector3(1 - fixationInViewSpace.x, 1 - fixationInViewSpace.y, fixationInViewSpace.z);

            lastKnownPosition=mirrorFixationInView;
            var CenterPoint=new Vector3(0,0,0);

            Debug.Log("Offset:" + lastKnownPosition);
            
            if (m_CalibrationDotGameObject != null)
            {
                m_CalibrationDotGameObject.GetComponent<RectTransform>().anchoredPosition3D = mainCamera.ViewportToScreenPoint(CenterPoint);
            }
        }
    }
}