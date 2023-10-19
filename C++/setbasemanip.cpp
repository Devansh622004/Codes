#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << 20 << endl;                // DECIMAL FORM
    cout << setbase(8) << 20 << endl;  // OCTAL FORM
    cout << setbase(10) << 20 << endl; // DECIMAL FORM
    cout << setbase(16) << 20 << endl; // HEXADECIMAL FORM
    return 0;
}