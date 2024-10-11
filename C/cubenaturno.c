# include<stdio.h>
void main()
{
    int n,a,cube;
    printf("enter no.:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        cube = a*a*a;
        printf("Number is: %d and cube is: %d ",a,cube);
        printf("\n");
    }
}