#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void get(int x, int y);
    void display();

    complex operator-() // ---->  UNARY OPERATOR (-)
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
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
    cout << a << "+i"
         << "(" << b << ")";
}

int main()
{
    complex c1, c2;
    c1.get(2, 3);

    c2 = -c1; //  ----> OR c2 = c1.operator-();
    cout << "RESULTS AFTER USING UNARY OPERATOR ARE: ";
    c2.display();

    return 0;
}