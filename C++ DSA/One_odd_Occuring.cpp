// Given an array of arr[] positive integers where all numbers occur even number of times 
// except one number which occurs odd number of times. Return that number.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        int count = 1;
        int temp = arr[0];
        
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i + 1] == temp)
            {
                count++;
            }
            else
            {
                if(count % 2 != 0)
                {
                    return temp;
                }
                else
                {
                    count = 1;
                    temp = arr[i + 1];   
                }
            }
        }
        int last = arr[arr.size() - 1];
        int countagain = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == last)
            {
                countagain++;
            }
        }
        if(countagain % 2 != 0)
        {
            return last;
        }
        return -1; // just in case no odd occurrence is found
    }
};

int main() {
    Solution sol;

    vector<int> arr = {2, 3, 2, 3, 5}; // Example input
    int odd = sol.getOddOccurrence(arr);

    cout << "The number with odd occurrence is: " << odd << endl;

    return 0;
}
