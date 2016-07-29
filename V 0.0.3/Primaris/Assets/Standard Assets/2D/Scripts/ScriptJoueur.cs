using UnityEngine;
using System.Collections;

public class ScriptJoueur : MonoBehaviour {
    /// <summary>
    /// 1 - La vitesse de déplacement
    /// </summary>
    public int speed = 10;

    // 2 - Stockage du mouvement
    private Vector2 movement;
    bool facingLeft;

    void Start()
    {
        facingLeft = GetComponent<SpriteRenderer>().flipX;
    }

    void Update()
    {
        // 3 - Récupérer les informations du clavier/manette
        float inputX = Input.GetAxis("Horizontal");

        // 4 - Calcul du mouvement
        movement = new Vector2(
          speed * inputX,
          GetComponent<Rigidbody2D>().velocity.y);

        if (inputX < 0 && !facingLeft)
        {
            Flip();
        }
        else if (inputX > 0 && facingLeft)
        {
            Flip();
        }
    }

    void FixedUpdate()
    {
        // 5 - Déplacement
        GetComponent<Rigidbody2D>().velocity = movement;
    }

    void Flip()
    {
        facingLeft = !facingLeft;
        Vector3 theScale = transform.localScale;
        theScale.x *= -1;
        transform.localScale = theScale;
    }
}
