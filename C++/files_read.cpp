// "ifstream":-
// This class provides input operations.
// It contains open() function with default input mode.
// Inherits the functions get(), getline(), read(), seekg() and tellg() functions from the istream.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;

    ifstream read("files_write.txt");
    read >> str;

    while (read.eof() == 0)
    {
        getline(read, str);
        cout << str;
    }

    return 0;
}