# include<stdio.h>
void main()
{
    FILE *f1;
    int i;
    f1=fopen("devufile.txt","w");
    for(i=1;i<=10;i++)
    {
        fprintf(f1,"%d",i);
    }
    fclose(f1);
}