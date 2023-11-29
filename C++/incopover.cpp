#include <iostream>
using namespace std;

class over
{
    int x;
    int y;

public:
    void get(int a, int b);
    void put();
    void operator++();
};

void over ::get(int a, int b)
{
    x = a;
    y = b;
}

void over ::put()
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void over ::operator++()
{
    x = x + 1;
    y = y + 1;
}

int main()
{
    over S;
    S.get(2, 3);
    cout << "S: " << endl;
    S.put();

    ++S;

    S.put();

    return 0;
}