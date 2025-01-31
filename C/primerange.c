# include<stdio.h>
int isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
        return 1;
    
}

    int main()
    {
        int n1,n2;
        printf("enter the range\n");
        scanf("%d%d",&n1,&n2);

        printf("the prime num b/w %d and %d are :\n",n1,n2);
        for(int i=n1;i<=n2;i++)
        {
            if(isprime(i))
            {
                  printf("%d\n",i);
            }
        }
        return 0;
    }
    
