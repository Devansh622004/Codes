# include<stdio.h>
int main()
{
    int num,rem,rev=0,x;
    printf("Enter No.\n");
    scanf("%d",&num);
    x=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse is %d\n",rev);
    if(x==rev)
    {
    printf("PALINDROME\n");
    }
    else
    {
        printf("not a PALINDROME\n");
        }
    return 0;
}
