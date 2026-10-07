using UnityEngine;

public class AccessoryEquipper : MonoBehaviour
{
    public bool isMask = true; // Spunta su true se è una maschera, false se è uno zaino
    public int accessoryId;    // L'ID corrispondente nell'array dell'AccessorySync dell'avatar

    // Chiamare questa funzione tramite un UnityEvent (es. OnSelectEntered del XR Grab Interactable, o trigger collider)
    public void Equip()
    {
        // Controlliamo che l'avatar locale sia stato spawnato e registrato
        if (LocalPlayerReference.localSync != null)
        {
            if (isMask)
            {
                LocalPlayerReference.localSync.SetMask(accessoryId);
            }
            else
            {
                LocalPlayerReference.localSync.SetBackpack(accessoryId);
            }
            
            // Opzionale: distruggi l'oggetto fisico nella scena dopo averlo equipaggiato
            // Destroy(gameObject); 
        }
    }
}