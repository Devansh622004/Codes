#include <iostream>
#include "header_file.h"

using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    cout << add(a, b) << endl;
    cout << dif(a, b) << endl;
    cout << mul(a, b) << endl;
    cout << divi(a, b) << endl;

    return 0;
}