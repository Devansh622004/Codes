#include <iostream>
using namespace std;

class value
{
    int n;

public:
    value(int n)
    {
        this->n = n;
    }
    operator int()   // CASTING OPERATOR FUNCTION
    {
        return n;
    }
    void display()
    {
        cout << "THE VALUE OF n IS: " << n << endl;
    }
};

int main()
{
    value v(100); // STORING INTEGER TYPE(i.e 100(which is integer)) VALUE TO CLASS TYPE VARIABLE(i.e. v)
    v.display();

    int x = v; // v.operator int()
    cout << "THE VALUE OF x IS: " << x;

    return 0;
}