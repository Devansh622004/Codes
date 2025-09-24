// Given an array, arr[] of n integers, and an integer element x, find
// whether element x is present in the array. Return the index of the first
// occurrence of x in the array, or -1 if it doesn't exist.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int found = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == x) {
                found = 1;
                return i;
                break;
            }
        }
        if(found == 0) {
            return -1;
        }
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 7;
    Solution obj;
    int idx = obj.search(arr, x);
    if(idx != -1)
        cout << "Element found at index = " << idx << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
