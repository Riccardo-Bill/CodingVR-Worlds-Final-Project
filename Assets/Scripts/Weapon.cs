using UnityEngine;



public class Weapon : MonoBehaviour
{

    [SerializeField] private int damage = 1;

    [SerializeField] private int attackTime = 1;

    private bool ready = true;
    private float timer = 0;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy") && ready)
        {
            collision.gameObject.GetComponent<Enemy>().hp -= damage;
        }
    }

    void Update()
    {
        timer += Time.deltaTime;
        if(timer >= attackTime)
        {
            ready = true;
            timer -= attackTime;
        }
    }
    
}
