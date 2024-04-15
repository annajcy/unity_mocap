using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManualDataSource : DataSource
{
    [SerializeField] private Transform rootTransform;
    [SerializeField] private GameObject jointsPrefabs;
    private GameObject[] _joints;

    void Start()
    {
        Init();
        _joints = new GameObject[(int)Tools.EJoint.JointsCount];
        for (int i = 0; i < _joints.Length; i ++)
        {
            _joints[i] = Instantiate(jointsPrefabs, rootTransform, true);
            _joints[i].name = ((Tools.EJoint)i).ToString();
        }
    }
    
    void Update()
    {
        for (int i = 0; i < JointPositions.Length; i ++)
            JointPositions[i] = _joints[i].transform.position;
    }
}
