#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *del_at_btwn(struct node *head, int index)
{
    struct node* p = head; 
    struct node* q; 

    int i = 0;
    while(i == index - 1)
    {
        p = p->next;
        i++;
    } 
    q = p->next;
    p->next = q->next;
    free(q);

    return head;
}

struct node *del_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

struct node *del_beg(struct node *head)
{
    struct node *ptr = head;

    head = head->next;

    free(ptr);

    return head;
}

struct node *insrt_aftr_node(struct node *head, int index)
{
    struct node *nwnode;
    struct node *ptr = head;
    nwnode = (struct node *)malloc(sizeof(struct node));

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    int da;
    printf("ENTER AN ELEMENT TO INSERT IN BETWEEN NODES\n");
    scanf("%d", &da);

    nwnode->data = da;
    nwnode->next = ptr->next;

    ptr->next = nwnode;

    return head;
}

struct node *insrt_end(struct node *head)
{
    struct node *nwnode;
    struct node *ptr = head;
    nwnode = (struct node *)malloc(sizeof(struct node));

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    int element;
    printf("\nENTER THE ELEMENT TO INSERT AT THE END OF THE LINKED LIST\n");
    scanf("%d", &element);

    nwnode->data = element;
    ptr->next = nwnode;
    nwnode->next = NULL;

    return head;
}

struct node *insrt_mid(struct node *head, int index)
{
    struct node *nwnode;
    struct node *ptr = head;
    nwnode = (struct node *)malloc(sizeof(struct node));

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    int da;
    printf("ENTER AN ELEMENT TO INSERT IN BETWEEN NODES\n");
    scanf("%d", &da);

    nwnode->data = da;
    nwnode->next = ptr->next;

    ptr->next = nwnode;

    return head;
}

struct node *insrt_beg(struct node *head)
{
    struct node *nwnode;
    nwnode = (struct node *)malloc(sizeof(struct node));

    if (nwnode == NULL)
    {
        printf("\nMemory Not Allocated !");
    }
    int da;
    printf("ENTER AN ELEMENT: ");
    scanf("%d", &da);

    nwnode->data = da;

    nwnode->next = head;
    head = nwnode;

    return head;
}

struct node *create(struct node *h, struct node *p)
{
    int element;
    printf("\n*ENTER (-1) TO STOP THE CREATION OF LINKED LIST*\n\n");
    printf("ENTER THE ELEMENT:");
    scanf("%d", &element);
    while (element != -1)
    {
        struct node *nwnode;
        nwnode = (struct node *)malloc(sizeof(struct node));

        nwnode->data = element;
        nwnode->next = NULL;

        if (h == NULL)
        {
            h = nwnode;
            p = nwnode;
        }

        else
        {
            p->next = nwnode;
            p = p->next;
        }

        printf("ENTER THE ELEMENTS:\n");
        scanf("%d", &element);
    }

    return h;
}

void traverse(struct node *z)
{
    if(z == NULL)
    {
        printf("List is empty.");
    }
    else
    {
    printf("Nodes of the circular linked list: \n");  
    
    while (z != NULL)
    {
        printf("ELEMENT: %d\n", z->data);
        z = z->next;
    }  
    }
}

void main()
{
    struct node *head, *ptr;

    head = (struct node *)malloc(sizeof(struct node));
    ptr = (struct node *)malloc(sizeof(struct node));

    head = NULL;
    ptr = NULL;

    head = create(head, ptr);

    printf("LINKED LIST: \n");
    traverse(head);

    int I;
    printf("\nENTER (1) TO INSERT AN ELEMENT AT BEGINING OF THE LINKED LIST\nENTER (0) TO NOT INSERT AN ELEMENT AT BEGINING OF THE LINKED LIST\n");
    printf("I: ");
    scanf("%d", &I);

    if (I == 1)
    {
        head = insrt_beg(head);
        printf("NOW YOUR LINKED LIST IS: \n");
        traverse(head);
    }
    else if (I == 0)
    {
        printf("\nINSERTION AT BEGINING IS NOT PERFORMED.\n");
        printf("\nYOUR LINKED LIST IS: \n");

        traverse(head);
    }

    printf("\nENTER (1) TO INSERT AN ELEMENT IN BETWEEN OF THE LINKED LIST\nENTER (0) TO NOT INSERT AN ELEMENT IN BETWEEN OF THE LINKED LIST\n");
    printf("I: ");
    scanf("%d", &I);

    if (I == 1)
    {
        int index;
        printf("\nENTER THE POSITION AT WHICH YOU WANT TO INSERT THE NODE\n");
        scanf("%d", &index);

        head = insrt_mid(head, index - 1);
        printf("NOW YOUR LINKED LIST IS: \n");
        traverse(head);
    }
    else if (I == 0)
    {
        printf("\nINSERTION AT BEGINING IS NOT PERFORMED.\n");
        printf("\nYOUR LINKED LIST IS: \n");

        traverse(head);
    }

    printf("\nENTER (1) TO INSERT AN ELEMENT AT THE END OF THE LINKED LIST\nENTER (0) TO NOT INSERT AN ELEMENT AT THE END OF THE LINKED LIST\n");
    printf("I: ");
    scanf("%d", &I);

    if (I == 1)
    {
        head = insrt_end(head);
        printf("NOW YOUR LINKED LIST IS: \n");
        traverse(head);
    }
    else if (I == 0)
    {
        printf("\nINSERTION AT BEGINING IS NOT PERFORMED.\n");
        printf("\nYOUR LINKED LIST IS: \n");

        traverse(head);
    }

    printf("\nENTER (1) TO DELETE FIRST ELEMENT  OF THE LINKED LIST\nENTER (0) TO NOT DELETE FIRST ELEMENT OF THE LINKED LIST\n");
    printf("I: ");
    scanf("%d", &I);

    if (I == 1)
    {
        head = del_beg(head);
        printf("NOW YOUR LINKED LIST IS: \n");
        traverse(head);
    }
    else if (I == 0)
    {
        printf("\nDELETION AT BEGINING IS NOT PERFORMED.\n");
        printf("\nYOUR LINKED LIST IS: \n");

        traverse(head);
    }

    printf("\nENTER (1) TO DELETE LAST ELEMENT  OF THE LINKED LIST\nENTER (0) TO NOT DELETE LAST ELEMENT OF THE LINKED LIST\n");
    printf("I: ");
    scanf("%d", &I);

    if (I == 1)
    {
        head = del_end(head);
        printf("NOW YOUR LINKED LIST IS: \n");
        traverse(head);
    }
    else if (I == 0)
    {
        printf("\nDELETION AT THE END IS NOT PERFORMED.\n");
        printf("\nYOUR LINKED LIST IS: \n");

        traverse(head);
    }

    printf("\nENTER (1) TO DELETE ELEMENT IN BETWEEN LINKED LIST\nENTER (0) TO NOT DELETE ELEMENT IN BETWEEN LINKED LIST\n");
    printf("I: ");
    scanf("%d", &I);

    int index;
    if (I == 1)
    {
        printf("\nENTER THE POSITION OF THE LINKED LIST ,YOU WANT TO DELETE\n");
        scanf("%d", &index);
        head = del_at_btwn(head, index);
        printf("NOW YOUR LINKED LIST IS: \n");
        traverse(head);
    }
    else if (I == 0)
    {
        printf("\nDELETION IN BETWEEN LINKED LIST IS NOT PERFORMED.\n");
        printf("\nYOUR LINKED LIST IS: \n");

        traverse(head);
    }
}