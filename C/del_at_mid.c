#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void trvrse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENTS: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *del_at_mid(struct node *ptr, int index)
{
    struct node *p = ptr;
    struct node *q = ptr->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return ptr;
}

void main()
{
    struct node *head, *sec, *third, *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = sec;

    sec->data = 20;
    sec->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    printf("\nELEMENTS BEFORE DELETION: \n");
    trvrse(head);

    head = del_at_mid(head, 2);

    printf("ELEMENTS BEFORE DELETION: \n");
    trvrse(head);
}