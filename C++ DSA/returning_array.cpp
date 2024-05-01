#include <iostream>
using namespace std;

int *fun(int size)
{
    int *p;
    p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int *ptr, s = 5;

    ptr = fun(s);
    for (int i = 0; i < s; i++)
    {
        cout << ptr[i] << endl;
    }

    return 0;
}