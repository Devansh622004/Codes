# include<stdio.h>
void main()
{
    int item,i;
    int ar[10];

    printf("ENTER ELEMENTS OF ARRAY\n");
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&ar[i]);
    }

    printf("ELEMENTS OF ARRAY ARE:-\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",ar[i]);
    }
}