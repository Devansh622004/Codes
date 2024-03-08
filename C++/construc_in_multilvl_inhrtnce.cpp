#include <iostream>
using namespace std;

class base_1
{
public:
    base_1()
    {
        cout << "base_1 CONSTRUCTOR IS CALLED\n";
    }
};

class base_2 : public base_1
{
public:
    base_2()
    {
        cout << "base_2 CONSTRUCTOR IS CALLED\n ";
    }
};

class derived : public base_2
{
public:
    derived()
    {
        cout << "derived CONSTRUCTOR IS CALLED\n";
    }
};

int main()
{
    derived d;

    return 0;
}