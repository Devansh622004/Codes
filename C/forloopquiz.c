# include <stdio.h>

int main()
{
    int a;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for( a = 0; a < n; a++)
    {
    printf(" %d\n", a);
    }
    return 0;
}