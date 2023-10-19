#include <stdio.h>
int fact(int);
void main()
{
    int x, n;
    printf("ENTER A NO. TO FIND ITS FACTORIAL: \n");
    scanf("%d", &n);

    x = fact(n);
    printf("FACTORIAL OF %d IS %d", n, x);
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * fact(n - 1));
}