#include <iostream>
using namespace std;

int main()
{
    int n, item;
    
    cout << "Enter Size of Elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter Elements of Array: \n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "All Elements of the Array are: \n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }    

    cout << "Enter Element to Search (From Above List) its Position: ";
    cin >> item;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(item == arr[i])
        {
            cout << "The Position of " << item << " is " << i + 1;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element/Number Not Found." << endl;
    }

    return 0;
}