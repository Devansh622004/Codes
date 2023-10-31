#include <stdio.h>
void main()
{
    char st[] = "jai baba";
    printf("case 1: %p\n", st);

    char *s = "jai meher baba";
    // printf("case 2: %p\n", s);
    // printf("case 3: %s\n", s);
    // printf("case 4: %s\n", *s);

    // printf("case 5: %s\n", s[0]);
    // printf("case 15: %p\n", &s[0]);

    printf("ADRESSES OF EACH CHARACTERS IN THE STRING (s)\n");
    for (int i = 0; i < 15; i++)
    {
        printf("case %d: %p\n", i, &s[i]);
    }
    printf("\n");
    printf("METHOD 1:\n\n");
    for (int i = 0; i < 15; i++)
    {
        printf("case %d: %c\n", i, s[i]);
    }

    printf("\nMETHOD 2:\n\n");
    for (int i = 0, n = 0; i < 15; i++)
    {
        printf("case %d: %c\n", i, *(s + i));
    }

    printf("\nMETHOD 3:\n\n");
    for (int i = 0, n = 0; i < 15; i++)
    {
        printf("case %d: %s\n", i, (s + i));
    }
}