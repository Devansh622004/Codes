# include<stdio.h>
int main()
{
    int a,sum;
    for(a=1,sum=0;a<=20;a++)
    {
        if(a%2!=0)
        {
    printf("%d\n",a);
    sum=sum+a;
    }

    }
    printf("%d\n",sum);
    return 0;
}