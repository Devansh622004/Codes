#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex() // DEFAULT CONSTRUCTOR
    {
        a = 1;
        b = 1;
    }
    complex(int x, int y) // PARAMETERIZED CONSTRUCTOR
    {
        a = x;
        b = y;
    }
    complex(complex &x)
    {
        a = x.a;
        b = x.b;
    }

    void display()
    {
        cout << "COMPLEX NO :  " << a << " "
             << "+ i" << b << endl;
    }
};

int main()
{
    complex c1;
    complex c2(12, 14);
    complex c3(c2);
    complex c4(c1);


    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}