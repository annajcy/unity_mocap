using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataReceiver : MonoBehaviour
{
    [SerializeField] private DataSource dataSource;
    protected Vector3[] JointPositions;

    protected void Refresh()
    {
        JointPositions = dataSource.GetData();
    }
}
