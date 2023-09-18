#include <stdio.h>
void main()
{
    int i, j;
    int a[3][3], b[3][3], c[3][3];

    printf("ENTER THE ELEMENTS OF FIRST MATRIX\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("ENTER THE ELEMENTS OF SECOND MATRIX\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("SUM OF THE THIRD MATRIX\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\n", c[i][j]);
        }
    }
}