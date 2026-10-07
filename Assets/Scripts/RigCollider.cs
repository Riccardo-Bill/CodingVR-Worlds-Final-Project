using UnityEngine;

public class RigCollider : MonoBehaviour
{
    public Transform headIKTarget;
    public Transform kyleRig;
    public Transform headBone;

    public Transform vrCamera;

    public Transform leftIKTarget;
    public Transform leftController;

    public Transform rightIKTarget;
    public Transform rightController;


    void LateUpdate()
    {
        kyleRig.rotation = Quaternion.Euler(0, vrCamera.eulerAngles.y, 0f);
        kyleRig.position += (headIKTarget.position - headBone.position);

        leftIKTarget.SetPositionAndRotation(leftController.position, leftController.rotation);
        rightIKTarget.SetPositionAndRotation(rightController.position, rightController.rotation);
        



    }








}
