# include<stdio.h>
# include<ctype.h>
void main()
{
    char a[20]="RaM";
    int l=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(isupper(a[i]))
        {
            l++;
            a[i]=tolower(a[i]);
        }
        puts(a);
    }
}