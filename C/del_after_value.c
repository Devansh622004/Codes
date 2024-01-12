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

struct node *del_after_value(struct node *ptr, int value)
{
    struct node *p = ptr;
    struct node *q = ptr->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data = value)
    {
        p->next = q->next;
        free(q);
    }

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

    int value;
    printf("ENTER THE VALUE AFTER WHICH YOU WANT TO DELETE THE NODE: %d\n", value);
    scanf("%d", &value);
    head = del_after_value(head, value);

    printf("ELEMENTS BEFORE DELETION: \n");
    trvrse(head);
}