// METHOD - 1:- USING BRUTE FORCE (NESTED LOOPING)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n];
    cout << "Enter array Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Duplicate element is: " << arr[i];
                return 0;
            }
        }
    }
    return 0;
}

// METHOD - 1:- USING SORTING

// Using Bubble Sort

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find duplicate
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << "Duplicate element is: " << arr[i];
            return 0;
        }
    }

    return 0;
}
