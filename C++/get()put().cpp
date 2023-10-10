#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int l;
    char name[20];
    // cin >> name;


    cout << "ENTER A STRING\n";
    for (int i = 0; i < 10; i++)
    {
        cin.get(name[i]);
    }

    l = strlen(name);

    for (int i = 0; i < l + 1; i++)
    {
        cout.put(name[i]);
    }
    return 0;
}