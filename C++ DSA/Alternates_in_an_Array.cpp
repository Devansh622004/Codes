// You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> out;
        for(int i = 0; i < arr.size(); i += 2) {
            out.push_back(arr[i]);  // push_back() function is used to add (or insert) an element at the end of a vector.
        }
        return out;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = sol.getAlternates(arr);

    cout << "Alternate elements: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
