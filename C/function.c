# include<stdio.h>
void SUM(int);
int main()
{
    int a;
    printf("enter a\n");
    scanf("%d", &a);
    SUM(a);
    return 0;
    }

    void SUM(int x)
    {
    int sum;
    for(x,sum=0;x>=1;x--)
    {
        printf("%d\n", x);
        sum=sum+x;
    }            
    printf("%d\n", sum);
}