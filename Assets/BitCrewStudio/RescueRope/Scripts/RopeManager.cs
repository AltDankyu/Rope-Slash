using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RopeManager : MonoBehaviour
{
    // ロープの一部を切った時に、ロープをボールから切り離すようにします。

    [SerializeField] private RopeElement edgeRopeElement;

    public bool ropeIsBroken;

    private void Start()
    {
        foreach (Transform child in transform)
        {
            var ropeElement = child.GetComponent<RopeElement>();
            ropeElement.SetOnCut(() =>
            {
                ropeIsBroken = true;

                if (edgeRopeElement != null)
                {
                    edgeRopeElement.Remove();
                }
            });
        }
    }
}
