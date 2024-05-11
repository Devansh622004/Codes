#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream file;
    file.open("file_4.txt");

    cout << "POSITION OF CURSOR:- " << file.tellg();
    return 0;
}