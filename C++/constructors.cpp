/*Constructors in C++

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++ :-

1.)A constructor should be declared in the public section of the class
2.)They are automatically invoked whenever the object is created
3.)They cannot return values and do not have return types
4.)It can have default arguments
5.)We cannot refer to their address
*/

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