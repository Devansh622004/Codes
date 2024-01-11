#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr) // TRAVERSING
{
    while (ptr != NULL)
    {
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertAtend(struct node *head, int data)
{
    struct node *nwnode = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = nwnode;
    
    nwnode->data = data;
    nwnode->next = NULL;
    return head;
}

int main()
{
    struct node *head, *sec, *third, *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 23;
    head->next = sec;

    sec->data = 3;
    sec->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    traverse(head);

    int a;
    printf("ENTER THE DATA ELEMENT WHICH YOU WANT TO INSERT AT THE END: \n");
    scanf("%d", &a);

    head = insertAtend(head, a);
    printf("UPDATED LINKED LIST: \n");
    traverse(head);

    return 0;
}