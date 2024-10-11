# include<stdio.h>
int main()
{
    int a,n;
    printf("enter a no.\n");
    scanf("%d",&n);

    for(a=1;n>=1;n--)
    {
        a=a*n;
    }
    printf("%d",a);
    return 0;
}