#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int x, int y) : a(x), b(y)
    {
        cout << "THE VALUE OF a IS: " << a << endl;
        cout << "THE VALUE OF b IS: " << b << endl;
    }
};

int main()
{
    A obj(2, 3);
    return 0;
}