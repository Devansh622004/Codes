#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // OPEN A FILE IN C++.
    // b) USING THE MEMBER FUNCTION open() OF THE CLASS.

    ofstream out;
    out.open("files_7.exe");
    out << "HELLO WORLD !" << endl;
    out << "THIS IS ME.";
    out.close();

    ifstream in;
    string str;
    in.open("files_7.exe");
    // in >> str;
    // cout << str;

    // IF WE WANT TO PRINT THE WHOLE CONTENT OF A FILE.
    while (in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
    }
    in.close();

    return 0;
}