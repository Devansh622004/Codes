// Given an array arr[]. The task is to find the largest element and return it.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int first_max = arr[0];
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > first_max) {
                first_max = arr[i];
            }
        }
        return first_max;
    }
};

int main() {
    vector<int> arr = {10, 20, 4, 45, 99};
    Solution obj;
    cout << "Largest element = " << obj.largest(arr) << endl;
    return 0;
}
