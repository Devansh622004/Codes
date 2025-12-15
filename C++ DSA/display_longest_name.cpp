#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longest(vector<string>& arr) {
        string great = arr[0];
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i].size() > great.size()) {
                great = arr[i];
            }
        }
        return great;
    }
};

int main() {
    vector<string> arr = {"Geek", "GeeksforGeeks", "Geeks", "GFG"};
    
    Solution obj;
    cout << obj.longest(arr);
    
    return 0;
}
