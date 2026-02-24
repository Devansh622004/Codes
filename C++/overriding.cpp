//  WITHOUT 'virtual()'

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void show() {
//         cout << "Base class show()" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void show() {
//         cout << "Derived class show()" << endl;
//     }
// };

// int main() {
//     Base* ptr;
//     Derived obj;

//     ptr = &obj;

//     ptr->show();   // Calls Base version (no virtual)
//     return 0;
// }

// WITH 'virtual()'

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show()  {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;

    ptr = &obj;

    ptr->show();   // Calls Derived version (virtual used)
    return 0;
}