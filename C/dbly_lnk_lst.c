#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *create(struct node *head, struct node *tail)
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

        if (head == NULL)
        {
            head = nwnode;
            tail = nwnode;
            nwnode->prev = NULL;
        }

        else
        {
            tail->next = nwnode;
            nwnode->prev = tail;
            tail = tail->next;
        }
        printf("ENTER THE ELEMENTS:\n");
        scanf("%d", &element);
    }
    return head;
}

void traverse(struct node *z)
{
    struct node *ptr = z;
    if(ptr == NULL)
    {
        printf("List is empty.");
        return;
    }
    else
    {
    printf("Nodes of the Doubly linked list: \n");  
    while (ptr != NULL)
    {
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }  
    }
}

void main()
{
    struct node *head, *tail;
    head = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head = NULL;
    tail = NULL;

    head = create(head, tail);
    traverse(head); 
}