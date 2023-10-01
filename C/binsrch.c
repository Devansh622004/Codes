#include <stdio.h>

void search(int a, int beg, int end)
{
    int centre = beg + end / 2;
    
}

void main()
{
    int a[20], n, x;
    printf("ENTER THE NO. ELEMENTS:\n");
    scanf("%d", &n);

    printf("ENTER ELEMENTS:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE ELEMENT YOU WANNA SEARCH\n");
    scanf("%d", &x);
}