using UnityEngine;

public class StartSpawner : MonoBehaviour
{

    [SerializeField] private GameObject spawner;
    [SerializeField] private int totalPlayers = 1;
    public int playersCount = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            playersCount += 1;
        }

        if (playersCount == totalPlayers && playersCount > 0)
        {
            spawner.SetActive(true);
            Destroy(this);
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            playersCount -= 1;
        }
    }
}
