#include <iostream>
using namespace std;

struct rect
{
    int len;
    int bred;
};

int main()
{
    struct rect ram = {20, 5}, shyam;
    struct rect *p;
    p = &shyam;

    (*p).len = 20;
    p->bred = 10;

    cout << "ram.len" << ram.len << endl;
    cout << "ram.bred" << ram.bred << endl;

    cout << "shyam.len" << shyam.len << endl;
    cout << "shyam.bred" << shyam.bred << endl;

    return 0;
}