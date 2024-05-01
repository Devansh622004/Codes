#include <iostream>
using namespace std;

void sum(int *arr, int size)
{
    cout << "size of array: " << sizeof(arr) << endl;    // BECAUSE  SIZE OF A POINTER(i.e. arr) IS ( 8 ).
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "SUM: " << sum;
}

int main()
{
    int s;
    cout << "ENTER THE SIZE OF ARRAY: " << endl;
    cin >> s;
    int ar[s];

    for (int i = 0; i < s; i++)
    {
        cin >> ar[i];
    }
    sum(ar, s);
    return 0;
}