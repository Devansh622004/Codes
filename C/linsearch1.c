#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int x, t = 0;
    printf("ENTER A ONE DIGIT NO., YOU WANTS TO SEARCH\n");
    scanf("%d", &x);

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == x)
        {
            printf("%d is existed at %dth position in the array\n", x, i+1);  
        }
    }
}