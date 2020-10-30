using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class EyeTracking : MonoBehaviour
{
    [SerializeField]
    private GameObject eyeCursor;

    public GameObject eyeCursorPrefab
    {
        get =>eyeCursorPrefab;
        set => eyeCursorPrefab= value;
    }

    GameObject eyeCursorGameObject;

    Canvas canvas;
    ARFace arFace;
    XRFaceSubsystem faceSubsystem;


    void Awake()
    {
        arFace = GetComponent<ARFace>();
    }

    void CreateEyeGameObjectsIfNecessary()
    {
        var canvas = FindObjectOfType<Canvas>();
        if (arFace.fixationPoint != null && canvas != null && eyeCursorGameObject == null)
        {
            eyeCursorGameObject = Instantiate(eyeCursorPrefab, canvas.transform);
        }
    }


    void OnEnable()
    {
        var faceManager = FindObjectOfType<ARFaceManager>();
        if (faceManager != null && faceManager.subsystem != null && faceManager.descriptor.supportsEyeTracking)
        {
            faceSubsystem = (XRFaceSubsystem)faceManager.subsystem;
            SetVisibility((arFace.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready));
            arFace.updated += OnUpdated;
        }
        else
        {
            enabled = false;
        }
    }

    void OnDisable()
    {
        arFace.updated -= OnUpdated;
        SetVisibility(false);
    }

    void OnUpdated(ARFaceUpdatedEventArgs eventArgs)
    {
        CreateEyeGameObjectsIfNecessary();
        SetVisibility((arFace.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready));
        UpdateScreenReticle();

        // set visibility
        bool shouldBeVisible = (arFace.trackingState == TrackingState.Tracking) && (ARSession.state > ARSessionState.Ready);
        SetVisibility(shouldBeVisible);
    }


    void UpdateScreenReticle()
    {
        var mainCamera = Camera.main;

        var fixationInViewSpace = mainCamera.WorldToViewportPoint(arFace.fixationPoint.position);

        // The camera texture is mirrored so x and y must be changed to match where the fixation point is in relation to the face.
        var mirrorFixationInView = new Vector3(1 - fixationInViewSpace.x, 1 - fixationInViewSpace.y, fixationInViewSpace.z);

        if (eyeCursorGameObject != null)
        {
            eyeCursorGameObject.GetComponent<RectTransform>().anchoredPosition3D = mainCamera.ViewportToScreenPoint(mirrorFixationInView);
        }
    }


    void SetVisibility(bool isVisible)
    {
        if (eyeCursorGameObject != null )
            eyeCursorGameObject.SetActive(isVisible);
    }
}
