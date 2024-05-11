#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream file;
    file.open("file_4.txt");
    file << "JAI MEHER BABA!";

    cout << "POSITION OF CURSOR:- " << file.tellp();

    file.seekp(20, ios::beg);
    cout << "\nTHE POSITION AFTER USING seekp() IS:- " << file.tellp() << endl;

    return 0;
}