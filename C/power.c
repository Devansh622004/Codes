#include<stdio.h>

int main()
{
    int N, n;
    double result=1;
    printf("Enter the value of N: \n");
    scanf("%d", &N);
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    while(n != 0)
    {
        result *= N;
        --n;
    }
    printf("Answer = %.0Lf", result);
    return 0;

}