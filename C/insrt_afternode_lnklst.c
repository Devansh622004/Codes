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

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

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
    struct node *n;
    printf("ENTER THE DATA ELEMENT WHICH YOU WANT TO INSERT AFTER A SPECIFIC NODE: \n");
    scanf("%d", &a);

    printf("ENTER THE NO. OF NODE AFTER WHICH YOU WANT TO INSERT YOUR NEW NODE: \n");
    printf("ENTER ONE AMONG [ 1, 2, 3, 4]\n");
    scanf("%s", &n);

    head = insertAfterNode(head, n, a);
    printf("UPDATED LINKED LIST: \n");
    traverse(head);

    return 0;
}