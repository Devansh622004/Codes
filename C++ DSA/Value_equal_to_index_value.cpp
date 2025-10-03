// Given an array arr. Your task is to find the elements whose value is equal to that 
// of its index value ( Consider 1-based indexing ).

// Note: There can be more than one element in the array which have the same value as 
// its index. You need to include every such element's index. Follows 1-based indexing
// of the array.

#include <iostream>
#include <vector>
using namespace std;

// User function template for C++
class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> nums;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == i + 1)
            {
                nums.push_back(i + 1);
            }
        }
        return nums;
    }
};

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    vector<int> result = sol.valueEqualToIndex(arr);

    cout << "Indices where value equals index: ";
    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
