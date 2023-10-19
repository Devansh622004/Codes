#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int a = 5;
    cout << "SQUARE ROOT OF 5: " << sqrt(5) << endl;
    cout << "SQUARE ROOT OF 5 AFTER USING setprecision(): " << setprecision(2) << sqrt(5) << endl;
    cout << "SQUARE ROOT OF 5 AFTER USING 'fixed': " << setprecision(2) << fixed << sqrt(5) << endl;

    return 0;
}