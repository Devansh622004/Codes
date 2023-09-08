# include<stdio.h>
# include<string.h>
void main()
{
    char ar[20],st[20];
    printf("ENTER FIRST STRING\n");
    gets(ar);
    printf("ENTER second STRING\n");
    gets(st);

    int m=strlen(ar),i,j;
    int l=strlen(st);
    int x=l+m;

    for(i=m,j=0;i<x;i++,j++)
    {
        ar[i]=st[j];
    }
    puts(ar);
}