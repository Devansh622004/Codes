#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *second, *third, *fourth, *ptr;
    int a, x;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;

    scanf("%d", &x);

    while (ptr != NULL)
    {
        if (ptr->data == x)
        {
            printf("THE SEARCING FOR DESIRED NO. IS SUCCESSFUL\n");
        }
        else
        {
            printf("SEARCH IS UNSUCCESSFUL\n");
        }
        ptr = ptr->next;
    }
    return 0;
}