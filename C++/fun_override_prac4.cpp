// TO CALL THE FUNCTION OF DERIVED CLASS USING THE OBJECT OF BASE CLASS:-
// WE USE ' POINTER OF BASE CLASS ' 
#include <iostream>
using namespace std;

class base // BASE CLASS
{
    int a = 5;

public:
    virtual void display()
    {
        cout << "THE VALUE OF a IS: " << a << endl;
    }
};

class derived : public base // DERIVED CLASS
{
    int a = 10;

public:
    void display()
    {
        cout << "THE VALUE OF a IS: " << a << endl;
    }
};

int main()
{
    base *b;
    derived d;
    b = &d;

    b->display();

    return 0;
}