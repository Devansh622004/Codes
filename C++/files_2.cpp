// THERE ARE TOTAL TWO WAYS TO OPEN A FILE IN C++.
// a) USING THE CONSTRUCTOR.
// b) USING THE MEMBER FUNCTION open() OF THE CLASS.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // USING CONSTRUCTOR TO :-
    // 1) OPEN A FILE
    // 2) READING A FILE
    string st2;
    ifstream in("files_1.txt");
    in >> st2;  // WHICH IGNORES " "(i.e SPACES) AND "\n"(i.e. NEW LINE)
    cout << st2;

    return 0;
}