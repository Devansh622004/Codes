# include <iostream>
using namespace std;

int main(){
    int item;
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;

    int arr[size];
    cout << "Enter Elements of the Array( In Sorted Order ): \n";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Element you Want to Search for: ";
    cin >> item;

    int lb = 0, ub = size - 1, mid;

    while(lb <= ub)
    {
        mid = int((lb + ub) / 2);
        if(item == arr[mid])
        {
            cout << "The Position of " << item << " is " << mid;
            return 0;
        }
        else if(item < arr[mid])
        {
            ub = mid - 1;
        }
        else if(item > arr[mid])
        {
            lb = mid + 1;
        }
    }
    cout << "Sorry, Element You Entered Not Found.";
    
}