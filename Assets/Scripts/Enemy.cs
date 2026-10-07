/** Original script credit by Tutorial Man
*   at https://medium.com/@IAMFANTASYSTORYTELLER/how-to-build-a-simple-ai-enemy-in-unity-beginner-tutorial-2025-7079fb0be555
*/

using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    private NavMeshAgent agent;
    private Transform player;
    public LayerMask whatIsGround, whatIsPlayer;
    // Patroling
    private Vector3 walkPoint;
    bool walkPointSet;
    public float walkPointRange;
    // Attacking
    public float timeBetweenAttacks;
    private bool alreadyAttacked;
    // States
    public float sightRange, attackRange;
    private bool playerInSightRange, playerInAttackRange;

    private GameObject[] players;
    private float dist = float.PositiveInfinity;
    public int hp = 1;

    private void Awake()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        agent = GetComponent<NavMeshAgent>();
    }

    private void GetClosestPlayer()
    {
        foreach (var p in players)
        {
            var d = (transform.position - p.transform.position).sqrMagnitude;
            if(d < dist)
            {
                player = p.transform;
                dist = d;
            }
        }
    }

    private void Update()
    {
        if (hp < 1) {   Destroy(this); }
        GetClosestPlayer();
        playerInSightRange = Physics.CheckSphere(transform.position, sightRange, whatIsPlayer);
        playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);
        if (!playerInSightRange && !playerInAttackRange) Patroling();
        if (playerInSightRange && !playerInAttackRange) ChasePlayer();
        if (playerInAttackRange && playerInSightRange) AttackPlayer();
    }
    private void Patroling()
    {
        if (!walkPointSet) SearchWalkPoint();
        if (walkPointSet)
            agent.SetDestination(walkPoint);
        Vector3 distanceToWalkPoint = transform.position - walkPoint;
        // Walkpoint reached
        if (distanceToWalkPoint.magnitude < 1f)
            walkPointSet = false;
    }
    private void SearchWalkPoint()
    {
        float randomZ = Random.Range(-walkPointRange, walkPointRange);
        float randomX = Random.Range(-walkPointRange, walkPointRange);
        walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
        if (Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
            walkPointSet = true;
    }
    private void ChasePlayer()
    {
        agent.SetDestination(player.position);
    }
    private void AttackPlayer()
    {
        agent.SetDestination(transform.position);
        transform.LookAt(player);
        if (!alreadyAttacked)
        {
            /// Attack code here
            /*
            Rigidbody rb = Instantiate(projectile, transform.position + transform.forward, Quaternion.identity).GetComponent<Rigidbody>();
            rb.AddForce(transform.forward * 32f, ForceMode.Impulse);
            rb.AddForce(transform.up * 8f, ForceMode.Impulse);
            */
            alreadyAttacked = true;
            Invoke(nameof(ResetAttack), timeBetweenAttacks);
        }
    }
    private void ResetAttack()
    {
        
        alreadyAttacked = false;
    }
}
