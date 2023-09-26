#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *str;

    str = malloc(20 * sizeof(char));

    if(str == NULL)
    {
        printf("SIZE IS NOT ALLOCATED DYNAMICALLY\n");
    }
    else
    {
        strcpy(str,"JAI MEHER BABA KI");
    }

    printf("DYNAMICALLY ALLOCATED MEMORY CONTENT IS: %s\n", str);

    free(str);

    printf("CONTENT AFTER USING free() IS: %s\n", str);

}