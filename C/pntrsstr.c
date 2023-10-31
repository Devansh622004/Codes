# include<stdio.h>
void main()
{
    char *st = "jai meher baba";
    
    for(int i = 0; i < 15; i++)
    {
        printf("%s\n", (st + i));
    }
}