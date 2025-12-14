#include <iostream>
#include <string>
#include <cmath>  // for pow()

using namespace std;

class Solution {
  public:
    int binaryToDecimal(string &b) {
        int s = b.size();
        int sum = 0;
        for(int i = 0; i < s; i++) {
            if(b[i] == '1') {
                sum += (int)pow(2, s - 1 - i);
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;
    string binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = sol.binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
