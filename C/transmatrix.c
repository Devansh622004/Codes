# include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j;

    printf("ENTER THE ELEMENTS OF FIRST MATRIX\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("THE TRANSPOSE OF THE MATRIX IS:-\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\n",b[i][j]);
        }
    }
}