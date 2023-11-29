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
    complex operator-(complex c1)//normal function having return type complex
    {
        complex c;
        c.real = real - c1.real;
        c.img = img - c1.img;
        return c;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    complex p, q(4, 5), r(6, 7);
    p.display();
    q.display();
    r.display();

    p = q - r; // previous value of p(i.e 0+i0) is overwrite here.
    // or   p = q.operator+(r);

    p.display();

    return 0;
}