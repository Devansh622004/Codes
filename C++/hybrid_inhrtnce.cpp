#include <iostream>
using namespace std;

class base
{
protected:
    int a;
};

class derive_1 : virtual public base
{
public:
    void get_a_1(int m)
    {
        a = m;
    }
    void put_a_1()
    {
        cout << "THE VALUE OF a IS:" << a << endl;
    }
};

class derive_2 : virtual public base
{
public:
    void get_a_2(int m)
    {
        a = m;
    }
    void put_a_2()
    {
        cout << "THE VALUE OF a IS:" << a << endl;
    }
};

class derive_3 : public derive_1, public derive_2
{
public:
    void put_a_3()
    {
        cout << "THE VALUE OF a IS:" << a << endl;
    }
};

int main()
{
    derive_1 d1;
    d1.get_a_1(5);
    d1.put_a_1();

    derive_2 d2;
    d2.get_a_2(10);
    d2.put_a_2();

    derive_3 d3;
    d3.put_a_3();

    return 0;
}