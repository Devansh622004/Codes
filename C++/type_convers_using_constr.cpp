#include <iostream>
using namespace std;

class invent_2
{
public:
    int code;
    float total;
    invent_2()
    {
        code = 0;
        total = 0;
    }
    void putdata()
    {
        cout << "THE VALUE OF CODE IS: " << code << endl;
        cout << "TOTAL MARKS ARE: " << total << endl;
    }
};

class invent_1
{
    int code;
    int items;
    float price;

public:
    invent_1(int a, int b, float c)
    {
        code = a;
        items = b;
        price = c;
    }
    operator invent_2()
    {
        invent_2 i2;
        i2.code = code;
        i2.total = items * price;

        return i2;
    }
};

int main()
{
    invent_1 i1(1001, 10, 100);
    invent_2 i2 = i1;
    i2.putdata();
    
    return 0;
}