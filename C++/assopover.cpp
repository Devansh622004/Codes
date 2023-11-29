// C++ program for Assignment Operator overloading
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img; // real, imaginary

public:
    // Parameterized Constructor
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    // This is automatically called
    // when '=' operator is
    // used between C1 and C2.

    void operator=(Complex &C)
    {
        real = C.real;
        img = C.img;
    }

    // function to print
    void print() 
    {
        cout << real << "+i" << img << endl; 
    }
};

int main()
{
    // Assigning by overloading constructor
    Complex C1(2, 3), C2(4, 6);

    cout << "BEFORE OVERLOADING ASSIGNMENT OPERATOR" << endl;
    cout << "C1 complex number: ";

    C1.print();

    cout << "C2 complex number: ";

    C2.print();

    // overloading assignment operator to copy values
    C1 = C2;

    cout << "AFTER OVERLOADING ASSIGNMENT OPERATOR" << endl;
    cout << "C1 complex number: ";

    C1.print();

    cout << "C2 complex number: ";

    C2.print();

    return 0;
}
