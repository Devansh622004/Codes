// You are given an integer array arr[]. The task is to find the sum of it.

#include <iostream>
#include <vector>
using namespace std;

// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            sum = sum + arr[i];
        }
        return sum;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = obj.arraySum(arr);
    cout << "Sum of elements = " << result << endl;

    return 0;
}
