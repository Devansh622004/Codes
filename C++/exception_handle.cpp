#include <iostream>
using namespace std;
int main()
{
    int x, y;

    cout << "ENTER TWO NUMBERS:";
    cin >> x >> y;

    try
    {
        if (x - y != 0)
        {
            cout << "x/y = " << x / y << endl;
        }
        else
        {
            throw(x / y);
        }
    }
    catch (int i)
    {
        cout << "EXCEPTION CAUGHT: x = " << i << endl;
    }
    cout << "END";

    return 0;
}