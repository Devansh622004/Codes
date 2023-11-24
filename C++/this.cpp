#include <iostream>
using namespace std;

class keywrd
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a; // "this"  pointer/keyword.
    }

    void showdata()
    {
        cout << a << endl;
    }
};

int main()
{
    keywrd A;
    A.setdata(7);
    A.showdata();
    return 0;
}