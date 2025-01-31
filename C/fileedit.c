# include<stdio.h>
void main()
{
    FILE *f1;
    f1 = fopen("devufile.txt","w");
    fputs("my name is devansh and i am fine",f1);
    fclose(f1);
}