#include <iostream>
using namespace std;

class triangle
{
    int h, b;
    float area;

public:
    void gethb(int x, int y)
    {
        h = x;
        b = y;
    }
    void display()
    {
        cout << "HIEGHT = " << h << endl;
        cout << "BASE = " << b << endl;
    }
    void areat()
    {
        area = 0.5 * b * h;
        cout<< "AREA = "<< area;
    }
};

class rectangle
{
    int l, br, area;

public:
    void gethb(int x, int y)
    {
        l = x;
        br = y;
    }
    void display()
    {
        cout << "HIEGHT = " << l << endl;
        cout << "BASE = " << br << endl;
    }
    void arear()
    {
        area = l * br;
        cout<< "AREA = "<< area;
    }
    rectangle(int )
};

int main()
{
    return 0;
}