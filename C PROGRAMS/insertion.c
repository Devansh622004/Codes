# include<stdio.h>
void main()
{
    int i,a[10]={12,14,16,5,9},s=5,n,p;
    printf("enter the no. u want to insert\nalso the desired position\n");
    scanf("%d%d",&n,&p);
    
    for(i=0;i<s;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }

    for(i=s-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }

    a[p-1]=n;
    s++;

    for(i=0;i<s;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}