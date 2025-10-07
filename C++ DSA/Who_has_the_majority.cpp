// Given an array arr[] and two elements x and y, return the element that occurs more frequently. If both elements have the same frequency, return the smaller one.

// Examples:

// Input: arr[] = [1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5], x = 4, y = 5
// Output: 4
// Explanation: frequency of 4 is 4.frequency of 5 is 1.Since 4>1 so return 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        sort(arr.begin(), arr.end());
        
        int x_count = 0, y_count = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == x) {
                x_count++;
            }
            if(arr[i] == y) {
                y_count++;
            }
        }

        if(x_count > y_count) {
            return x;
        } 
        else if(y_count > x_count) {
            return y;
        } 
        else {
            return (x < y) ? x : y;
        }
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3, 2, 3, 3, 4, 2};
    int x = 2, y = 3;
    
    int result = obj.moreFrequent(arr, x, y);
    
    cout << "Element appearing more frequently between " << x << " and " << y << " is: " << result << endl;
    
    return 0;
}
