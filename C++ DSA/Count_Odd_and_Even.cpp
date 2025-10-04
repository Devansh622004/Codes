// Given an array arr[] of positive integers. The task is to return the count of the number 
// of odd and even elements in the array.

// // Note: Return two elements where the first one in the count of odd & second one is the 
// count of even.

#include <iostream>
#include <vector>
#include <utility>  // for pair

using namespace std;

class Solution {
public:
    /* Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        int odd = 0, even = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        return {odd, even};
    }
};

int main() {
    Solution sol;

    // Example array
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Call the function
    pair<int, int> result = sol.countOddEven(arr);

    // Print the result
    cout << "Odd numbers: " << result.first << endl;
    cout << "Even numbers: " << result.second << endl;

    return 0;
}
