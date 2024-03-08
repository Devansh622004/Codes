#include <iostream>
using namespace std;

class base_1
{
    int a;

public:
    base_1(int x)
    {
        a = x;
        cout << "THE VALUE OF a IS: " << a << endl;
        cout<<"base_1 CONSTRUCTOR IS CALLED\n";
    }
};

class base_2
{
    int b;

public:
    base_2(int y)
    {
        b = y;
        cout << "THE VALUE OF b IS: " << b << endl;
        cout<<"base_2 CONSTRUCTOR IS CALLED\n";
    }
};

class derived : public base_1, public base_2
{
    int c, d;

public:
    derived(int x, int y, int p, int q) : base_2(y), base_1(x)
    {
        c = p;
        d = q;

        cout << "THE VALUE OF c IS: " << c << endl;
        cout << "THE VALUE OF d IS: " << d << endl;
        cout<<"derived CONSTRUCTOR IS CALLED\n";
    }
};

int main()
{
    derived d(1, 2, 3, 4);

    return 0;
}