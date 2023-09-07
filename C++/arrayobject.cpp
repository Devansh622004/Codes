# include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:
        void input();
        void output();
};

void employee :: input()
{
    cout<<"ENTER SALARY AND ID";
    cin>>salary;
    cout<<endl;
    cin>>id;
}

void employee :: output() 
{
    cout<<"SALARY AND ID ARE :"<<salary;
    cout<<endl;
    cout<<id;
}

int main()
{
    int i;
    employee e[5];
    for(i=0;i<5;i++)
    {
    e[i].input();
    }
    for(i=0;i<5;i++)
    {
    e[i].output();
    }
    return 0;
}