# include<iostream>
using namespace std;

class student
{
    char name[20];
    int roll_no;
    public:
            void getdata();
            void display();
};

void student :: getdata()
{
    cout<<"ENTER THE NAME OF STUDENT: \n";
    cin>> name;

    cout<<"ENTER THE ROLL NUMBER OF STUDENT\n";
    cin>> roll_no;
}

void student :: display()
{
    cout<<"NAME OF STUDENT: "<<name<<endl;
    cout<<"ROLL NUMBER OF STUDENT: "<<roll_no<<endl;
}

int main()
{
    student ram, krish;
    ram.getdata();
    ram.display();

    krish.getdata();
    krish.display();
return 0;
}