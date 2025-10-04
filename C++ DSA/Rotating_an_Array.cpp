// Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        int n = arr.size();

        // Step 1: copy first d elements
        vector<int> temp(arr.begin(), arr.begin() + d);

        // Step 2: shift the remaining elements left
        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }

        // Step 3: put the copied elements at the end
        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    Solution obj;
    obj.leftRotate(arr, d);

    // print rotated array
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
