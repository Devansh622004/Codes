# include<stdio.h>

struct node{
    int data;
    struct node* next;
};

void main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(struct node));

}