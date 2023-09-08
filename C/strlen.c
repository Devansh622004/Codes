# include<stdio.h>
void main()
{
    char ar[20]="jai meher baba";
    int t=0;

    for(int i = 0 ; ar[i] != '\0' ; i++)
    {
        t++;
    }
    printf("%d\n",t);
}