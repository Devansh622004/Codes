// THERE ARE TOTAL TWO WAYS TO OPEN A FILE IN C++.
// a) USING THE CONSTRUCTOR.
// b) USING THE MEMBER FUNCTION open() OF THE CLASS.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1 = "Jai Meher Baba";
    // USING CONSTRUCTOR TO :-
    // 1) OPEN A FILE
    // 2) WRITING IN A FILE
    ofstream out("files_1.txt"); // WRITE OPERATION
    out << st1;

    return 0;
}

// HERE "ofstream" IS A CLASS AND "out" IS THE OBJECT OF THAT CLASS.