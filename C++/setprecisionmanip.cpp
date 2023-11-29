#include <iostream>
#include <iomanip>
//#include <math.h>
using namespace std;
int main()
{
    float a = 5.254445;
    cout << "SQUARE ROOT OF 5:" << a << endl;
    cout << "SQUARE ROOT OF 5 AFTER USING setprecision(): " << setprecision(2) << a << endl;
    cout << "SQUARE ROOT OF 5 AFTER USING 'fixed': " << fixed << setprecision(2) << a << endl;
    cout << "SQUARE ROOT OF 5 AFTER USING 'scientific': " << scientific << setprecision(2) << a << endl;

    return 0;
}