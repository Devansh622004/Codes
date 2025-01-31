# include<stdio.h>
int main()
{
    int a[50],i,item,n,flag=0;
    printf("enter no. of elements upto 50");
    scanf("%d", &n);

    printf("\n enter %d elements", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n enter item to be search");
    scanf("%d", &item);
    for(i=0 ; i<n ; i++)
    {
        if(item == a[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n search at %d", i+1);
    }
    else
    {
        printf("\nitem not search");
    }
    return 0;
}