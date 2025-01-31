# include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d", &a,&b,&c);

    if(a>=b && a>=c)
    {
        printf("a is greatest among three\n");
    }
    if(a<=b && a<=c)
       {
         printf("a is smallest among three\n");
       }
    if(b>=a && b>=c)
    {
        printf("b is greatest among three\n");
    }
    if(b<=a && b<=c)
    {
        printf("b is smallest among three\n");
    }
    if(c>=a && c>=b)
    {
        printf("c is greatest among three\n");
    }
    if(c<=a && c<=b)
    {
        printf("c is smallest among three\n");
    }
    
    
    return 0;
}