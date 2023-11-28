#include <iostream>
using namespace std;

class rectangle
{
    int l, b;

public:
    rectangle()
    {
        l = 20;
        b = 5;
    }

    rectangle(int m, int n)
    {
        l = m;
        b = n;
    }
    void area()
    {
        cout << "ARE IS: " << l * b << endl;
    }
};

int main()
{
    rectangle *r1, *r2;
    r1 = new rectangle();
    r2 = new rectangle(10, 5);

    r1->area();
    r2->area();

    return 0;
}