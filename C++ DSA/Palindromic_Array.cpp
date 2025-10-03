// Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalinArray(vector<int> &arr) {
        for (int i = 0; i < arr.size(); i++) {
            int org = arr[i];
            int num = arr[i];
            int rev = 0;

            while (num != 0) {
                int digit = num % 10;
                rev = rev * 10 + digit;
                num = num / 10;
            }

            if (org != rev) {  // if any number is not palindrome
                return false;
            }
        }
        return true;  // all numbers are palindrome
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (sol.isPalinArray(arr)) {
        cout << "All numbers are palindrome ✅" << endl;
    } else {
        cout << "Not all numbers are palindrome ❌" << endl;
    }

    return 0;
}
