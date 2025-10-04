// You are given an array arr(0-based index) and two positive integer index and val. You need to insert an val at given index.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // increase size by 1
        arr.push_back(0); 
        
        // shift elements to the right from index
        for (int i = arr.size() - 1; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        // place the value
        arr[index] = val;
    }
};

int main() {
    vector<int> arr = {1, 2, 4, 5};
    int index = 2, val = 3;

    Solution obj;
    obj.insertAtIndex(arr, index, val);

    cout << "Array after insertion: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
