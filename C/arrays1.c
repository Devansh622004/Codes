# include<stdio.h>
void main()
{
    int a[5],i,s=0;
    printf("enter 5 no.");

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        s=s+a[i];
    }
    printf("sum is %d", s);
    
}
