#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20] = "jai meher baba";
    char t[20] = "me";
    char a[20] = "tm";
    // cout << strstr(s, t) << endl;
    cout << strstr(s, a) << endl;

    return 0;
}