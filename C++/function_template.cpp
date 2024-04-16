#include <iostream>
using namespace std;

template <class T>

void swaping(T &x, T &y)
{ 
    T t;
    t = x;
    x = y;
    y = t;
}

int main()
{
    int x, y;
    cout << "ENTER TWO NO.\n";
    cin >> x >> y;
    swaping(x, y);
    cout << "\nTHE VALUES AFTER SWAPPING ARE:-\n";
    cout << x << endl;
    cout << y;

    float a, b;
    cout << "\nENTER TWO NO.\n";
    cin >> a >> b;
    swaping(a, b);
    cout << "\nTHE VALUES AFTER SWAPPING ARE:-\n";
    cout << a << endl;
    cout << b;

    return 0;
}