# include<stdio.h>
# include<string.h>
void main()
{
    char st[10];
    printf("Enter a string\n");
    scanf("%s", st);

    for(int i = 0; i < strlen(st); i++)
    {
        if(st[i] >= 'a' && st[i] <= 'z')
        {
            printf("%c", st[i] - 32);
        }
        else
        {
            printf("%c", st[i]);
        }
    }
    printf("\n");
}