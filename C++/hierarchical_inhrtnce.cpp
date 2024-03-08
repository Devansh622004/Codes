#include <iostream>
using namespace std;

class A
{
public:
    void show_A()
    {
        cout << "CLASS A IS CALLED\n";
    }
};

class B : public A
{
public:
    void show_B()
    {
        cout << "CLASS B IS CALLED\n";
    }
};

class C : public A
{
public:
    void show_C()
    {
        cout << "CLASS C IS CALLED\n";
    }
};

int main()
{
    B b;
    b.show_B();
    b.show_A();

    C c;
    c.show_C();
    c.show_A();

    return 0;
}