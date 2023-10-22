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

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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

    int a, p;
    printf("ENTER THE NO. & THE POSITION WHERE YOU WANT TO INSERT YOUR NODE: \n");
    scanf("%d\n%d", &a, &p);

    head = insertAtIndex(head, a, p);
    printf("UPDATED LINKED LIST: \n");
    traverse(head);

    return 0;
}