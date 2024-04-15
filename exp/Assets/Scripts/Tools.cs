using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Tools
{
    [Serializable]
    public struct Edges<T>
    {
        public T u;
        public T v;
        public Edges (T u, T v)
        {
            this.u = u;
            this.v = v;
        }
    }
    
    [Serializable]
    public struct Edges<T1, T2>
    {
        public T1 u;
        public T1 v;
        public T2 w;
        public Edges (T1 u, T1 v, T2 w)
        {
            this.u = u;
            this.v = v;
            this.w = w;
        }
    }
    
    [Serializable]
    public struct DataScale
    {
        public float xOffset;
        public float yOffset;
        public float zOffset;
    }
    public enum EJoint
    {
        Nose = 0,
        LeftEyeInner = 1,
        LeftEye = 2,
        LeftEyeOuter = 3,
        RightEyeInner = 4,
        RightEye = 5,
        RightEyeOuter = 6,
        LeftEar = 7,
        RightEar = 8,
        MouthLeft = 9,
        MouthRight = 10,
        LeftShoulder = 11,
        RightShoulder = 12,
        LeftElbow = 13,
        RightElbow = 14,
        LeftWrist = 15,
        RightWrist = 16,
        LeftPinky = 17,
        RightPinky = 18,
        LeftIndex = 19,
        RightIndex = 20,
        LeftThumb = 21,
        RightThumb = 22,
        LeftHip = 23,
        RightHip = 24,
        LeftKnee = 25,
        RightKnee = 26,
        LeftAnkle = 27,
        RightAnkle = 28,
        LeftHeel = 29,
        RightHeel = 30,
        LeftFootIndex = 31,
        RightFootIndex = 32,
        JointsCount = 33,
        JointsEdgesCount = 36,
    }
    public enum EDirection
    {
        Forward = 0,
        Back = 1,
        Up = 2,
        Down = 3,
        Right = 4,
        Left = 5,
    }
}
