#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main()
{
    string str;
    ifstream file;
    file.open("file_4.txt");

    getline(file, str);
    cout << "CONTENT OF THE FILE IS:- "<< str;
    cout<< "\nALSO, THE CURRENT POSITION OF THE CURSOR IS:- "<<file.tellg();

    file.seekg(20, ios::beg);
    cout << "\nTHE POSITION AFTER USING seekg() IS:- " << file.tellg() << endl;

    return 0;
}