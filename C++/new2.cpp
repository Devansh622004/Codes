#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER REQUIRED NO. OF ELEMENTS\n";
    cin >> n;

    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    // delete p;
    cout << "ENTERED ELEMENTS ARE:\n";
    for (int i = 0; i < n; i++)
    {
        cout << p[i];
    }
    return 0;
}