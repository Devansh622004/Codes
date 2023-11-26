#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Constructor to initialize a complex number with real and imaginary parts
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Constructor to add two complex numbers
    Complex(Complex c1, Complex c2)
    {
        this->real = c1.real + c2.real;
        this->imaginary = c1.imaginary + c2.imaginary;
    }

    // Function to display the complex number
    void display()
    {
        cout << this->real << " + " << this->imaginary << "i" << endl;
    }
};

int main()
{
    // Create two complex numbers
    Complex c1(1, 2);
    Complex c2(3, 4);

    // Add the two complex numbers using the constructor
    Complex c3(c1, c2);

    // Display the result
    c3.display();

    return 0;
}