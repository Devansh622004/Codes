#include <stdio.h>
#include <stdlib.h>

struct node *front = NULL;
struct node *rear = NULL;

struct node
{
    int data;
    struct node *next;
};

int isempty()
{
    if (front == NULL && rear == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek()
{
    if (isempty())
    {
        printf("PEEK OPERATION CAN'T POSSIBLE\n");
    }
    else
    {
        printf("THE TOP MOST ELEMENT OF QUEUE IS: %d\n", front->data);
    }
}

void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("DELETION CAN'T POSSIBLE\n");
    }
    else
    {
        struct node *ptr = front;
        front = front->next;
        free(ptr);
    }
}

void enqueue()
{
    int element;
    printf("ENTER (-1) TO STOP THE INSERTION\n");
    printf("ENTER AN ELEMENT: ");
    scanf("%d", &element);

    while (element != -1)
    {
        struct node *nwnode = (struct node *)malloc(sizeof(struct node));

        nwnode->data = element;
        nwnode->next = NULL;

        if (front == NULL && rear == NULL)
        {
            front = nwnode;
            rear = nwnode;
        }
        else
        {
            rear->next = nwnode;
            rear = nwnode;
        }

        printf("ENTER THE ELEMENTS:\n");
        scanf("%d", &element);
    }
}

void trvrse()
{
    struct node *ptr = front;
    if (isempty())
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        struct node *ptr = front; //  IN QUEUES TRAVERSING IS DONE THROUGH ( FRONT ).
        while (ptr == NULL)
        {
            printf("ELEMENTS: %d", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main()
{
    printf("SELECT ONE OF THE OPERATION FROM THE BELOW GIVEN CHOICES:\n");
    printf("i) INSERTION\n");
    printf("ii) TRAVERSE\n");
    printf("iii) DELETION\n");
    printf("iv) PEEK\n");

    int I;
    printf("\nENTER (1) FOR INSERTION\nENTER (2) FOR TRAVERSE\nENTER (3) FOR DELETION\nENTER (4) FOR PEEK\n");
    printf("QUEUE: ");
    scanf("%d", &I);

    // do
    // {
        switch (I)
        {
        case 1:
            enqueue();
            break;
        case 2:
            trvrse();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            peek();
            break;
        default:
            printf("ACCESS DENIED\n");
        }
    // } while (I != '1' || I != '2' || I != '3' || I != '4');
}