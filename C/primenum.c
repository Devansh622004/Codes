# include<stdio.h>
int main()
{
    int n,p=1,i;
    printf("enter a num\n");
    scanf("%d",&n);

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            p=0;
        }
    }
    if(p)
    {
        printf("%d is a prime num\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}