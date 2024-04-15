using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MapperDataReceiver : DataReceiver
{
    [SerializeField] private Transform avatarRoot;
    private Dictionary<string, Tuple<Tools.EDirection, Tools.EJoint, Tools.EJoint>> _applyParamList;

    void ApplyLegParams()
    {
        _applyParamList.Add("Bip001 L Thigh",
            Tuple.Create(
                Tools.EDirection.Left,
                Tools.EJoint.LeftHip,
                Tools.EJoint.LeftKnee));
        _applyParamList.Add("Bip001 L Calf",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.LeftKnee,
                Tools.EJoint.LeftAnkle));
        _applyParamList.Add("Bip001 L Foot",
            Tuple.Create(
                Tools.EDirection.Up, 
                Tools.EJoint.LeftHeel,
                Tools.EJoint.LeftFootIndex));
        _applyParamList.Add("Bip001 R Thigh",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.RightHip,
                Tools.EJoint.RightKnee));
        _applyParamList.Add("Bip001 R Calf",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.RightKnee,
                Tools.EJoint.RightAnkle));
        _applyParamList.Add("Bip001 R Foot",
            Tuple.Create(
                Tools.EDirection.Up, 
                Tools.EJoint.RightHeel,
                Tools.EJoint.RightFootIndex));
    }

    void ApplyArmParams()
    {
        _applyParamList.Add("Bip001 L UpperArm",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.LeftShoulder,
                Tools.EJoint.LeftElbow));
        _applyParamList.Add("Bip001 L Forearm",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.LeftElbow,
                Tools.EJoint.LeftWrist));
        _applyParamList.Add("Bip001 R UpperArm",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.RightShoulder,
                Tools.EJoint.RightElbow));
        _applyParamList.Add("Bip001 R Forearm",
            Tuple.Create(
                Tools.EDirection.Left, 
                Tools.EJoint.RightElbow,
                Tools.EJoint.RightWrist));
    }
    
    void InitParamList()
    {
        _applyParamList = new Dictionary<string, Tuple<Tools.EDirection, Tools.EJoint, Tools.EJoint>>();
        ApplyLegParams();
        ApplyArmParams();
    }

    private void ApplyNodePose(Transform nodeTransform, Tools.EDirection faceAxis, Vector3 fromVec, Vector3 toVec)
    {
        var faceVec = Vector3.zero;
        if (faceAxis == Tools.EDirection.Up) faceVec = nodeTransform.up;
        else if (faceAxis == Tools.EDirection.Down) faceVec = -nodeTransform.up;
        else if (faceAxis == Tools.EDirection.Forward) faceVec = nodeTransform.forward;
        else if (faceAxis == Tools.EDirection.Back) faceVec = -nodeTransform.forward;
        else if (faceAxis == Tools.EDirection.Right) faceVec = nodeTransform.right;
        else if (faceAxis == Tools.EDirection.Left) faceVec = -nodeTransform.right;
        var rotate = Quaternion.FromToRotation(faceVec, toVec - fromVec).eulerAngles;
        nodeTransform.Rotate(rotate, Space.World);
    }

    void ApplyPose(Transform node)
    {
        for (int i = 0; i < node.childCount; i ++)
        {
            var subNode = node.GetChild(i);
            if (_applyParamList.ContainsKey(subNode.name))
            {
                var paramList = _applyParamList[subNode.name];
                ApplyNodePose(subNode, 
                    paramList.Item1, 
                    JointPositions[(int)paramList.Item2], 
                    JointPositions[(int)paramList.Item3]);
            }
            ApplyPose(subNode);
        }
    }

    private void Start()
    {
        InitParamList();
    }
    
    void Update()
    {
        Refresh();
        ApplyPose(avatarRoot);
    }
}