// INSERTION IN ONE-DIMENTIONAL ARRAY.
#include <stdio.h>
#include <string.h>
void main()
{
    int a[10], n, item, p;
    printf("ENTER THE NO. OF ELEMENTS OF THE MATRIX\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS OF THE MATRIX\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE NO. AND THE POSITION AT WHICH YOU WANT TO INSERT THAT NO.\n");
    scanf("%d%d", &item, &p);

    for (int i = n - 1; i >= p - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[p-1] = item;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
}