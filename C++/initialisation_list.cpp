#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int x, int y) : a(x), b(y)
    {
        cout << "THE VALUE OF a AND b IS: " << a << "\t" << b << endl;
    }
};

int main()
{
    A obj(2, 3);
    return 0;
}