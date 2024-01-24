#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

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
            nwnode->next = h;
        }

        else
        {
            p->next = nwnode;
            p = p->next;
            p->next = h;
        }

        printf("ENTER THE ELEMENTS:\n");
        scanf("%d", &element);
    }

    return h;
}

void traverse(struct node *z)
{
    struct node *ptr = z;
    if(z == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Node of the circular linked list:\n");
    do
    {
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != z);

    printf("\n");
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
}