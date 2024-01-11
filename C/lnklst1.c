#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void trvrsprint(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENTS LIST:%d\n", ptr->data);
        ptr = ptr -> next;
    }
}

void main()
{
    struct node *head, *n2, *n3;
    head = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = NULL;

    trvrs(head);
}