#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 5, b = 100, c = 2000, d = 70000;
    cout << "THE VALUE OF a: " << a << endl;
    cout << "THE VALUE OF b: " << b << endl;
    cout << "THE VALUE OF c: " << c << endl;

    cout << "THE VALUE OF a AFTER USING setw(): " << setw(4) << a << endl;
    cout << "THE VALUE OF b AFTER USING setw(): " << setw(4) << b << endl;
    cout << "THE VALUE OF c AFTER USING setw(): " << setw(4) << c << endl;

    cout << "THE VALUE OF a AFTER USING setiosflags(ios::left): "
     << setw(4) << setiosflags(ios::left) << a << endl;
    cout << "THE VALUE OF b AFTER USING setiosflags(ios::left): "
     << setw(4) << setiosflags(ios::left) << b << endl;
    cout << "THE VALUE OF c AFTER USING setiosflags(ios::left): "
     << setw(4) << setiosflags(ios::left) << c << endl;

    cout << "THE VALUE OF a AFTER USING setiosflags(ios::right): "
     << setw(4) << setiosflags(ios::right) << a << endl;
    cout << "THE VALUE OF b AFTER USING setiosflags(ios::right): "
     << setw(4) << setiosflags(ios::right) << b << endl;
    cout << "THE VALUE OF c AFTER USING setiosflags(ios::right): "
     << setw(4) << setiosflags(ios::right) << c << endl;

    return 0;
}