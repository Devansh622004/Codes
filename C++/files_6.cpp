#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream hout("files_3.txt"); // CREATES A BRIDGE BETWEEN "PROGRAM(i.e. '.c') FILE" AND "TEXT(i.e. '.tx') FILE".

    // string content;
    // cout << "ENTER THE CONTENT YOU WANT TO TRANSFER TO THE FILE NAMED (files_3.cpp)" << endl;
    // getline(cin, content);

    // hout << content << endl;
    // hout << "HELLO WORLD";

    // hout.close();

    ifstream hin("files_3.txt");

    string content_entered;
    hin >> content_entered;

    cout << content_entered;

    return 0;
}