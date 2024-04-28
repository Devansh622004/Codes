// DYNAMICALLY CREATION OF MEMORY OF AN OBJECT IN HEAP.
#include <iostream>
using namespace std;

struct rect
{
    int len;
    int bred;
};

int main()
{
    rect *p = new rect;

    (*p).len = 20;
    p->bred = 10;

    cout << "ram.len" << p->len << endl;
    cout << "ram.bred" << p->bred << endl;

    return 0;
}