#include <iostream>
using namespace std;

class base1
{
protected:
    int a;

public:
    void get_a(int x)
    {
        a = x;
    }
};

class base2
{
protected:
    int b;

public:
    void get_b(int y)
    {
        b = y;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "THE VALUE OF a IS: " << a << endl;
        cout << "THE VALUE OF a IS: " << b << endl;
        cout << "THE SUM OF a & b IS: " << a + b << endl;
    }
};

int main()
{
    derived dr;
    dr.get_a(5);
    dr.get_b(2);

    dr.show();
    
    return 0;
}