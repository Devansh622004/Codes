# include<stdio.h>
void main()
{
    int a[10],s,n,i,j,t;
    printf("ENTER SIZE OF ARRAY\n");
    scanf("%d",&s);
    printf("ENTER ELEMENTS OF ARRAY\n");
    
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("ELEMENTS OF THE ARRAY ARE:-\n");
    
    for(i=0;i<s;i++)
    {
        printf("%d\n",a[i]);
    }
// SORTING PROCESS 
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nSORTED ARRAY IS:-\n");
    for(i=1;i<=s;i++)
    {
        printf("%d\n",a[i]);
    }


}