#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *insert(nd *ptr)
{
    int val;
    nd *newnode = (nd *)malloc(sizeof(nd));
    printf("ENTER THE DATA ITEM: ");
    scanf("%d", &val);
    newnode->data = val;
    newnode->next = ptr;
    ptr = newnode;
    return ptr;
}

void show(nd *ptr)
{
    while (ptr != NULL)
    {
        printf("DATA ITEMS ARE: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    int flag = 0;
    char choice, cont;
    nd *head = NULL;

    while (flag == 0)
    {
        printf("\nPress [i] to insert\nPress [s] to show\nEnter choice: ");
        scanf(" %c", &choice);

        if (choice == 'i' || choice == 'I')
        {
            head = insert(head);
        }

        if (choice == 's' || choice == 'S')
        {
            show(head);
        }

        printf("DO YOU WANT TO CONTINUE [Y/N]\n");
        scanf(" %c", &cont);

        if (cont == 'n' || cont == 'N')
        {
            flag = 1;
        }
    }
}