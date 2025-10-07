// You are given an integer n. You need to convert all zeroes of n to 5.

// Examples:

// Input: n = 1004
// Output: 1554
// Explanation: There are two zeroes in 1004 on replacing all zeroes with 5, the new number will be 1554.

#include <iostream>
#include <string>
using namespace std;

/* you are required to complete this method */
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string s = to_string(n); 
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                s[i] = '5';
            }
        }
        int x = stoi(s);
        return x;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    cout << "Converted number: " << obj.convertFive(n);
    return 0;
}
