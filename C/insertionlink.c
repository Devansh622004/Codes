#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insrt(struct node *head)
{
    struct node *nwnode;
    nwnode = (struct node *)malloc(sizeof(struct node));
    int a;
    printf("ENTER THE DATA YOU WANT TO INSERT: \n");
    scanf("%d", &a);

    if (head == NULL)
    {
        nwnode->data = a;
        nwnode->next = NULL;
        head = nwnode;
        return head;
    }

    return head;
}

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    struct node *head;

    head = NULL; // head IS A SIMPLE POINTER OF (struct node*) TYPE SO THAT IT CAN STORES THE ADDRESS OF NODE OF TYPE (STRUCT NODE*).
    // HEAD IS A SIMPLE BLOCK . THERE IS NOT ANY NEXT OR DATA PART OF THE head EXISTS.

    int n;
    printf("ENTER THE NO. OF NODES YOU WANT TO INSERT:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        head = insrt(head);
        display(head);
    }
}