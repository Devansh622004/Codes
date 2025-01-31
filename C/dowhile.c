# include <stdio.h>
int main()
{
    int x = 0;
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    do{
    printf("The number is %d\n", x+1);
    x++;
    }
    while(x<n);
    return 0;
}
