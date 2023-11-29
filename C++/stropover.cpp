#include <iostream>
#include <string.h>
using namespace std;

class str
{
    char s[20];

public:
    void get()
    {
        cout << "ENTER A STRING\n";
        cin >> s;
    }
    void put()
    {
        cout << "STRING IS:" << s << endl;
    }
    str operator +(str x)
    {
        str t;
        strcpy(t.s, s);
        strcat(t.s, x.s);
        return t;
    }
};

int main()
{
    str s1, s2, s3;
    s1.get();
    s2.get();

    cout<< "STRINGS ARE:\n";
    s1.put();
    s2.put();

    s3 = s1 + s2;

    s3.put();

    return 0;
}