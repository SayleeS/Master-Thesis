using UnityEngine;

public class alwaysLook : MonoBehaviour
{
    public Transform Target;

    void Update()
    {
        transform.LookAt(Target);
    }
}