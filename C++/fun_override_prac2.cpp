// TO CALL THE FUNCTION OF BASE CLASS USING THE OBJECT OF DERIVED CLASS:-
// WE USE ' SCOPE RESOLUTION ' OPERATOR
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
    int a = 10;

public:
    void display()
    {
        cout << "THE VALUE OF a IS: " << a << endl;
    }
};

int main()
{
    derived d;
    d.base::display();

    return 0;
}