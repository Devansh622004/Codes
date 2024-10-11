# include<stdio.h>
int main()
{
    int a,n;
    printf("enter a no.\n");
    scanf("%d",&n);

    for(a=1;a<=n;n--)
    {
        a=a*n;
    }
    printf("factorial is %d\n",a);

    
    return 0;
}