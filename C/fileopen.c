# include<stdio.h>
int main()
{
    FILE *f1;
    int i;
    f1 = fopen("abc.txt","r");
    while(!feof(f1))
    {
        fscanf(f1,"%d\n",i);
        printf("%d\n",i);
    }
    fclose(f1);
}