#include <iostream>
using namespace std;

class base // BASE CLASS
{
    int a = 5;

public:
    void display()
    {
        cout << "THE VALUE OF a IS: " << a << endl;
    }
};

class derived : public base // DERIVED CLASS
{
public:
    void display()
    {

    }
};

int main()
{
    derived d;
    d.display();

    return 0;
}