# include<iostream>
using namespace std;

class employee
{
    int income,age;
    public:
        void display();
        employee();
};

employee :: employee()
{
    income = 50000;
    age    = 28;
}

void employee :: display()
{
    cout<<income<<"\t"<<age;
}

int main()
{
    employee ramprakaas;

    ramprakaas.display();



return 0;
}