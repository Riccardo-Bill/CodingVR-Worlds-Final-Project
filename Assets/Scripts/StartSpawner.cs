using UnityEngine;

public class StartSpawner : MonoBehaviour
{

    [SerializeField] private GameObject spawner;
    private int totalPlayers;
    private int playersCount = 0;

    private void Update()
    {
        totalPlayers = GameObject.FindGameObjectsWithTag("Player").Length;
    }

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
