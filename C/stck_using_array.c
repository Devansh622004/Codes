#include <stdio.h>
#define N 10

int arr[N];
int top = 0;

void POP()
{
    if (top == 0)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        top--;
        printf("POP(ed) ELEMENT IS: %d", arr[top]);
    }
}

void PUSH()
{
    int element, el, i;
    printf("ENTER THE NO. OF ELEMENTS: ");
    scanf("%d", &el);
    for (i = 0; i < el; i++)
    {
        if (top == N)
        {
            printf("PUSH operation can't possible\n");
            return;
        }
        printf("Enter element:\n");
        scanf("%d", &element);
        arr[top] = element;
        top++;
    }
}

void traverse()
{
    int i;
    if (top == 0)
    {
        printf("THE STACK IS EMPTY\n");
    }
    else
    {
        for (i = top - 1; i >= 0; i--)
        {
            printf("ELEMENTS: %d\n", arr[i]);
        }
    }
}

void main()
{
    int Push, Traver, Pop, Peek;
    printf("ENTER (1) TO PERFORM PUSH() OPERATION\nENTER (0) TO NOT PERFORM PUSH() OPERATION\n");
    printf("I: ");
    scanf("%d", &Push);
    if (Push == 1)
    {
        PUSH();
    }
    else
    {
        printf("PUSH() OPERATION IS NOT PERFORMED AS PER YOUR DESIRE\n");
    }

    printf("ENTER (1) TO PERFORM Traverse() OPERATION\nENTER (0) TO NOT PERFORM traverse() OPERATION\n");
    printf("I: ");
    scanf("%d", &Traver);
    if (Traver == 1)
    {
        traverse();
    }
    else
    {
        printf("Traverse() OPERATION IS NOT PERFORMED AS PER YOUR DESIRE\n");
    }

    printf("ENTER (1) TO PERFORM POP() OPERATION\nENTER (0) TO NOT PERFORM traverse() OPERATION\n");
    printf("I: ");
    scanf("%d", &Pop);
    if (Pop == 1)
    {
        POP();
    }
    else
    {
        printf("Pop() OPERATION IS NOT PERFORMED AS PER YOUR DESIRE\n");
    }
}