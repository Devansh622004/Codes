# include<stdio.h>
# include<string.h>
void main()
{
    int i,t=0,l,m;
    char st[10]="meher";
    char sr[10]="mehera";

    l=strlen(st);
    m=strlen(sr);

    for (i = 0; st[i] != '\0' ; i++)
    {
        if(st[i]==sr[i])
        {
            t=1;
        }
        else
        {
            t=0;
        }
    }
    if(t==1 && l==m)
    {
        printf("STRINGS ARE EQUAL");
    }
    else
    {
        printf("STRINGS AREN'T EQUAL");
    }
}