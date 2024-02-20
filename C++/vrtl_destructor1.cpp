#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "CONSTRUCTING BASE\n";
    }

    ~base()
    {
        cout << "DESTRUCTING BASE\n";
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "CONSTRUCTING DERIVED\n";
    }

    ~derived()
    {
        cout << "DESTRUCTING DERIVED\n";
    }
};

int main()
{
    derived *d = new derived;
    base *b = d;

    delete b;
    return 0;
}