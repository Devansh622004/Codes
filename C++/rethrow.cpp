#include <iostream>
using namespace std;

void divide(double x, double y)
{
    cout << "INSIDE DIVIDE FUNC.";
    try
    {
        if (y == 0.0)  throw y;
        else
            cout << x / y << endl;
    }
    catch (double)
    {
        cout<< "CAUGHT DOUBLE INSIDE FUNC.\n";
        throw;
    }
    cout << "END OF FUNCTION\n";
}

int main()
{
    cout << "INSIDE MAIN FUNCTION\n";

    try
    {
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch(double)
    {
        cout<< "CAUGHT DOUBLE INSIDE MAIN\n";
    }
    cout<<"END OF MAIN()\n";
    
    return 0;
}