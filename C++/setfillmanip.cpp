#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 5, b = 100, c = 2000, d = 70000;
    cout << "THE VALUE OF a: " << a << endl;
    cout << "THE VALUE OF b: " << b << endl;
    cout << "THE VALUE OF c: " << c << endl;

    cout << "THE VALUE OF a AFTER USING setw(): " 
         << setw(4) << setfill('*') << a << endl;
    cout << "THE VALUE OF b AFTER USING setw(): " 
         << setw(4) << setfill('*') << b << endl;
    cout << "THE VALUE OF c AFTER USING setw(): " 
         << setw(4) << setfill('*') << c << endl;

    return 0;
}