using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour {
    //movement variable
    public int speed = 10;
    public int jumpSpeed = 10;
    private Vector2 movement;
    bool facingLeft;

    //grounded variable
    private bool grounded = true;
    public Transform groundCheck;
    float groundRadius = 0.2f;
    public LayerMask whatIsGround;

    //animation variable
    private Animator animator;
    private float ValMinMove = 0.2f;

    //rigidbody component
    private Rigidbody2D rigid;

    void Start()
    {
        animator = GetComponent<Animator>();
        facingLeft = GetComponent<SpriteRenderer>().flipX;
        rigid = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        //jump !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! hauteur de saut variable
        if (Input.GetButtonDown("Jump") && grounded)
        {
            rigid.AddForce(Vector2.up * jumpSpeed);
        }
    }

    void FixedUpdate()
    {
        grounded = Physics2D.OverlapCircle(groundCheck.position, groundRadius, whatIsGround);

        float inputX = Input.GetAxis("Horizontal");

        rigid.velocity = new Vector2(speed * inputX, rigid.velocity.y); ;

        if (inputX < 0 && !facingLeft)
        {
            Flip();
        }
        else if (inputX > 0 && facingLeft)
        {
            Flip();
        }

        if (rigid.velocity.magnitude <= ValMinMove)
        {
            animator.SetBool("moving", false);
        }
        else animator.SetBool("moving", true);
    }

    void Flip()
    {
        facingLeft = !facingLeft;
        Vector3 theScale = transform.localScale;
        theScale.x *= -1;
        transform.localScale = theScale;
    }
}
