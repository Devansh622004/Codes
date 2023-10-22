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

struct node *insrt_beg(struct node *ptr, int data) // INSERTION AT BEGINING
{
    struct node *nwnode;
    nwnode = (struct node *)malloc(sizeof(struct node));
    nwnode->next = ptr;
    nwnode->data = data;
    return nwnode;
}

struct node *insrtbtw(struct node *ptr, int data, int index) // INSERTION IN END
{
    struct node *nwnode;
    struct node *p = ptr;
    nwnode = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    nwnode->data = data;
    nwnode->next = p->next;
    p->next = nwnode;
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

    int x;
    printf("ENTER A DATA ELEMENT YOU WANT TO INSERT AT THE BEG: \n");
    scanf("%d", &x);
    head = insrt_beg(head, x);

    printf("UPDATED LINKED LIST: \n");
    traverse(head);
    
    return 0;
}