#include <iostream>
using namespace std;

class student
{
    int id;
    string name;
    int age;

public:
    student(int i, int a, string n)
    {
        this->id = i;
        this->age = a;
        this->name = n;
    }
    void display()
    {
        cout << "id:" << id << "  age" << age << "  name" << name << endl;
    }
};

int main()
{
    student s1(2038, 18, "dev");
    student s2(2043, 20, "prak");

    s1.display();
    s2.display();

    return 0;
}