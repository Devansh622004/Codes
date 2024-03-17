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
    // 2) WRITING IN A FILE

    // string st2;
    // ifstream in("files_1.txt");
    // in >> st2;  // WHICH IGNORES " "(i.e SPACES) AND "\n"(i.e. NEW LINE)
    // cout << st2;

    // TO GET RID-OFF FROM THE PROBLEM OF "in" OBJECT,
    // WE CAN USE getline() FUNCTION.

    string st2;
    ifstream in("files_1.txt");

    getline(in, st2);
    cout << st2;

    return 0;
}