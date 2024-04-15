using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

public class MotionCaptureDataSource : DataSource
{
    [SerializeField] private int port;
    [SerializeField] private bool enable;
    [SerializeField] private Tools.DataScale dataScale;
    private Thread _receiveThread;
    private UdpClient _udpClient;
    private string[] _nodes;
    private string[] _points;
    private string _data;

    private Vector3 VectorConverter(Vector3 vec, Tools.DataScale vecDataScale)
    {
        vec.x *= vecDataScale.xOffset;
        vec.y *= vecDataScale.yOffset;
        vec.z *= vecDataScale.zOffset;
        return -vec;
    }

    void DataPreprocess()
    {
        if (_data.Length == 0) return;
        _nodes = _data.Split('|');
        for (int i = 0; i < _nodes.Length; i ++)
        {
            if (_nodes[i].Length == 0) continue;
            _points = _nodes[i].Split(',');
            Vector3 rawVec = new Vector3(
                float.Parse(_points[0]),
                float.Parse(_points[1]),
                float.Parse(_points[2]));
            JointPositions[i] = VectorConverter(rawVec, dataScale);
        }
    }
    
    public override Vector3[] GetData()
    {
        DataPreprocess();
        return base.GetData();
    }

    void ReceiveData()
    {
        _udpClient = new UdpClient(port);
        while (enable)
        {
            try
            {
                IPEndPoint anyIP = new IPEndPoint(IPAddress.Any, 0);
                byte[] dataBytes = _udpClient.Receive(ref anyIP);
                _data = Encoding.UTF8.GetString(dataBytes);
                Debug.Log(_data);
            }
            catch (Exception e)
            {
                Debug.Log(e.ToString());
            }
        }
    }

    void Awake()
    {
        _data = "";
        _nodes = new string[(int)Tools.EJoint.JointsCount];
        JointPositions = new Vector3[(int)Tools.EJoint.JointsCount];
        _receiveThread = new Thread(ReceiveData)
        {
            IsBackground = true
        };
        _receiveThread.Start();
    }

    private void OnDestroy()
    {
        _receiveThread.Abort();
    }
}
