#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *p = &a;
    
    cout << *(p) << endl;
    cout << p << endl;

    int *b = new int(50);
    cout << *(b) << endl;
    cout << b << endl;

    //**************************delete operator********************************
    int *d = new int(50);
    delete d;
    cout << *(d) << endl;
    cout << d << endl;
    // int *arr[] = new int[3];

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];

    return 0;
}