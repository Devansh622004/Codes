#include <stdio.h>
#include <string.h>
void main()
{
    char s[] = {"jai", "meher", "baba", "ki"};
    char x;

    printf("ENTER A STRING YOU WANT TO SEARCH\n");
    scanf("%s", x);

    for(int i = 0; i < 5; i++)
    {
        if(strcmp(s[i], x) == 0)
        {
            printf("THE SEARCH IS SUCCESSFUL\n");
        }
    }
    printf("THE SEARCH IS UNSUCCESSFUL\n");
}