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
        cout << "STUDENT's ROLL NUMBER IS: " << roll_no << endl;
    }
};

class test : public student    // INTERMEDIATE BASE CLASS
{
protected:
    int mrks_maths;
    int mrks_python;

public:
    void get_mrks()
    {
        cout << "ENTER THE MARKS (OUT OF 100):\n";
        cout << "MATHS: ";
        cin >> mrks_maths;

        cout << "PYTHON: ";
        cin >> mrks_python;
    }
};

class result : public test
{
public:
    float totalmrks()
    {
        return (mrks_maths + mrks_python);
    }

    float prcntg()
    {
        return ((totalmrks() / 200) * 100);
    }

    void display()
    {
        cout << "ROLL NO: " << roll_no << endl;
        cout << "TOTAL MARKS (OUT OF 200): " << totalmrks() << endl;
        cout << "PERCENTAGE: " << prcntg() << endl;
    }
};

int main()
{
    result ram;
    ram.get();   // I/P ROLL NO.
    ram.put();   // PRINT ROLL NO.

    ram.get_mrks();  // I/P MARKS

    // ram.totalmrks();    --> AUTOMATICALLY CALLED IN "display()" FUNCTION.

    ram.display();

    return 0;
}