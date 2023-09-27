#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex() {}
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    friend complex operator+(complex, complex);
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

complex operator+(complex c1, complex c2)
{
    complex c4;
    c4.real = c1.real + c2.real;
    c4.img = c1.img + c2.img;
    return c4;
}

int main()
{
    complex p,q(8,9),r(9,0);
    q.display();
    r.display();

    p = q + r;
    p.display();

    return 0;
}