#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "All Elements of Array ( BEFORE SORTING ) are: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    for( int i = 0; i < size; i++)
    {
        for( int j = 0; j < size; j++)      /*In C/C++, accessing out-of-bounds array elements is undefined behavior.*/
        {
            if(arr[j] > arr[j + 1])
            {
                int t;
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    cout << "All Elements of Array ( AFTER SORTING ) are: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}