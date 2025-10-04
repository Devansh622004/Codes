// Given an integer k and array arr. Your task is to return the position of the first 
// occurrence of k in the given array and if element k is not present in the array then 
// return -1.

// Note: 1-based indexing is followed here.a

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // Linear search
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == k) {
                return i + 1;  // 1-based index
            }
        }
        return -1;  // if not found
    }
};

int main() {
    Solution s;
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> k;

    int result = s.search(k, arr);

    if (result != -1)
        cout << "Element found at position (1-based index): " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
