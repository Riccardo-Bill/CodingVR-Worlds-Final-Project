using Normal.Realtime;
using UnityEngine;

public class PlayerAccessorySync : RealtimeComponent<PlayerAppearanceModel>
{
    [Header("Assegna i GameObject figli dei Socket")]
    public GameObject[] masks;
    public GameObject[] backpacks; // Il primo elemento (index 0) di entrambi dovrebbe essere vuoto/null

    protected override void OnRealtimeModelReplaced(PlayerAppearanceModel previousModel, PlayerAppearanceModel currentModel)
    {
        // Pulizia del vecchio modello
        if (previousModel != null)
        {
            previousModel.maskIdDidChange -= OnMaskChanged;
            previousModel.backIdDidChange -= OnBackChanged;
        }

        // Setup del nuovo modello
        if (currentModel != null)
        {
            // Imposta lo stato iniziale per chi entra nella stanza in ritardo
            ApplyMask(currentModel.maskId);
            ApplyBackpack(currentModel.backId);

            // Iscrizione agli eventi di cambiamento
            currentModel.maskIdDidChange += OnMaskChanged;
            currentModel.backIdDidChange += OnBackChanged;
        }
    }

    // Metodi chiamati automaticamente quando qualcuno in rete cambia gli ID
    private void OnMaskChanged(PlayerAppearanceModel model, int value) => ApplyMask(value);
    private void OnBackChanged(PlayerAppearanceModel model, int value) => ApplyBackpack(value);

    // Applica visivamente la maschera corretta spegnendo le altre
    private void ApplyMask(int id)
    {
        for (int i = 0; i < masks.Length; i++)
        {
            if (masks[i] != null) masks[i].SetActive(i == id);
        }
    }

    // Applica visivamente lo zaino corretto spegnendo gli altri
    private void ApplyBackpack(int id)
    {
        for (int i = 0; i < backpacks.Length; i++)
        {
            if (backpacks[i] != null) backpacks[i].SetActive(i == id);
        }
    }

    // Metodi pubblici che i giocatori locali useranno per indossare gli oggetti
    public void SetMask(int id)
    {
        if (!realtimeView.isOwnedLocallyInHierarchy)
            realtimeView.RequestOwnership(); // Richiede i permessi di scrittura al server
        
        model.maskId = id;
    }

    public void SetBackpack(int id)
    {
        if (!realtimeView.isOwnedLocallyInHierarchy)
            realtimeView.RequestOwnership();
        
        model.backId = id;
    }
}
