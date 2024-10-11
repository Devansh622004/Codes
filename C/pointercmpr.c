# include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p,i;
    p=a;
    for(i=0;i<5;i++)
    {
        printf("%d\n", *p);
        p++;
    }
}