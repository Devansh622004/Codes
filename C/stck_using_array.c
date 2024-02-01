# include<stdio.h>
# define N 10

int arr[N];
int top = 0;

void PUSH()
{
    int element;
    if(top == N)
    {
        printf("PUSH operation can't possible\n");
    }
    else
    {
        printf("ENTER THE ELEMENT: ");
        scanf("%d", &element);
        arr[top] = element;
        top++;
    }
}

void traverse()
{
    if(top == 0)
    {
        printf("THE STACK IS EMPTY\n");
    }
    else
    {
        for(int i = top; i > 0; i--)
        {
            printf("ELEMENTS: %d\n", arr[top]);
        }
    }
}

void main()
{
    int Push, Traverse, Pop, Peek;
    printf("ENTER (1) TO PERFORM PUSH() OPERATION\nENTER (1) TO NOT PERFORM PUSH() OPERATION\n");
    printf("I: ");
    scanf("%d", &Push);
    if(Push == 1)
    {
        PUSH();
    }
    else
    {
        printf("PUSH() OPERATION IS NOT PERFORMED AS PER YOUR DESIRE\n");
    }

    printf("ENTER (1) TO PERFORM Traverse() OPERATION\nENTER (1) TO NOT PERFORM traverse() OPERATION");
    printf("I: ");
    scanf("%d", &Traverse);
    if(Traverse == 1)
    {
        traverse();
    }
    else
    {
        printf("Traverse() OPERATION IS NOT PERFORMED AS PER YOUR DESIRE\n");
    }

}