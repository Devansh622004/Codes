#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    int i = 0;
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    while (i < 5)
    {
        cout << p[i] << endl;
        i++;
    }

    delete []p;

    return 0;
}