# include<stdio.h>
void main()
{
    char st[10],i;
    printf("PLAIN TEXT IS: ");
    scanf("%s", &st);

    for(i = 0; st[i] !='\0'; i++)
    {
        st[i] = st[i] + 1;
    }

    printf("THE CIPHER TEXT IS: %s", st);

    //printf("THE PLAIN TEXT IS: %s", st);
}