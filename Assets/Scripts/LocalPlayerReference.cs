using UnityEngine;
using Normal.Realtime;

public class LocalPlayerReference : MonoBehaviour
{
    // Variabile statica accessibile da qualsiasi script
    public static PlayerAccessorySync localSync;
    private RealtimeView realtimeView;

    void Start()
    {
        realtimeView = GetComponent<RealtimeView>();
        
        // Se questo avatar appartiene al giocatore locale, salviamo il riferimento
        if (realtimeView.isOwnedLocallyInHierarchy)
        {
            localSync = GetComponent<PlayerAccessorySync>();
        }
    }
}