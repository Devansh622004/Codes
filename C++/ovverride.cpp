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
    using Base::show;   // Fix: Prevent function hiding

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
    b.display(); // Base version
    d.display(); // Derived version

    // Function overloading
    b.show();    // Base::show()
    d.show();    // Now works correctly
    d.show(10);  // Derived::show(int)

    return 0;
}