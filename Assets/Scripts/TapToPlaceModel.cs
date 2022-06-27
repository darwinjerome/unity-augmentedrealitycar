using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class TapToPlaceModel : MonoBehaviour
{
    public GameObject placementIndicator;
    public GameObject objectToPlace;

    private ARRaycastManager raycastManager;
    private Pose placementPose;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private bool placementPoseIsValid = false;
    private bool objectIsPlaced = false;

    private ARPlaneManager arPlaneManager;

    // Start is called before the first frame update
    void Awake()
    {
        raycastManager = GetComponent<ARRaycastManager>();
        arPlaneManager = GetComponent<ARPlaneManager>();
    }

    // Update is called once per frame
    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();

        if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && objectIsPlaced != true)
        {
            PlaceObject();
        }
    }

  private void PlaceObject()
  {
    Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
    objectIsPlaced = true;
    TogglePlaneDetection();
  }

  private void UpdatePlacementIndicator()
  {
    if (placementPoseIsValid && objectIsPlaced == false)
    {
        placementIndicator.SetActive(true);
        placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
    }
    else
    {
        placementIndicator.SetActive(false);
    }
  }

  private void UpdatePlacementPose()
  {
    var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
    hits = new List<ARRaycastHit>();
    // raycastManager.Raycast(screenCenter, hits, TrackableType.PlaneWithinPolygon);
    
    // placementPoseIsValid = hits.Count > 0;
    // if (placementPoseIsValid)
    // {
    //     placementPose = hits[0].pose;

    //     var cameraForward = Camera.current.transform.forward;
    //     var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
    //     placementPose.rotation = Quaternion.LookRotation(cameraBearing);
    // }

    if (raycastManager.Raycast(screenCenter, hits, TrackableType.PlaneWithinPolygon))
    {
        placementPose = hits[0].pose;
        var cameraForward = Camera.current.transform.forward;
        var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
        placementPose.rotation = Quaternion.LookRotation(cameraBearing);

        placementPoseIsValid = hits.Count > 0;
    }
  }

  // Turns-off the planedetection when model is placed
  private void TogglePlaneDetection()
  {
      arPlaneManager.enabled = !arPlaneManager.enabled;

      foreach(ARPlane plane in arPlaneManager.trackables)
      {
        plane.gameObject.SetActive(arPlaneManager.enabled);
      }
  }
}
