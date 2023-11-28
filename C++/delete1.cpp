#include <iostream>
using namespace std;
int main()
{
    int *ptr1, *ptr2, sum;

    ptr1 = new int;
    ptr2 = new int;

    cout << "ENTER FIRST NO." << endl;
    cin >> *ptr1;

    cout << "ENTER SECOND NO." << endl;
    cin >> *ptr2;

    sum = *ptr1 + *ptr2;

    cout << "SUM IS: " << sum << endl;

    delete ptr1; // DEALLOCATION OF MEMORY
    delete ptr2; // DEALLOCATION OF MEMORY

    sum = *ptr1 + *ptr2;

    cout << "SUM IS: " << sum << endl;

    return 0;
}