using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataSource : MonoBehaviour
{
    protected Vector3[] JointPositions;
    
    protected void Init()
    {
        JointPositions = new Vector3[(int)Tools.EJoint.JointsCount];
    }
    
    public virtual Vector3[] GetData()
    {
        return JointPositions;
    }
}
