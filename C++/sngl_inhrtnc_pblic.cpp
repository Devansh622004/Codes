#include <iostream>
using namespace std;

class B // BASE CLASS
{
private:
    int a;

public:
    int b;
    void setab()
    {
        cout << "ENTER THE VALUES OF a and b\n";
        cin >> a >> b;
    }
    int geta()
    {
        return a;
    }
    void showa()
    {
        cout << "THE VALUE OF a: " << geta() << endl;
    }
};

class D : public B // DERIVED CLASS
{
private:
    int c;

public:
    void mult()
    {
        c = geta() * b;
    }
    void display()
    {
        cout << "a: " << geta() << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main()
{
    D d1;
    d1.setab();
    d1.geta();
    d1.showa();

    d1.mult();
    d1.display();

    d1.b = 20;
    d1.display();

    return 0;
}