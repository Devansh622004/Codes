// "ofstream":-
// a) This class provides output operations.
// b) It contains open() function with default output mode.
// c) Inherits the functions put(),  write(), seekp() and tellp() functions from the ostream.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "WELCOME TO MEHER FILE.";
    ofstream open("files_write.txt");

    open << "JAI MEHER BABA." << endl;
    open << st;

    open.close();

    return 0;
}