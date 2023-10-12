# include<stdio.h>
# include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}nd;

void insrt_beg(nd *ptr)
{
    while(ptr != NULL)
    {
    printf("DATA ELEMENTS ARE: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

// void getdata()
// {
//     int val;
//     printf("ENTER THE DATA ITEM OF NEWNODE\n");
//     scanf("%d", &val);
// }

void main()
{
    nd *head, *sec, *third, *fourth, *newnode;
    int val;

    newnode = (nd *)malloc(sizeof(nd));
    head = (nd *)malloc(sizeof(nd));
    sec = (nd *)malloc(sizeof(nd));
    third = (nd *)malloc(sizeof(nd));
    fourth = (nd *)malloc(sizeof(nd));

    head->data = 2;
    head->next = sec;

    sec->data = 23;
    sec->next = third;

    third->data = 26;
    third->next = fourth;

    fourth->data = 29;
    fourth->next = NULL;

    insrt_beg(head);

    printf("ENTER THE DATA ITEM OF NEWNODE\n");
    scanf("%d", &val);

    newnode->data = val;
    newnode->next = head;

    insrt_beg(newnode);
    
}