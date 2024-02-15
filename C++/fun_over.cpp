#include <iostream>
using namespace std;

class base
{
    int a;

public:
    void put()
    {
        cout << "HELLO ! WORLD\n";
    }
};

class derived : public base
{
public:
    void put()
    {
        cout<<"HELLLLLLLLLLLLLLLLLLOOOOOOOOOOOOOOOOOO\n";
    }
};

int main()
{
    base *b;
    derived d;
    b = &d;

    // b->put();
    b->put();

    return 0;
}

