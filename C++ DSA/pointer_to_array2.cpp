#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p;
    p = new int[5];

    p[0] = 8, p[1] = 9;
    p[2] = 10;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    free(p);
    cout<< p[1];

    return 0;
}