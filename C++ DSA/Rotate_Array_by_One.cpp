// Given an array arr, rotate the array by one position in clockwise direction.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        if(arr.empty()) return;           // safety check for empty array
        
        int temp = arr[arr.size() - 1];   // save last element
        for(int i = arr.size() - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];          // shift elements right
        }
        arr[0] = temp;                    // put last element at first
    }
};

// Driver code to test
int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    
    sol.rotate(arr);
    
    // print rotated array
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
