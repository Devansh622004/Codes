#include <iostream>
using namespace std;

class SI
{
    int p, t;
    float r;

public:
    SI(int a, int b,  float c = 0.5)
    {
        p = a;
        t = b;
        r = c;
    }
    int calc()
    {
        return ((p * t * r)/100);
    }
    void show()
    {
        cout << "VALUE OF SI IS:" << calc() << endl;
    }
};

int main()
{
    SI m(200,2);
    m.calc();
    m.show();

    return 0;
}