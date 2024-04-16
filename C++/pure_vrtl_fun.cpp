#include <iostream>
using namespace std;

class base
{
protected:
    int x;

public:
    virtual void fun() = 0;  // PURE VIRT. FUNC.
    void getx()
    {
        cout << "ENTER x: ";
        cin >> x;
    }
};

class derived : public base
{
    int y;

public:
    void fun()
    {
        cout << "fun() called" << endl;
        cout << "coordinates are:" << endl
             << x << endl
             << y;
    }
    void gety()
    {
        cout << "ENTER y: ";
        cin >> y;
    }
};

int main()
{
    derived d;
    d.getx();
    d.gety();
    d.fun();

    return 0;
}