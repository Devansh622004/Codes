// Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        while(i < a.size() && j < b.size()) {
            if(a[i] == b[j]) {
                i++; j++; 
            }
            else if(a[i] < b[j]) {
                i++;     
            }
            else {
                return false; 
            }
        }
        return (j == b.size());
    }
};

int main() {
    vector<int> a = {11, 1, 13, 21, 3, 7};
    vector<int> b = {11, 3, 7, 1};

    Solution obj;
    if(obj.isSubset(a, b))
        cout << "Yes, b is a subset of a" << endl;
    else
        cout << "No, b is not a subset of a" << endl;
    return 0;
}
