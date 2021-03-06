﻿using System.Collections;
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
    public class FixationPoint2DVisualizer : MonoBehaviour
    {
        [SerializeField]
        GameObject m_GUIFixationReticlePrefab;

        public GameObject fixationReticlePrefab
        {
            get => m_GUIFixationReticlePrefab;
            set => m_GUIFixationReticlePrefab = value;
        }
        public GameObject m_FixationReticleGameObject;

        Canvas m_Canvas;
        ARFace m_Face;
        XRFaceSubsystem m_FaceSubsystem;      

        public static Vector3 buttonChecker;  

        Vector3 offset;
        void Awake()
        {
            m_Face = GetComponent<ARFace>();
            offset=Calibration.offset;
        }

        void CreateEyeGameObjectsIfNecessary()
        {
            var canvas = FindObjectOfType<Canvas>();
            if (m_Face.fixationPoint != null && canvas != null && m_FixationReticleGameObject == null)
            {
                m_FixationReticleGameObject = Instantiate(m_GUIFixationReticlePrefab, canvas.transform);
            }
        }

        void SetVisible(bool visible)
        {
            if (m_FixationReticleGameObject != null)
                m_FixationReticleGameObject.SetActive(visible);
        }

        void OnEnable()
        {
            var faceManager = FindObjectOfType<ARFaceManager>();
            if (faceManager != null && faceManager.subsystem != null && faceManager.descriptor.supportsEyeTracking)
            {
                m_FaceSubsystem = (XRFaceSubsystem)faceManager.subsystem;
                SetVisible((m_Face.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready));
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
            CreateEyeGameObjectsIfNecessary();
            SetVisible((m_Face.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready));
            UpdateScreenReticle();
        }


        void UpdateScreenReticle()
        {
            var mainCamera = Camera.main;

            var fixationInViewSpace = mainCamera.WorldToViewportPoint(m_Face.fixationPoint.position);

            Debug.Log("Offset: " + offset);


            // The camera texture is mirrored so x and y must be changed to match where the fixation point is in relation to the face.
            var mirrorFixationInView = new Vector3(1 - fixationInViewSpace.x, 1 - fixationInViewSpace.y, fixationInViewSpace.z);

            var CalibPoint= new Vector3(mirrorFixationInView.x-offset.x, mirrorFixationInView.y-offset.y, mirrorFixationInView.z-offset.z);
            
            Debug.Log("Reticle Point: " + CalibPoint);
            Debug.Log("Rect Transform" + m_FixationReticleGameObject.GetComponent<RectTransform>().anchoredPosition3D);

            if(CalibPoint.x >= 0.1)
            {
              Debug.Log("Over True Button");  
            }

            if(CalibPoint.x >= -0.1)
            {
                Debug.Log("Over False Button");
            }
                
            if (m_FixationReticleGameObject != null)
            {
                m_FixationReticleGameObject.GetComponent<RectTransform>().anchoredPosition3D = mainCamera.ViewportToScreenPoint(CalibPoint);
            }
        }
    }
}