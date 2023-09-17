/*Parameterized constructors are those constructors that take one or more
 parameters. Default constructors are those constructors that take no
  parameters. The main things to note here are that constructors are
  written in the public section of the class and the constructors don’t
  have a return type.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

int main()
{

    // Implicit call                 // ---
    Complex a(4, 6);                 //   | ALSO KNOWN AS SHORTHAND METHOD.
    a.printNumber();                 // ---

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}
