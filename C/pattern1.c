# include<stdio.h>
void main()
{
    int i, j, n;
     
    printf("ENTER THE HIGHT OF THE MARIO WALL\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 1; j <= i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}