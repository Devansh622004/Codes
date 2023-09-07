# include<stdio.h>
void main()
{
    char ar[10];
    scanf("%[^\n]%*c", ar);
    printf("%s",ar);
}