// TO PROTECT OUR PROGRAM FROM AMBIGUITY
// WE USE SCOPE RESOLUTION OPERATOR( :: )

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
    void put()
    {
        cout << "THE VALUE OF a IS: " << a << endl;
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
    void put()
    {
        cout << "THE VALUE OF b IS: " << b << endl;
    }
};

class derived : public base1, public base2
{
public:
    void put()
    {
        base1::put();
        base2::put();
        // cout << "HELOOOOOOOOOOOOOOOOOO\n";
    }
    void sum()
    {
        cout << "THE SUM OF a & b IS: " << a + b << endl;
    }
};

int main()
{
    derived dr;

    dr.get_a(5);
    dr.get_b(50);

    dr.put();

    dr.sum();

    return 0;
}