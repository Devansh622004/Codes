#include <iostream>
using namespace std;

void divide(int x, int y, int z)
{
    cout << "\n WE ARE INSIDE FUNC." << endl;
    if ((x - y) != 0)
    {
        cout << "z/(x-y) = " << z / (x - y) << endl;
    }
    else
    {
        throw(x - y);
    }
}

int main()
{
    try
    {
        cout << "WE ARE INSIDE TRY BLOCK." << endl;
        divide(10, 20, 30);
        divide(10, 10, 20);
    }
    catch (int i)
    {
        cout << "CAUGHT EXCEPTION\n";
    }

    return 0;
}