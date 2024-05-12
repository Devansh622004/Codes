#include <iostream>
using namespace std;

template <class C>
class big {
    C a, b; // Change int to C for the data types

public:
    big(C x, C y) {
        a = x;
        b = y;
    }

    void check() {
        if (a > b) {
            cout << a << " IS GREATER THAN " << b << endl;
        } else { // Use 'else' instead of 'else:'
            cout << b << " IS GREATER THAN " << a << endl;
        }
    }
};

int main() {
    big<int> b1(2, 4);
    b1.check();

    big<float> b2(2.5, 2.8);
    b2.check(); // Use b2 here instead of b1

    return 0;
}
