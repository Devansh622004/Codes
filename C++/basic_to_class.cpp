#include <iostream>
using namespace std;

class base
{
    int a;

public:
    base(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    base b = 100;
    b.display();

    return 0;
}