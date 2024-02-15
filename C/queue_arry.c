#include <stdio.h>
#define N 8

int arr[N];
int front = -1;
int rear = -1;
int size = 0;

void enqueue()
{
    if (size == N)
    {
        printf("QUEUE FULL\n");
    }
    else
    {
        int n;
        printf("HOW MANY ELEMENTS YOU WANT TO INSERT? \n");
        scanf("%d", &n);
        if (n <= N)
        {
            int i = 0;
            while (i < n)
            {
                int element;
                printf("ENTER ELEMENTS: ");
                scanf("%d", &element);

                rear++;
                arr[rear] = element;

                if(front < 0)
                {
                    front++;
                }
                
                size++;
                i++;
            }
        }
    }
}

void dequeue()
{
    if(size == 0)
    {
        printf("QUEUE IS EMPTY\n");
    }

    else
    {
        front = front + 1;
        size--;
    }

}

int main()
{
    enqueue();
    return 0;
}