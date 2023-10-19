#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENTS: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *inser(struct node *ptr, int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->next = ptr;
    p->data = data;
    return p;
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
    head = inser(head, 69);
    printf("UPDATED LINKED LIST: \n");
    traverse(head);

    return 0;
}