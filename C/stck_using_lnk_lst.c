#include <stdio.h>
#include <stdlib.h>

struct node *top;
struct node
{
    int data;
    struct node *next;
};

void PEEK()
{
    printf("TOP MOST ELEMENT OF THE ELEMENT IS: %d", top->data);
}

void PUSH()
{
    int element, n;

    printf("ENTER THE NO. OF ELEMENTS\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        struct node *nwnode = (struct node *)malloc(sizeof(struct node));
        printf("ENTER AN ELEMENT\n");
        scanf("%d", &element);

        nwnode->data = element;
        nwnode->next = top;
        top = nwnode;
    }
}

void POP()
{
    printf("POP(ed) ELEMENT IS: %d\n", top->data);
    top = top->next;
}

void travrse()
{
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("ELEMENTS: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    int I, J;
    PUSH();
    travrse();

    printf("ENTER (1) TO POP\nENTER (0) TO NOT POP\n");
    printf("I: ");
    scanf("%d", &I);

    if (I == 1)
    {
        POP();
        printf("STACK AFTER POP() IS: \n");
        travrse();
    }
    else
    {
        printf("STACK: \n");
        travrse();
    }

    printf("ENTER (1) TO PEEK\nENTER (0) TO NOT PEEK\n");
    printf("J: ");
    scanf("%d", &J);

    if (J == 1)
    {
        PEEK();
    }
    else
    {
        printf("YOUR STACK IS: \n");
        travrse();
    }
}
