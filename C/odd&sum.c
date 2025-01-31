# include<stdio.h>
void main()
{
    int x,n,sum=0;
    printf("enter a no.\n");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
            sum = sum + x;
        }
    }
    printf("%d",sum);
}