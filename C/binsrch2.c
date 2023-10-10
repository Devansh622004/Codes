//   TIME COMPLEXITY OF BINARY SEARCH IS ---->    O(log n)


#include <stdio.h>
void main()
{
    int ar[10], x, n, beg, mid, end;

    printf("ENTER SIZE OF ARRAY:\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("ENTER THE ELEMENT TO BE SEARCH\n");
    scanf("%d", &x);

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while ((beg <= end) && (x != ar[mid]))
    {
        if (x < ar[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
            mid = (beg + end) / 2;
        }
    }
    if (ar[mid] == x)
    {
        printf("ELEMENT FOUND AT %d", mid + 1);
    }
    else
    {
        printf("ELEMENT NOT FOUND\n");
    }
}