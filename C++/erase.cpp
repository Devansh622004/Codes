#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "jai meher baba";

    str1.erase(4, 5);

    cout << str1 << endl;

    return 0;
}