#include <iostream>
using namespace std;

template <class T>

T ADD(T &a, T &b)
{
    return (a + b);
}

int main()
{
    int x, y;
    cout << "ENTER TWO NO. OF TYPE (int)\n";
    cin >> x >> y;

    cout << "\nTHE SUM IS:- " << ADD(x, y);

    float m, n;
    cout << "\nENTER TWO NO. OF TYPE (float)\n";
    cin >> m >> n;

    cout << "\nTHE SUM IS:- " << ADD(m, n);

    return 0;
}