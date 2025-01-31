# include<stdio.h>
struct party
{
    int samosa;
    int drink;
};

void main()
{
    int n,i,c,t,x,TE;
    struct party p[20],s;
    printf("enter the no. of friends\n");
    scanf("%d",&n);

    s.samosa = 10;

    s.drink = 20;
    printf("enter no. of samosa\n");
    scanf("%d",&c);
    printf("enter no. of drink\n");
    scanf("%d",&t);
    TE = s.samosa*c+s.drink*t;
    x=TE/n;
    
    for(i=0;i<n;i++)
    {printf("expenses = %d\n", x);
}
}