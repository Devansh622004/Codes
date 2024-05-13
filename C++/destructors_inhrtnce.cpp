#include <iostream>
using namespace std;

class base
{
public:
    ~base()
    {
        cout << "BASE CLASS DESTRUCTOR\n";
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "DERIVED CLASS DESTRUCTOR\n";
    }
};

int main()
{
    derived d;

    return 0;
}