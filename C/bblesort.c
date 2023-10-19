// TIME COMPLEXITY OF SELECTION SORT IS ->   O(N^2)

#include <stdio.h>
int main()
{
    int arr[10] = {6, 12, 0, 18, 11, 99, 55, 45, 34, 2};
    int n = 10;
    int swap;
    for (int i = 0; i < n - 1; i++) // WHERE (n-1) IS TOTAL NO. OF ROUNDS.
    {
        for (int j = 0; j < n - i; j++) // NO. OF COMPARISIONS.
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    printf("YOUR SORTED ARRAY IS: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}