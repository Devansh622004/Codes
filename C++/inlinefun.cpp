#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

int main()
{
    int x;
    x = add(2, 3);
    cout << x << endl;
    return 0;
}