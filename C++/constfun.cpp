// Constant member function defined outside the class
#include <iostream>
using namespace std;

class Demo
{
    int x;
public:
    void set_data(int);
    // const member function
    int get_data() const;
};
// Function definition for setting the value of x.
void Demo::set_data(int a) { x = a; }
// Function definition for retrieving the value of x (const
// member function).
int Demo::get_data() const { return x; }

main()
{
    Demo d;
    // Set the value of x to 10 using the non-const member
    // function.
    d.set_data(10);
    // Print the value of x using the const member function.
    cout << d.get_data();

    return 0;
}
