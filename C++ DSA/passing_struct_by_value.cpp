#include <iostream>
using namespace std;

struct rectangle
{
    int len;
    int bred;
};

int area(struct rectangle r1)
{
    return r1.len * r1.bred;
}

int main()
{
    struct rectangle r = {12, 2};
    int a;
    a = area(r);
    cout << a;
    return 0;
}