#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream file;
    file.open("file_4.txt");
    file << "JAI MEHER BABA!";

    cout << "POSITION OF CURSOR:- " << file.tellp();
    return 0;
}