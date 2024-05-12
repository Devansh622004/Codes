// C++ program to demonstrate the working
// of private inheritance
#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    // function to access private member
    int getPVT() { return pvt; }
};

class PrivateDerived : private Base
{
public:
    // function to access protected member from Base
    int getProt() { return prot; }

    // function to access public member
    int getPub() { return pub; }

    // function to get access to private members from Base
    int try_getPVT() { Base::getPVT(); }
};

int main()
{
    PrivateDerived object1;
    cout << "Private = " << object1.try_getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}
