# include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;
    
    head->data = 23;
    head->next = third;

    head->data = 28;
    head->next = NULL;

}