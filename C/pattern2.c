# include <stdio.h>

int main(void)
{
    int i, j, t, n;

    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while(n < 1 || n > 8);

    for(i = 1; i <= n; i++)
    {
        for(t = i; t < n; t++)
        {
            printf(" ");
        }
        for(j = 1; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}