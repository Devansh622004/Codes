#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void get(int x, int y);
    void display();
    // void sum(complex m, complex n);
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

void complex ::get(int x, int y)
{
    a = x;
    b = y;
}

void complex ::display()
{
    cout << a << "+i" << b;
}

// void complex :: sum(complex m, complex n)
// {
//     a = m.a + n.a;
//     b = m.b + n.b;
// }

int main()
{
    complex c1, c2, c3;
    c1.get(2, 3);
    c2.get(3, 4);
    // c3.sum(c1,c2);

    c3 = c1 + c2; // ------> OR c3 = c1.operator+(c2);

    cout << "SUM OF TWO COMPLEX NO. IS : ";
    c3.display();

    return 0;
}