#include <iostream>
using namespace std;

class Base {
public:
    // Function to be overridden
    virtual void display() {
        cout << "Base::display() called" << endl;
    }

    // Function for overloading
    void show() {
        cout << "Base::show() called" << endl;
    }
};

class Derived : public Base {
public:
    // Function overriding
    void display() override {
        cout << "Derived::display() called" << endl;
    }

    // Function overloading
    void show(int val) {
        cout << "Derived::show(int) called with value " << val << endl;
    }
};

int main() {
    Base b;
    Derived d;

    // Function overriding
    b.display(); // Calls Base::display()
    d.display(); // Calls Derived::display()

    // Function overloading
    b.show();    // Calls Base::show()
    d.show();    // Calls Base::show() as there's no overloaded version in Derived
    d.show(10);  // Calls Derived::show(int)

    return 0;
}
