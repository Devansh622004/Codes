// Given an array arr. Your task is to find the minimum and maximum elements in the array.

// Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        sort(arr.begin(), arr.end());
        int min = arr[0];
        int max = arr[arr.size() - 1];
        return {min, max};
    }
};

int main() {
    vector<int> arr = {3, 2, 1, 56, 10000, 167};
    Solution obj;
    pair<int, int> ans = obj.getMinMax(arr);
    cout << "Min = " << ans.first << ", Max = " << ans.second << endl;
    return 0;
}
