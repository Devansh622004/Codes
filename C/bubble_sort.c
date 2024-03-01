//   ******************TIME COMPLEXITY OF BUBBLE SORT IS O(n^2)*******************


#include <stdio.h>
void main()
{
    int n;
    int arr[10];

    printf("ENTER THE NO. OF ELEMENTS YOU WANT TO INSERT\n");
    scanf("%d", &n);

    printf("ELEMENTS: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("THE SORTED ARRAY IS: ");
    for (int i = 1; i <= n; i++)
    {
        printf("ELEMENT: %d\n", arr[i]);
    }
    printf("\n******************TIME COMPLEXITY OF BUBBLE_SORT IS:  O(n^2)****************");
}
