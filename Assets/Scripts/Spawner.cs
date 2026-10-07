using Unity.VisualScripting;
using UnityEngine;

public class Spawner : MonoBehaviour
{

    [SerializeField] private Transform[] spawnPoints;

    [SerializeField] private GameObject[] enemies;

    //Spawns an Enemy at spawnPoint
    private void SpawnEnemy(int spawnPoint, int enemy) {Instantiate(enemies[enemy], spawnPoints[spawnPoint]);} //TODO: variate spawn points

    //Start an enemy horde
    private void StartHorde(int n)
    {
        switch (n)
        {
            case 0: //win
                return;
            case 1: //horde n
                SpawnEnemy(1, 2);
                SpawnEnemy(2, 1);
                return;
            case 2:
                return;
            case 3:
                return;
            case 4:
                return;
            case 5:
                return;
            default: //error
                return;
        }
    }

    private void Start()
    {
        StartHorde(1);
    }
}
