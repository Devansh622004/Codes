#include <iostream>
using namespace std;

class value
{
    int n;

public:
    void display()
    {
        cout << "THE VALUE OF n IS: " << n << endl;
    }
    value(int n)
    {
        this->n = n;
    }
};

int main()
{
    value v = 100;      // STORING INTEGER TYPE(i.e 100(which is integer)) VALUE TO CLASS TYPE VARIABLE(i.e. v)
    v.display();

    return 0;
}