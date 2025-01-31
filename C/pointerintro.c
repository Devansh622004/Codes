# include<stdio.h>
void main()
{
    int a=10;
    int *x;
    x= &a;
    printf("The address of a is %d\n", *x);
}