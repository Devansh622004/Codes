#include <iostream>
using namespace std;

class over
{
    int real, imag;

public:
    over(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << "COMPLEX NO. :" << real << "+i" << imag << endl;
    }

    friend over operator *(over const &c1, over const &c2);
    
};
    over operator *(over const &c1, over const &c2)
    {
        over t;
        t.real = c1.real * c2.real; 
        t.imag = c1.imag * c2.imag; 
        return t;
    }

int main()
{
    over o1(2, 3);
    over o2(4, 5);
    over o3;

    o1.display();
    o2.display();

    o3 = o1 * o2;

    o3.display();
    
    return 0;
}