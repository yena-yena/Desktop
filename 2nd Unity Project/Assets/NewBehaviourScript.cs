using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    private void Awake()
    {
        Debug.Log("플레이어 데이터가 준비되었습니다.");
    }
    void Start()
    {
        Debug.Log("사냥 장비를 챙겼습니다.");
    }

   
    void FixedUpdate()
    {
        Debug.Log("이동");
    }
}
