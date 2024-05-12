// C++ program to demonstrate the working
// of protected inheritance
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

class ProtectedDerived : protected Base
{
public:
    // function to access protected member from Base
    int getProt() { return prot; }

    // function to access public member from Base
    int getPub() { return pub; }

    // function to get access to private members from Base
    int try_getPVT() { Base::getPVT(); }
};

int main()
{
    ProtectedDerived object1;
    cout << "Private = " << object1.try_getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}
