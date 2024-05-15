//  ONE CLASS TO ANOTHER CLASS TYPE CONVERSION USING "CASTING OPERATOR FUNCTION".
#include <iostream>
using namespace std;
class rectangle
{
    int len, bret, area;
public:
    rectangle(int l, int b)
    {
        len = l;
        bret = b;
        area = len * bret;
    }
    void show()
    {
        cout << "\nLENGTH: " << len << endl;
        cout << "\nBREADTH: " << bret << endl;
        cout << "\nAREA: " << area << endl;
    }
};
class triangle
{
    int base, hieght, area;
public:
    triangle(int b, int h)
    {
        base = b;
        hieght = h;
        area = 0.5 * base * hieght;
    }
    void display()
    {
        cout << "\nLENGTH: " << base << endl;
        cout << "\nHIEGHT: " << hieght << endl;
        cout << "\nAREA: " << area << endl;
    }
    operator rectangle()  //  CASTING OPERATOR FUNCTION.
    {
        rectangle temp(base, hieght);
        return temp;
    }
};

int main()
{
    triangle t(2, 3);
    rectangle r = t;    // TRIANGLE TO RECTANGLE TYPE CONVERSION.        TRIANGLE IS THE "DESTINATION TYPE".
    t.display();
    r.show();

    return 0;
}