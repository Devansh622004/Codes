#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "njgjksdghbvbhbcavvvcaczcccbvdvbuybvbdfhb";

    sort(str.begin(), str.end());

    cout << str << endl;
    return 0;
}