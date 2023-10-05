#include <iostream>
using namespace std;

class shop
{
    int item[20];

public:
    void get();
    void count();
    void show();
};

void shop ::get()
{
    int n;
    cout<<"ENTER THE NO. OF ITEMS\n";
    cin>>n;
    cout<<"ENTER THE ITEMS\n";
    for (int i = 0; i < n; i++)
    {
        cin>>item[i];
    }
}

int main()
{
    return 0;
}