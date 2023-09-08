# include<stdio.h>
# include<string.h>
void main()
{
    char st[20]="jai shree ram",c[20];
    int i,l;
	
	l=strlen(st);
	
    for(i=0 ; i<l ; i++)
    {
        c[i]=st[i];
        printf("%c",c[i]);
    }
}