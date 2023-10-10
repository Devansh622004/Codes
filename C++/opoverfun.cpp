#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    complex operator*(complex m1)
    {
        complex c;
        c.a = a * m1.a ;
        c.b = b * m1.b ;
        return c;
    }
    void display()
    {
        cout << a << "+ i " << b << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.get(2, 3);
    c2.get(3, 4);
    c3 = c1 * c2;
    c3.display();
    
    return 0;
}