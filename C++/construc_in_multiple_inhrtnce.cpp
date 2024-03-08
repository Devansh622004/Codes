// TO PROTECT OUR PROGRAM FROM AMBIGUITY
// WE USE SCOPE RESOLUTION OPERATOR( :: )

#include <iostream>
using namespace std;

class base1
{
protected:
    int a;

public:
        base1()
        {
            cout<<"base1 CONSTRUCTOR IS CALLED\n";
        }
};

class base2
{
protected:
    int b;

public:
        base2()
        {
            cout<<"base2 CONSTRUCTOR IS CALLED\n";
        }
};

class derived : public base1, public base2
{
public:
        derived()
        {
            cout<<"derived CLASS CONSTRUCTOR IS CALLED\n";
        }
};

int main()
{
    derived dr;


    return 0;
}