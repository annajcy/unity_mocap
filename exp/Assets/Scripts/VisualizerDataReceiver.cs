using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Serialization;

[RequireComponent(typeof(LineRenderer))]
public class VisualizerDataReceiver : DataReceiver
{
    [SerializeField] private GameObject visualizationPrefab;
    [SerializeField] private Transform visualizationRoot;
    private LineRenderer _lineRenderer;
    private Tools.Edges<Tools.EJoint>[] _lineEdges;
    private GameObject[] _visualizationGameObjects;

    private void InitEdges()
    {
        _lineEdges = new Tools.Edges<Tools.EJoint>[]
        {
            new (Tools.EJoint.LeftHeel, Tools.EJoint.LeftFootIndex),
            new (Tools.EJoint.RightHeel, Tools.EJoint.RightFootIndex),
            new (Tools.EJoint.LeftAnkle, Tools.EJoint.LeftFootIndex),
            new (Tools.EJoint.RightAnkle, Tools.EJoint.RightFootIndex),
            new (Tools.EJoint.LeftHeel, Tools.EJoint.LeftAnkle),
            new (Tools.EJoint.RightHeel, Tools.EJoint.RightAnkle),
            new (Tools.EJoint.LeftAnkle, Tools.EJoint.LeftKnee),
            new (Tools.EJoint.RightAnkle, Tools.EJoint.RightKnee),
            new (Tools.EJoint.LeftHip, Tools.EJoint.LeftKnee),
            new (Tools.EJoint.RightHip, Tools.EJoint.RightKnee),
            new (Tools.EJoint.RightHip, Tools.EJoint.LeftHip),
            new (Tools.EJoint.LeftShoulder, Tools.EJoint.LeftElbow),
            new (Tools.EJoint.RightShoulder, Tools.EJoint.RightElbow),
            new (Tools.EJoint.LeftWrist, Tools.EJoint.LeftElbow),
            new (Tools.EJoint.RightWrist, Tools.EJoint.RightElbow),
            new (Tools.EJoint.LeftThumb, Tools.EJoint.LeftWrist),
            new (Tools.EJoint.RightThumb, Tools.EJoint.RightWrist),
            new (Tools.EJoint.LeftWrist, Tools.EJoint.LeftPinky),
            new (Tools.EJoint.RightWrist, Tools.EJoint.RightPinky),
            new (Tools.EJoint.LeftWrist, Tools.EJoint.LeftIndex),
            new (Tools.EJoint.RightWrist, Tools.EJoint.RightIndex),
            new (Tools.EJoint.LeftPinky, Tools.EJoint.LeftIndex),
            new (Tools.EJoint.RightPinky, Tools.EJoint.RightIndex),
            new (Tools.EJoint.MouthRight, Tools.EJoint.MouthLeft),
            new (Tools.EJoint.RightEar, Tools.EJoint.RightEyeOuter),
            new (Tools.EJoint.LeftEar, Tools.EJoint.LeftEyeOuter),
            new (Tools.EJoint.RightEye, Tools.EJoint.RightEyeOuter),
            new (Tools.EJoint.LeftEye, Tools.EJoint.LeftEyeOuter),
            new (Tools.EJoint.RightEye, Tools.EJoint.RightEyeInner),
            new (Tools.EJoint.LeftEye, Tools.EJoint.LeftEyeInner),
            new (Tools.EJoint.Nose, Tools.EJoint.RightEyeInner),
            new (Tools.EJoint.Nose, Tools.EJoint.LeftEyeInner),
        };
    }
    
    private void InitLines()
    {
        InitEdges();
        _lineRenderer = GetComponent<LineRenderer>();
    }

    private void VisualizeLines()
    {
        _lineRenderer.positionCount = _lineEdges.Length * 2;
        int index = 0;
        for (int i = 0; i < _lineEdges.Length; i++)
        {
            Vector3 start = JointPositions[(int)_lineEdges[i].u];
            Vector3 end = JointPositions[(int)_lineEdges[i].v];
            _lineRenderer.SetPosition(index ++, start);
            _lineRenderer.SetPosition(index ++, end);
        }
    }
    
    void InitVisualizer()
    {
        _visualizationGameObjects = new GameObject[(int)Tools.EJoint.JointsCount];
        for (int i = 0; i < _visualizationGameObjects.Length; i ++)
        {
            _visualizationGameObjects[i] = Instantiate(visualizationPrefab, visualizationRoot, true);
            _visualizationGameObjects[i].name = ((Tools.EJoint)i).ToString();
        }
    }
    private void VisualizeJoints()
    {
        for (int i = 0; i < _visualizationGameObjects.Length; i ++)
        {
            GameObject obj = _visualizationGameObjects[i];
            obj.transform.localPosition = JointPositions[i];
        }
    }

    void Awake()
    {
        InitLines();
        InitVisualizer();
    }
    
    void Update()
    {
        Refresh();
        VisualizeJoints();
        VisualizeLines();
    }
}
