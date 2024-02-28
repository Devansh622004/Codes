#include <iostream>
using namespace std;

int count = 0;

class num
{
    int count;

public:
    num()
    {
        count++;
        cout << "THIS IS THE TIME WHEN CONSTRUCTOR IS CALLED FOR OBJECT NUMBER"
             << count << endl;
    }

    ~num()
    {
        cout << "THIS IS THE TIME WHEN DESTRUCTOR IS CALLED FOR OBJECT NUMBER"
             << count << endl;
        count--;
    }
};

int main()
{
    cout << "WE ARE INSIDE OUR MAIN FUNCTION" << endl;
    cout << "CREATING FIRST n1" << endl;
    num n1;
    {
        cout << "ENTERING THIS BLOCK" << endl;
        cout << "CREATING TWO MORE OBJECTS" << endl;
        num n2, n3;
        cout << "EXITING THIS BLOCK";
    }
    cout << "BACK TO MAIN" << endl;
    return 0;
}