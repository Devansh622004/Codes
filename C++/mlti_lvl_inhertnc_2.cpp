#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void get_roll_no()
    {
        cout << "ENTER THE STUDENT ROLL NUMBER\n";
        cin >> roll_no;
    }
    void put_roll_no()
    {
        cout << "STUDENT's ROLL NUMBER IS: " << roll_no << endl;
    }
};

class test : public student
{
protected:
    int subject_1;
    int subject_2;

public:
    void get_mrks()
    {
        cout << "ENTER THE MARKS (OUT OF 100):\n";
        cout << "subject_1: ";
        cin >> subject_1;

        cout << "subject_2: ";
        cin >> subject_2;
    }
    void put_mrks()
    {
        cout << "THE MARKS (OUT OF 100) ARE:\n";
        cout << "subject_1: ";
        cout << subject_1 << endl;

        cout << "subject_2: ";
        cout << subject_2 << endl;
    }
};

class sports
{
protected:
    int badminton;
    int volleyball;

public:
    void get_score()
    {
        cout << "ENTER THE SCORE (OUT OF 100):\n";
        cout << "badminton: ";
        cin >> badminton;

        cout << "volleyball: ";
        cin >> volleyball;
    }
    void put_score()
    {
        cout << "THE MARKS (OUT OF 100) ARE:\n";
        cout << "badminton: ";
        cout << badminton << endl;

        cout << "volleyball: ";
        cout << volleyball << endl;
    }
};

class result : public test, public sports
{
public:
    void display()
    {
        int total_marks = subject_1 + subject_2;
        int total_score = badminton + volleyball;

        cout << "ROLL NO: " << roll_no << endl;
        cout << "TOTAL MARKS (OUT OF 200): " << total_marks << endl;
        cout << "TOTAL SCORE (OUT OF 200): " << total_score << endl;
    }
};

int main()
{
    result ram;
    ram.get_roll_no();
    ram.put_roll_no();

    ram.get_mrks();
    ram.put_mrks();

    ram.get_score();
    ram.put_score();

    ram.display();

    return 0;
}