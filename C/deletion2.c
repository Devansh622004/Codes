#include <stdio.h>
void main()
{
    int a[10], n, item, p;
    printf("ENTER THE NO. OF ELEMENTS OF THE MATRIX:\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS OF THE MATRIX:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE NO. YOU WANT TO DELETE FROM THE ABOVE LIST AND THE POSITION OF THAT NO.:\n");
    scanf("%d%d", &item, &p);

    for (int i = p - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;
    
    printf("DELETION RESULTS INTO:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }

}