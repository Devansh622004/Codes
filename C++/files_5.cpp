#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // string str = "JAI MEHER BABA KI";

    // ofstream out("files_2.txt");
    // out << str;

    // string str1 = "JAI SHREE RAM";
    // ofstream out("files_2.txt");
    // out << str1;
    string str;

    ifstream in("files_2.txt");

    // cout << str;

    // in >> str;
    // cout << " " << str;

    // in >> str;
    // cout << " " << str;

    // in >> str;
    // cout << " " << str;

    //         OR
    getline(in, str);
    cout << str;

    return 0;
}