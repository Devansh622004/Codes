// Given an unsorted array arr. Find the count of elements less than or equal to the given element x.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // Sort the array
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter x: ";
    cin >> x;

    Solution obj;
    int result = obj.countOfElements(x, arr);

    cout << "Count of elements <= " << x << " is: " << result << endl;

    return 0;
}
