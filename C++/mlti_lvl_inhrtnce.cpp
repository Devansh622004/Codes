#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void get()
    {
        cout << "ENTER THE STUDENT ROLL NUMBER\n";
        cin >> roll_no;
    }
    void put()
    {
        cout << "STUDENT's ROLL NUMBER IS: " << roll_no;
    }
};

class test
{
protected:
    int mrks_maths;
    int mrks_python;

public:
    void get_mrks()
    {
        cout << "ENTER THE MARKS\n";
        cout << "MATHS: ";
        cin >> mrks_maths;

        cout << "PYTHON: ";
        cin >> mrks_python;
    }
};

class result
{
    
};

int main()
{
    return 0;
}