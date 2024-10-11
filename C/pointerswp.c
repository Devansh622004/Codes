# include<stdio.h>
 SWAP(int*,int*);
void main()
{
    int a,b;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("%d\n%d\n",&a,&b);
    SWAP(&a,&b);
 SWAP(*x,*y);
}
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
