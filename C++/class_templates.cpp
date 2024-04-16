#include <iostream>
using namespace std;

template <class T>
class complex
{
    T real, imag;

public:
    complex() {}
    complex(T x, T y)
    {
        real = x;
        imag = y;
    }
    void sum(complex m, complex n)
    {
        real = m.real + n.real;
        imag = m.imag + n.imag;
    }
    void display()
    {
        cout << "COMPLEX NUMBER IS: " << real << "+i" << imag << endl;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(4, 5);
    complex<int> c3;

    c3.sum(c1, c2);
    c1.display();
    c2.display();
    cout << "SUM OF TWO COMPLEX NUMBERS ARE: \n";
    c3.display();

    complex a1(2.0, 3.0);
    complex a2(4.0, 5.0);
    complex<float> a3;

    a3.sum(a1, a2);
    a1.display();
    a2.display();
    cout << "SUM OF TWO COMPLEX NUMBERS ARE: \n";
    a3.display();
    
    return 0;
}