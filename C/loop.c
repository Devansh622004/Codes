# include <stdio.h>
int main()
{
    char nature;
    printf("DO YOU LOVE ME\n");
    scanf("%c", &nature);

    while(nature)
    {
        printf("I LOVE YOU\n");
        nature++;
    }
    return 0;
}
