#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void getdata(int m, int n);
    void putdata();
};

void complex ::getdata(int m, int n)
{
    a = m;
    b = n;
}

void complex ::putdata()
{
    cout << "Real part is :" << a << endl;
    cout << "Imaginary part is :" << b << endl;
    cout << "complex no. is :" << a << "+i" << b << endl;
}

int main()
{
    complex c1;
    complex *ptr = &c1;
    (*ptr).getdata(2,3);
    (*ptr).putdata();

    //************** OR ****************

    complex *p = new complex;
    (*p).getdata(6,9);
    (*p).putdata();
    
    //************** OR ****************

    complex *po = new complex;
    po->getdata(1,7);
    po->putdata();



    return 0;
}