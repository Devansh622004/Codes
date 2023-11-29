#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p;
    p = &a;
    cout << a << endl;      // VALUES
    cout << p << endl;      // ADDRESSES
    cout << *p << endl;      // VALUES
    cout << &a << endl;     // ADDRESSES
    return 0;
}