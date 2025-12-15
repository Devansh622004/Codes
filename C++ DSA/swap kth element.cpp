// Given an array arr[], swap the kth element from the beginning with the kth element from the end.
// Note: 1-based indexing is followed.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        int a = arr[k - 1];
        arr[k - 1] = arr[arr.size() - k];
        arr[arr.size() - k] = a;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    Solution obj;
    obj.swapKth(arr, k);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
