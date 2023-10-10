#include <iostream>
using namespace std;

class op
{
    int a, b, c;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    op operator*(op m1)
    {
        op temp;
        temp.c = m1.a * m1.b;
        return temp;
    }
    void display()
    {
        cout << "RESULTS ARE: " << c;
    }
};

int main()
{
    op o1, o2;
    o1.get(2, 3);
    o2 = o2 * o1;
    o2.display();
    return 0;
}