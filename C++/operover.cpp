#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    complex operator+(complex c1)
    {
        complex c;
        c.real = real + c1.real;
        c.img = img + c1.img;
        return c;
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    complex p, q(4,5), r(6,7);
    q.display();
    r.display();

    p = q+r;

    p.display();

    return 0;
}