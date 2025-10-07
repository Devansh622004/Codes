// Given an array arr[], print all its elements space-separated.

// Note: You don't need to move to the next line after printing all elements of the array (space-separated)

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: 1 2 3 4 5

// User function template for C++
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Just print the space separated array elements
    void printArray(vector<int> &arr) {
        for(int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    obj.printArray(arr);
    cout << endl;

    return 0;
}
