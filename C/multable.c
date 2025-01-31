# include<stdio.h>
void main()
{
    int x,MUL,n;
    printf("enter a no:\n");
    scanf("%d",&n);
    for(x=1;x<=10;x++)
    {
      MUL = n*x;
      printf("%dX%d=%d\n",x,n,MUL);
    }
}