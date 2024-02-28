#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "BASE CONSTRUCTOR IS CALLED" << endl;
    }
    ~base()
    {
        cout << "BASE DESTRUCTOR IS CALLED" << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "DERIVED CONSTRUCTOR IS CALLED" << endl;
    }
    ~derived()
    {
        cout << "DERIVED DESTRUCTOR IS CALLED" << endl;
    }
};

int main()
{
    derived dr;
     
    delete dr;
    
    return 0;
}