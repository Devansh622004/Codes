# include<stdio.h>
# include<string.h>
# include<ctype.h>

void main()
{
    char st[10];
    printf("Enter a string\n");
    scanf("%s", st);

    for(int i = 0; i < strlen(st); i++)
    {
        printf("%c", toupper(st));
    }
    printf("\n");
}